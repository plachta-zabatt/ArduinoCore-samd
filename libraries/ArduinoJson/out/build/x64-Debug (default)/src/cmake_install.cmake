# Install script for directory: C:/Users/plach/AppData/Local/Arduino15/packages/electroniccats/hardware/samd/2.0.6/libraries/ArduinoJson/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/plach/AppData/Local/Arduino15/packages/electroniccats/hardware/samd/2.0.6/libraries/ArduinoJson/out/install/x64-Debug (default)")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ArduinoJson/cmake/ArduinoJsonTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ArduinoJson/cmake/ArduinoJsonTargets.cmake"
         "C:/Users/plach/AppData/Local/Arduino15/packages/electroniccats/hardware/samd/2.0.6/libraries/ArduinoJson/out/build/x64-Debug (default)/src/CMakeFiles/Export/share/ArduinoJson/cmake/ArduinoJsonTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ArduinoJson/cmake/ArduinoJsonTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ArduinoJson/cmake/ArduinoJsonTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ArduinoJson/cmake" TYPE FILE FILES "C:/Users/plach/AppData/Local/Arduino15/packages/electroniccats/hardware/samd/2.0.6/libraries/ArduinoJson/out/build/x64-Debug (default)/src/CMakeFiles/Export/share/ArduinoJson/cmake/ArduinoJsonTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ArduinoJson/cmake" TYPE FILE FILES
    "C:/Users/plach/AppData/Local/Arduino15/packages/electroniccats/hardware/samd/2.0.6/libraries/ArduinoJson/out/build/x64-Debug (default)/ArduinoJsonConfig.cmake"
    "C:/Users/plach/AppData/Local/Arduino15/packages/electroniccats/hardware/samd/2.0.6/libraries/ArduinoJson/out/build/x64-Debug (default)/ArduinoJsonConfigVersion.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "C:/Users/plach/AppData/Local/Arduino15/packages/electroniccats/hardware/samd/2.0.6/libraries/ArduinoJson/src/ArduinoJson.h"
    "C:/Users/plach/AppData/Local/Arduino15/packages/electroniccats/hardware/samd/2.0.6/libraries/ArduinoJson/src/ArduinoJson.hpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "C:/Users/plach/AppData/Local/Arduino15/packages/electroniccats/hardware/samd/2.0.6/libraries/ArduinoJson/src/ArduinoJson")
endif()

