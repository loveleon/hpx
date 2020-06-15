//  Copyright (c) 2020 ETH Zurich
//
//  SPDX-License-Identifier: BSL-1.0
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <hpx/config.hpp>
#include <hpx/local_lcos/config/defines.hpp>
#include <hpx/modules/local_lcos.hpp>

#if HPX_LOCAL_LCOS_HAVE_DEPRECATION_WARNINGS
#if defined(HPX_MSVC)
#pragma message("The header hpx/local_lcos.hpp is deprecated, \
    please include hpx/modules/local_lcos.hpp instead")
#else
#warning "The header hpx/local_lcos.hpp is deprecated, \
    please include hpx/modules/local_lcos.hpp instead"
#endif
#endif