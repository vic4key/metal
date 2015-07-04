/// @copyright Bruno Dutra 2015
/// Distributed under the Boost Software License, Version 1.0.
/// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#ifndef METAL_ALGORITHM_DETAIL_NA_HPP
#define METAL_ALGORITHM_DETAIL_NA_HPP

#include <type_traits>

namespace metal
{
    namespace detail
    {
        // not available
        struct na;

        template<typename x>
        using is_na = std::is_same<x, na>;
    }
}

#endif