/* -*- c++ -*- */
/*
 * Copyright 2022 no.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_CS330PROJECT22_FEC_DECODER_IMPL_H
#define INCLUDED_CS330PROJECT22_FEC_DECODER_IMPL_H

#include <gnuradio/cs330project22/fec_decoder.h>

namespace gr {
  namespace cs330project22 {

    class fec_decoder_impl : public fec_decoder
    {
     private:
       const int d_type;
       void decode(pmt::pmt_t m);

     public:
      fec_decoder_impl(int type);
      ~fec_decoder_impl();

      // Where all the action really happens
      int work(
              int noutput_items,
              gr_vector_const_void_star &input_items,
              gr_vector_void_star &output_items
      );
    };

  } // namespace cs330project22
} // namespace gr

#endif /* INCLUDED_CS330PROJECT22_FEC_DECODER_IMPL_H */
