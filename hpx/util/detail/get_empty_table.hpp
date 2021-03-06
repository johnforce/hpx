//  Copyright (c) 2011 Thomas Heller
//  Copyright (c) 2013 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !BOOST_PP_IS_ITERATING

#ifndef HPX_FUNCTION_DETAIL_GET_EMPTY_TABLE_HPP
#define HPX_FUNCTION_DETAIL_GET_EMPTY_TABLE_HPP

#include <hpx/config/forceinline.hpp>

#include <boost/preprocessor/iteration/iterate.hpp>
#include <boost/preprocessor/repetition/enum_params.hpp>

#include <typeinfo>

namespace hpx { namespace util { namespace detail
{
    template <typename Sig, typename IArchive, typename OArchive>
    struct empty_vtable;
}}}

#if !defined(HPX_USE_PREPROCESSOR_LIMIT_EXPANSION)
#  include <hpx/util/detail/preprocessed/get_empty_table.hpp>
#else

#if defined(__WAVE__) && defined(HPX_CREATE_PREPROCESSED_FILES)
#  pragma wave option(preserve: 1, line: 0, output: "preprocessed/get_empty_table_" HPX_LIMIT_STR ".hpp")
#endif

#define BOOST_PP_ITERATION_PARAMS_1                                             \
    (                                                                           \
        3                                                                       \
      , (                                                                       \
            0                                                                   \
          , HPX_FUNCTION_ARGUMENT_LIMIT                                         \
          , <hpx/util/detail/get_empty_table.hpp>                               \
        )                                                                       \
    )                                                                           \
/**/
#include BOOST_PP_ITERATE()

#if defined(__WAVE__) && defined (HPX_CREATE_PREPROCESSED_FILES)
#  pragma wave option(output: null)
#endif

#endif // !defined(HPX_USE_PREPROCESSOR_LIMIT_EXPANSION)

#endif

#else

#define N BOOST_PP_ITERATION()

namespace hpx { namespace util { namespace detail {

    template <
        typename R
      BOOST_PP_COMMA_IF(N) BOOST_PP_ENUM_PARAMS(N, typename A)
    >
    struct get_empty_table<
        R(BOOST_PP_ENUM_PARAMS(N, A))
    >
    {
        template <typename IArchive, typename OArchive>
        BOOST_FORCEINLINE static vtable_ptr_base<
            R(BOOST_PP_ENUM_PARAMS(N, A))
          , IArchive
          , OArchive
        >*
        get()
        {
            typedef
                empty_vtable<
                        R(BOOST_PP_ENUM_PARAMS(N, A))
                      , IArchive
                      , OArchive
                    >
                vtable_type;

            typedef
                vtable_ptr<
                    R(BOOST_PP_ENUM_PARAMS(N, A))
                  , IArchive
                  , OArchive
                  , vtable_type
                >
                vtable_ptr_type;

            static vtable_ptr_type ptr;
            return &ptr;
        }
    };
}}}

#undef N

#endif
