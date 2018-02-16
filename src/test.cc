// test.cc  test the Convolution function
// Copyright (C) 2018  Maxwell Anderson
//
// This file is part of convolutionalg.
//
// Convolutionalg is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Convolutionalg is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with convolutionalg.  If not, see <http://www.gnu.org/licenses/>.

#include <Convolution.h>
#include <cstddef>
#include <iostream>
#include <vector>

int main() {
  std::vector<double> arr1 { 1.2, 2.3, 3.4, 4.3 };
  std::vector<double> arr2 { 2.1, 3.2, 4.3, 5.4, 6.5 };
  std::vector<double> arr3 { Convolution(arr1, arr2) };
  size_t arr3_size { arr3.size() };

  for (int x = 0; x < arr3_size; ++x) {
    std::cout << arr3[x] << std::endl;
  }
  return 0;
}
