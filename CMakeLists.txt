# Galactic ERP CMake file
#
# Copyright (C) 2023  Infinity Surge Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.
cmake_minimum_required(VERSION 3.4)
project (GALAXY_ERP VERSION "0.0.0" LANGUAGES CXX)

# CMAKE_MODULE_PATH is a CMAKE variable. It contains a list of paths 
# which could be used to search CMAKE modules by "include()" or "find_package()", but the default value is empty.
# Add cmake dir to search list
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

get_filename_component(NATIVE_ROOT "${CMAKE_CURRENT_SOURCE_DIR}" ABSOLUTE)
message( "-- NATIVE_ROOT = ${NATIVE_ROOT}")

#SET(BUILD_DOCS 1)
include(documentation)

include(gtest)

enable_testing()


# Libraries
subdirs(libs)