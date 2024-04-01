# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/aseprite/build/bin/data/strings.git"
  "C:/aseprite/build/_deps/clone_strings-build"
  "C:/aseprite/build/_deps/clone_strings-subbuild/clone_strings-populate-prefix"
  "C:/aseprite/build/_deps/clone_strings-subbuild/clone_strings-populate-prefix/tmp"
  "C:/aseprite/build/_deps/clone_strings-subbuild/clone_strings-populate-prefix/src/clone_strings-populate-stamp"
  "C:/aseprite/build/_deps/clone_strings-subbuild/clone_strings-populate-prefix/src"
  "C:/aseprite/build/_deps/clone_strings-subbuild/clone_strings-populate-prefix/src/clone_strings-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/aseprite/build/_deps/clone_strings-subbuild/clone_strings-populate-prefix/src/clone_strings-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/aseprite/build/_deps/clone_strings-subbuild/clone_strings-populate-prefix/src/clone_strings-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
