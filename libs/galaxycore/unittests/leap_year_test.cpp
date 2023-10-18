//! \file leap_year_test.cpp
//! \author Joe Turner <joe.turner@infinity-surge.com>
//!
//! \copyright
//! Copyright (c) 2023 Joe Turner.
//!
//! This program is free software; you can redistribute it and/or
//! modify it under the terms of the GNU General Public License
//! as published by the Free Software Foundation; either version 2
//! of the License, or (at your option) any later version.
//! 
//! This program is distributed in the hope that it will be useful,
//! but WITHOUT ANY WARRANTY; without even the implied warranty of
//! MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//! GNU General Public License for more details.
//! 
//! You should have received a copy of the GNU General Public License
//! along with this program; If not, see <http://www.gnu.org/licenses/>.
#include "time/leap_year.hpp"
#include <gtest/gtest.h>

using namespace infinity::time;

TEST(LeapYear_tests, test_is_leap_year)
{
    // 2020 is a leap year.
    ASSERT_EQ(true, isLeapYear(2020));
}

TEST(LeapYear_tests, test_is_not_leap_year)
{
    // 2020 is a leap year.
    ASSERT_EQ(false, isLeapYear(2021));
}

