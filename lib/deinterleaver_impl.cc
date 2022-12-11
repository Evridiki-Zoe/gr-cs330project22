/* -*- c++ -*- */
/*
 * Copyright 2022 no.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include <gnuradio/io_signature.h>
#include "deinterleaver_impl.h"

namespace gr {
  namespace cs330project22 {

    deinterleaver::sptr
    deinterleaver::make(size_t block_size)
    {
      return gnuradio::make_block_sptr<deinterleaver_impl>(
        block_size);
    }


    /*
     * The private constructor
     */
    deinterleaver_impl::deinterleaver_impl(size_t block_size)
      : gr::sync_block("deinterleaver",
              gr::io_signature::make(0 /* min inputs */, 0 /* max inputs */, 0),
              gr::io_signature::make(0 /* min outputs */, 0 /*max outputs */, 0))
    {
      message_port_register_in(pmt::mp("pdu_in"));
      message_port_register_out(pmt::mp("pdu_out"));

      /* Register the message handler. For every message received in the input
       * message port it will be called automatically.
       */
      set_msg_handler(pmt::mp("pdu_in"),
      [this](pmt::pmt_t msg) {
          this->deinterleaver_impl::deinterleave(msg);
        });
    }

    /*
     * Our virtual destructor.
     */
    deinterleaver_impl::~deinterleaver_impl()
    {
    }

    void deinterleaver_impl::deinterleave(pmt::pmt_t m)
    {
        /* TODO: Add your code here */

        /*
         * FIXME: This just copies the input to the output. Even you do not
         * implement the deinterleaver, it will forward the input message to the next
         * block and everything should work fine
         */
        message_port_pub(pmt::mp("pdu_out"), m);
    }


    int
    deinterleaver_impl::work(int noutput_items,
        gr_vector_const_void_star &input_items,
        gr_vector_void_star &output_items)
    {

      // Tell runtime system how many output items we produced.
      return noutput_items;
    }

  } /* namespace cs330project22 */
} /* namespace gr */
