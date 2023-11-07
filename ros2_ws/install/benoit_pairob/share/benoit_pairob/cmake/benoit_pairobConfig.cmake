# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_benoit_pairob_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED benoit_pairob_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(benoit_pairob_FOUND FALSE)
  elseif(NOT benoit_pairob_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(benoit_pairob_FOUND FALSE)
  endif()
  return()
endif()
set(_benoit_pairob_CONFIG_INCLUDED TRUE)

# output package information
if(NOT benoit_pairob_FIND_QUIETLY)
  message(STATUS "Found benoit_pairob: 0.0.0 (${benoit_pairob_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'benoit_pairob' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${benoit_pairob_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(benoit_pairob_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${benoit_pairob_DIR}/${_extra}")
endforeach()
