/* -*- c++ -*- */
/*
 * Copyright 2022 no.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_CS330PROJECT22_FEC_ENCODER_IMPL_H
#define INCLUDED_CS330PROJECT22_FEC_ENCODER_IMPL_H

#include <gnuradio/cs330project22/fec_encoder.h>

namespace gr {
  namespace cs330project22 {

    class fec_encoder_impl : public fec_encoder
    {
     private:
       const int d_type;
       void encode(pmt::pmt_t m);

     public:
      fec_encoder_impl(int type);
      ~fec_encoder_impl();

      // Where all the action really happens
      int work(
              int noutput_items,
              gr_vector_const_void_star &input_items,
              gr_vector_void_star &output_items
      );
    };

  } // namespace cs330project22
} // namespace gr

#endif /* INCLUDED_CS330PROJECT22_FEC_ENCODER_IMPL_H */
