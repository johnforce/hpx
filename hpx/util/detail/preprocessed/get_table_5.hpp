// Copyright (c) 2007-2013 Hartmut Kaiser
// Copyright (c) 2012-2013 Thomas Heller
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

// This file has been automatically generated using the Boost.Wave tool.
// Do not edit manually.


namespace hpx { namespace util { namespace detail {
    template <
        typename Functor
      , typename R
       
    >
    struct get_table<
        Functor
      , R()
    >
    {
        template <typename IArchive, typename OArchive>
        struct generate_vtable
        {
            typedef
                typename vtable<sizeof(Functor) <= sizeof(void *)>::
                    template type<
                        Functor
                      , R()
                      , IArchive
                      , OArchive
                    >
                type;
        };
        template <typename IArchive, typename OArchive>
        BOOST_FORCEINLINE static vtable_ptr_base<
            R()
          , IArchive
          , OArchive
        >*
        get()
        {
            typedef
                typename generate_vtable<IArchive, OArchive>::type
                vtable_type;
            typedef
                vtable_ptr<
                    R()
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
namespace hpx { namespace util { namespace detail {
    template <
        typename Functor
      , typename R
      , typename A0
    >
    struct get_table<
        Functor
      , R(A0)
    >
    {
        template <typename IArchive, typename OArchive>
        struct generate_vtable
        {
            typedef
                typename vtable<sizeof(Functor) <= sizeof(void *)>::
                    template type<
                        Functor
                      , R(A0)
                      , IArchive
                      , OArchive
                    >
                type;
        };
        template <typename IArchive, typename OArchive>
        BOOST_FORCEINLINE static vtable_ptr_base<
            R(A0)
          , IArchive
          , OArchive
        >*
        get()
        {
            typedef
                typename generate_vtable<IArchive, OArchive>::type
                vtable_type;
            typedef
                vtable_ptr<
                    R(A0)
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
namespace hpx { namespace util { namespace detail {
    template <
        typename Functor
      , typename R
      , typename A0 , typename A1
    >
    struct get_table<
        Functor
      , R(A0 , A1)
    >
    {
        template <typename IArchive, typename OArchive>
        struct generate_vtable
        {
            typedef
                typename vtable<sizeof(Functor) <= sizeof(void *)>::
                    template type<
                        Functor
                      , R(A0 , A1)
                      , IArchive
                      , OArchive
                    >
                type;
        };
        template <typename IArchive, typename OArchive>
        BOOST_FORCEINLINE static vtable_ptr_base<
            R(A0 , A1)
          , IArchive
          , OArchive
        >*
        get()
        {
            typedef
                typename generate_vtable<IArchive, OArchive>::type
                vtable_type;
            typedef
                vtable_ptr<
                    R(A0 , A1)
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
namespace hpx { namespace util { namespace detail {
    template <
        typename Functor
      , typename R
      , typename A0 , typename A1 , typename A2
    >
    struct get_table<
        Functor
      , R(A0 , A1 , A2)
    >
    {
        template <typename IArchive, typename OArchive>
        struct generate_vtable
        {
            typedef
                typename vtable<sizeof(Functor) <= sizeof(void *)>::
                    template type<
                        Functor
                      , R(A0 , A1 , A2)
                      , IArchive
                      , OArchive
                    >
                type;
        };
        template <typename IArchive, typename OArchive>
        BOOST_FORCEINLINE static vtable_ptr_base<
            R(A0 , A1 , A2)
          , IArchive
          , OArchive
        >*
        get()
        {
            typedef
                typename generate_vtable<IArchive, OArchive>::type
                vtable_type;
            typedef
                vtable_ptr<
                    R(A0 , A1 , A2)
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
namespace hpx { namespace util { namespace detail {
    template <
        typename Functor
      , typename R
      , typename A0 , typename A1 , typename A2 , typename A3
    >
    struct get_table<
        Functor
      , R(A0 , A1 , A2 , A3)
    >
    {
        template <typename IArchive, typename OArchive>
        struct generate_vtable
        {
            typedef
                typename vtable<sizeof(Functor) <= sizeof(void *)>::
                    template type<
                        Functor
                      , R(A0 , A1 , A2 , A3)
                      , IArchive
                      , OArchive
                    >
                type;
        };
        template <typename IArchive, typename OArchive>
        BOOST_FORCEINLINE static vtable_ptr_base<
            R(A0 , A1 , A2 , A3)
          , IArchive
          , OArchive
        >*
        get()
        {
            typedef
                typename generate_vtable<IArchive, OArchive>::type
                vtable_type;
            typedef
                vtable_ptr<
                    R(A0 , A1 , A2 , A3)
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
namespace hpx { namespace util { namespace detail {
    template <
        typename Functor
      , typename R
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4
    >
    struct get_table<
        Functor
      , R(A0 , A1 , A2 , A3 , A4)
    >
    {
        template <typename IArchive, typename OArchive>
        struct generate_vtable
        {
            typedef
                typename vtable<sizeof(Functor) <= sizeof(void *)>::
                    template type<
                        Functor
                      , R(A0 , A1 , A2 , A3 , A4)
                      , IArchive
                      , OArchive
                    >
                type;
        };
        template <typename IArchive, typename OArchive>
        BOOST_FORCEINLINE static vtable_ptr_base<
            R(A0 , A1 , A2 , A3 , A4)
          , IArchive
          , OArchive
        >*
        get()
        {
            typedef
                typename generate_vtable<IArchive, OArchive>::type
                vtable_type;
            typedef
                vtable_ptr<
                    R(A0 , A1 , A2 , A3 , A4)
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
namespace hpx { namespace util { namespace detail {
    template <
        typename Functor
      , typename R
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5
    >
    struct get_table<
        Functor
      , R(A0 , A1 , A2 , A3 , A4 , A5)
    >
    {
        template <typename IArchive, typename OArchive>
        struct generate_vtable
        {
            typedef
                typename vtable<sizeof(Functor) <= sizeof(void *)>::
                    template type<
                        Functor
                      , R(A0 , A1 , A2 , A3 , A4 , A5)
                      , IArchive
                      , OArchive
                    >
                type;
        };
        template <typename IArchive, typename OArchive>
        BOOST_FORCEINLINE static vtable_ptr_base<
            R(A0 , A1 , A2 , A3 , A4 , A5)
          , IArchive
          , OArchive
        >*
        get()
        {
            typedef
                typename generate_vtable<IArchive, OArchive>::type
                vtable_type;
            typedef
                vtable_ptr<
                    R(A0 , A1 , A2 , A3 , A4 , A5)
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
namespace hpx { namespace util { namespace detail {
    template <
        typename Functor
      , typename R
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6
    >
    struct get_table<
        Functor
      , R(A0 , A1 , A2 , A3 , A4 , A5 , A6)
    >
    {
        template <typename IArchive, typename OArchive>
        struct generate_vtable
        {
            typedef
                typename vtable<sizeof(Functor) <= sizeof(void *)>::
                    template type<
                        Functor
                      , R(A0 , A1 , A2 , A3 , A4 , A5 , A6)
                      , IArchive
                      , OArchive
                    >
                type;
        };
        template <typename IArchive, typename OArchive>
        BOOST_FORCEINLINE static vtable_ptr_base<
            R(A0 , A1 , A2 , A3 , A4 , A5 , A6)
          , IArchive
          , OArchive
        >*
        get()
        {
            typedef
                typename generate_vtable<IArchive, OArchive>::type
                vtable_type;
            typedef
                vtable_ptr<
                    R(A0 , A1 , A2 , A3 , A4 , A5 , A6)
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
namespace hpx { namespace util { namespace detail {
    template <
        typename Functor
      , typename R
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7
    >
    struct get_table<
        Functor
      , R(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7)
    >
    {
        template <typename IArchive, typename OArchive>
        struct generate_vtable
        {
            typedef
                typename vtable<sizeof(Functor) <= sizeof(void *)>::
                    template type<
                        Functor
                      , R(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7)
                      , IArchive
                      , OArchive
                    >
                type;
        };
        template <typename IArchive, typename OArchive>
        BOOST_FORCEINLINE static vtable_ptr_base<
            R(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7)
          , IArchive
          , OArchive
        >*
        get()
        {
            typedef
                typename generate_vtable<IArchive, OArchive>::type
                vtable_type;
            typedef
                vtable_ptr<
                    R(A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7)
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
