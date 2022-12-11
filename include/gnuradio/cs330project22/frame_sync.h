/* -*- c++ -*- */
/*
 * Copyright 2022 no.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_CS330PROJECT22_FRAME_SYNC_H
#define INCLUDED_CS330PROJECT22_FRAME_SYNC_H

#include <gnuradio/cs330project22/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace cs330project22 {

    /*!
     * \brief <+description of block+>
     * \ingroup cs330project22
     *
     */
    class CS330PROJECT22_API frame_sync : virtual public gr::sync_block
    {
     public:
      typedef std::shared_ptr<frame_sync> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of cs330project22::frame_sync.
       *
       * To avoid accidental use of raw pointers, cs330project22::frame_sync's
       * constructor is in a private implementation
       * class. cs330project22::frame_sync::make is the public interface for
       * creating new instances.
       */
      static sptr make(uint8_t preamble, uint8_t preamble_len, const std::vector<uint8_t> &sync_word, int mod);
    };

  } // namespace cs330project22
} // namespace gr

#endif /* INCLUDED_CS330PROJECT22_FRAME_SYNC_H */
