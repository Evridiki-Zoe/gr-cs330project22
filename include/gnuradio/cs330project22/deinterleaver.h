/* -*- c++ -*- */
/*
 * Copyright 2022 no.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_CS330PROJECT22_DEINTERLEAVER_H
#define INCLUDED_CS330PROJECT22_DEINTERLEAVER_H

#include <gnuradio/cs330project22/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace cs330project22 {

    /*!
     * \brief <+description of block+>
     * \ingroup cs330project22
     *
     */
    class CS330PROJECT22_API deinterleaver : virtual public gr::sync_block
    {
     public:
      typedef std::shared_ptr<deinterleaver> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of cs330project22::deinterleaver.
       *
       * To avoid accidental use of raw pointers, cs330project22::deinterleaver's
       * constructor is in a private implementation
       * class. cs330project22::deinterleaver::make is the public interface for
       * creating new instances.
       */
      static sptr make(size_t block_size);
    };

  } // namespace cs330project22
} // namespace gr

#endif /* INCLUDED_CS330PROJECT22_DEINTERLEAVER_H */
