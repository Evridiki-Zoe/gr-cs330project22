/* -*- c++ -*- */
/*
 * Copyright 2022 no.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_CS330PROJECT22_FEC_DECODER_H
#define INCLUDED_CS330PROJECT22_FEC_DECODER_H

#include <gnuradio/cs330project22/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace cs330project22 {

    /*!
     * \brief <+description of block+>
     * \ingroup cs330project22
     *
     */
    class CS330PROJECT22_API fec_decoder : virtual public gr::sync_block
    {
     public:
      typedef std::shared_ptr<fec_decoder> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of cs330project22::fec_decoder.
       *
       * To avoid accidental use of raw pointers, cs330project22::fec_decoder's
       * constructor is in a private implementation
       * class. cs330project22::fec_decoder::make is the public interface for
       * creating new instances.
       */
      static sptr make(int type);
    };

  } // namespace cs330project22
} // namespace gr

#endif /* INCLUDED_CS330PROJECT22_FEC_DECODER_H */
