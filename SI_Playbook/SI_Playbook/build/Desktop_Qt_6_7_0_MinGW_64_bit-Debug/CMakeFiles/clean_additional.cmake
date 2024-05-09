# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SI_Playbook_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SI_Playbook_autogen.dir\\ParseCache.txt"
  "SI_Playbook_autogen"
  )
endif()
