/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(framer.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(55e882fd1d1bda47c394f6fb616c955e)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/cs330project22/framer.h>
// pydoc.h is automatically generated in the build directory
#include <framer_pydoc.h>

void bind_framer(py::module& m)
{

    using framer    = gr::cs330project22::framer;


    py::class_<framer, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<framer>>(m, "framer", D(framer))

        .def(py::init(&framer::make),
           D(framer,make)
        )
        



        ;




}








