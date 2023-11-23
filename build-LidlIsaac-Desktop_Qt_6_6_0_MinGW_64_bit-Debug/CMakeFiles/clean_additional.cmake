# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appLidlIsaac_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appLidlIsaac_autogen.dir\\ParseCache.txt"
  "appLidlIsaac_autogen"
  )
endif()
