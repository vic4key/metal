// Copyright Bruno Dutra 2015
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#include "example.hpp"

namespace ex1
{
    /// [ex1]
    template<typename>
    struct expr //evaluable for every argument
    {
        struct type;
    };
    /// [ex1]
}

namespace ex2
{
    /// [ex2]
    template<typename...>
    using expr = void; //not evaluable for any set of arguments
    /// [ex2]
}

namespace ex3
{
    /// [ex3]
    template<typename integral> //evaluable for integral types
    using expr = std::integral_constant<integral, integral{}>;
    /// [ex3]
}

namespace nex1
{
    /// [nex1]
    struct not_an_expr //not a template
    {
        struct type;
    };
    /// [nex1]
}

namespace nex2
{
    /// [nex2]
    template<template<typename...> class...>
    struct not_an_expr //non-type parameter
    {
        struct type;
    };
    /// [nex2]
}

namespace nex3
{
    /// [nex3]
    template<typename integral, integral integral_value> //non-type parameter
    using not_an_expr = std::integral_constant<integral, integral_value>;
    /// [nex3]
}