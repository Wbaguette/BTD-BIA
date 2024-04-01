#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cmark::cmark" for configuration "RelWithDebInfo"
set_property(TARGET cmark::cmark APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(cmark::cmark PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/cmark.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/cmark.dll"
  )

list(APPEND _cmake_import_check_targets cmark::cmark )
list(APPEND _cmake_import_check_files_for_cmark::cmark "${_IMPORT_PREFIX}/lib/cmark.lib" "${_IMPORT_PREFIX}/bin/cmark.dll" )

# Import target "cmark::cmark_static" for configuration "RelWithDebInfo"
set_property(TARGET cmark::cmark_static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(cmark::cmark_static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "C"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/cmark_static.lib"
  )

list(APPEND _cmake_import_check_targets cmark::cmark_static )
list(APPEND _cmake_import_check_files_for_cmark::cmark_static "${_IMPORT_PREFIX}/lib/cmark_static.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
