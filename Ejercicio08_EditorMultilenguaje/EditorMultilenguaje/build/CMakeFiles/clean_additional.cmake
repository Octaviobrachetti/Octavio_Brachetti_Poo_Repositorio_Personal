# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "")
  file(REMOVE_RECURSE
  "CMakeFiles\\EditorMultilenguaje_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\EditorMultilenguaje_autogen.dir\\ParseCache.txt"
  "EditorMultilenguaje_autogen"
  )
endif()
