/* -*- c++ -*- */
/*
 * Copyright 2022 no.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_CS330PROJECT22_FRAMER_IMPL_H
#define INCLUDED_CS330PROJECT22_FRAMER_IMPL_H

#include <gnuradio/cs330project22/framer.h>

namespace gr {
  namespace cs330project22 {

    class framer_impl : public framer
    {
     private:
       void construct(pmt::pmt_t m);

     public:
      framer_impl(uint8_t preamble, size_t preamble_len, const std::vector<uint8_t> &sync_word );
      ~framer_impl();

      // Where all the action really happens
      int work(
              int noutput_items,
              gr_vector_const_void_star &input_items,
              gr_vector_void_star &output_items
      );
    };

  } // namespace cs330project22
} // namespace gr

#endif /* INCLUDED_CS330PROJECT22_FRAMER_IMPL_H */
