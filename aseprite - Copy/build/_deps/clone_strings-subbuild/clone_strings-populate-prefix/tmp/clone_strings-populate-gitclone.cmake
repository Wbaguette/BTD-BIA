# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

if(EXISTS "C:/aseprite/build/_deps/clone_strings-subbuild/clone_strings-populate-prefix/src/clone_strings-populate-stamp/clone_strings-populate-gitclone-lastrun.txt" AND EXISTS "C:/aseprite/build/_deps/clone_strings-subbuild/clone_strings-populate-prefix/src/clone_strings-populate-stamp/clone_strings-populate-gitinfo.txt" AND
  "C:/aseprite/build/_deps/clone_strings-subbuild/clone_strings-populate-prefix/src/clone_strings-populate-stamp/clone_strings-populate-gitclone-lastrun.txt" IS_NEWER_THAN "C:/aseprite/build/_deps/clone_strings-subbuild/clone_strings-populate-prefix/src/clone_strings-populate-stamp/clone_strings-populate-gitinfo.txt")
  message(STATUS
    "Avoiding repeated git clone, stamp file is up to date: "
    "'C:/aseprite/build/_deps/clone_strings-subbuild/clone_strings-populate-prefix/src/clone_strings-populate-stamp/clone_strings-populate-gitclone-lastrun.txt'"
  )
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "C:/aseprite/build/bin/data/strings.git"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: 'C:/aseprite/build/bin/data/strings.git'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "C:/Program Files/Git/cmd/git.exe"
            clone --no-checkout --config "advice.detachedHead=false" "https://github.com/aseprite/strings.git" "strings.git"
    WORKING_DIRECTORY "C:/aseprite/build/bin/data"
    RESULT_VARIABLE error_code
  )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once: ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/aseprite/strings.git'")
endif()

execute_process(
  COMMAND "C:/Program Files/Git/cmd/git.exe"
          checkout "origin/main" --
  WORKING_DIRECTORY "C:/aseprite/build/bin/data/strings.git"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'origin/main'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "C:/Program Files/Git/cmd/git.exe" 
            submodule update --recursive --init 
    WORKING_DIRECTORY "C:/aseprite/build/bin/data/strings.git"
    RESULT_VARIABLE error_code
  )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: 'C:/aseprite/build/bin/data/strings.git'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy "C:/aseprite/build/_deps/clone_strings-subbuild/clone_strings-populate-prefix/src/clone_strings-populate-stamp/clone_strings-populate-gitinfo.txt" "C:/aseprite/build/_deps/clone_strings-subbuild/clone_strings-populate-prefix/src/clone_strings-populate-stamp/clone_strings-populate-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: 'C:/aseprite/build/_deps/clone_strings-subbuild/clone_strings-populate-prefix/src/clone_strings-populate-stamp/clone_strings-populate-gitclone-lastrun.txt'")
endif()
