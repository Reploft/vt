# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\vt1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\vt1_autogen.dir\\ParseCache.txt"
  "vt1_autogen"
  )
endif()
