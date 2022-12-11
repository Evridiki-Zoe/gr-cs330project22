/* -*- c++ -*- */
/*
 * Copyright 2022 no.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_CS330PROJECT22_DEINTERLEAVER_IMPL_H
#define INCLUDED_CS330PROJECT22_DEINTERLEAVER_IMPL_H

#include <gnuradio/cs330project22/deinterleaver.h>

namespace gr {
  namespace cs330project22 {

    class deinterleaver_impl : public deinterleaver
    {
     private:
       void deinterleave(pmt::pmt_t m);

     public:
      deinterleaver_impl(size_t block_size);
      ~deinterleaver_impl();

      // Where all the action really happens
      int work(
              int noutput_items,
              gr_vector_const_void_star &input_items,
              gr_vector_void_star &output_items
      );
    };

  } // namespace cs330project22
} // namespace gr

#endif /* INCLUDED_CS330PROJECT22_DEINTERLEAVER_IMPL_H */
