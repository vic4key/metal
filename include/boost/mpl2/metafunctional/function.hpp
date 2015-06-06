// Copyright Bruno Dutra 2015
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#ifndef BOOST_MPL2_METAFUNCTIONAL_FUNCTION_HPP
#define BOOST_MPL2_METAFUNCTIONAL_FUNCTION_HPP

#include <boost/mpl2/metafunctional/eval.hpp>

namespace boost
{
    namespace mpl2
    {
        template<template<typename...> class expr>
        struct function
        {
            using type = function;

            template<typename... args>
            struct call :
                    eval<expr, args...>
            {};
        };
    }
}

#endif
