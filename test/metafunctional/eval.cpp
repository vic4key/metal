// Copyright Bruno Dutra 2015
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#include <boost/mpl2/metafunctional/eval.hpp>

#include "test.hpp"

using namespace boost::mpl2;

template<typename = void>
struct expr0 :
        test::wrap<>
{};

template<typename x>
struct expr1 :
        test::wrap<x>
{};

template<typename x, typename y>
struct expr2 :
        test::wrap<x, y>
{};

template<typename... args>
struct exprn :
        test::wrap<args...>
{};

BOOST_MPL2_ASSERT((std::is_same<eval_t<expr0>, expr0<>::type>));
BOOST_MPL2_ASSERT((std::is_same<eval_t<expr1, void>, expr1<void>::type>));
BOOST_MPL2_ASSERT((std::is_same<eval_t<expr2, void, void*>, expr2<void, void*>::type>));

BOOST_MPL2_ASSERT((std::is_same<eval_t<exprn>, exprn<>::type>));
BOOST_MPL2_ASSERT((std::is_same<eval_t<exprn, short>, exprn<short>::type>));
BOOST_MPL2_ASSERT((std::is_same<eval_t<exprn, short, int>, exprn<short, int>::type>));
BOOST_MPL2_ASSERT((std::is_same<eval_t<exprn, short, int, long>, exprn<short, int, long>::type>));
BOOST_MPL2_ASSERT((std::is_same<eval_t<exprn, short, int, long, long long>, exprn<short, int, long, long long>::type>));

int main()
{
    return 0;
}
