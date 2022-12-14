# Copyright 2020 Free Software Foundation, Inc.
#
# This file is part of GNU Radio
#
# SPDX-License-Identifier: GPL-3.0-or-later
#

########################################################################
# Check if there is C++ code at all
########################################################################
if(NOT cs330project22_sources)
    MESSAGE(STATUS "No C++ sources... skipping python bindings")
    return()
endif(NOT cs330project22_sources)

########################################################################
# Check for pygccxml
########################################################################
GR_PYTHON_CHECK_MODULE_RAW(
    "pygccxml"
    "import pygccxml"
    PYGCCXML_FOUND
    )

include(GrPybind)

########################################################################
# Python Bindings
########################################################################

list(APPEND cs330project22_python_files
    framer_python.cc
    frame_sync_python.cc
    fec_encoder_python.cc
    fec_decoder_python.cc
    interleaver_python.cc
    deinterleaver_python.cc python_bindings.cc)

GR_PYBIND_MAKE_OOT(cs330project22
   ../../..
   gr::cs330project22
   "${cs330project22_python_files}")

# copy in bindings .so file for use in QA test module
add_custom_target(
  copy_bindings_for_tests ALL
  COMMAND
    ${CMAKE_COMMAND} -E copy "${CMAKE_CURRENT_BINARY_DIR}/*.so"
    ${CMAKE_BINARY_DIR}/test_modules/gnuradio/cs330project22/
  DEPENDS cs330project22_python)

install(TARGETS cs330project22_python DESTINATION ${GR_PYTHON_DIR}/gnuradio/cs330project22 COMPONENT pythonapi)
