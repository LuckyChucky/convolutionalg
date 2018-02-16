// Convolution.h  a function that implements the convolution algorithm
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

#ifndef CONVOLUTIONALG_INCLUDE_CONVOLUTION_H_
#define CONVOLUTIONALG_INCLUDE_CONVOLUTION_H_

#include <cstddef>
#include <iostream>
#include <vector>

std::vector<double> Convolution(std::vector<double> x, std::vector<double> h) {
  size_t M { x.size() };
  size_t N { h.size() };
  std::vector<double> output;
  output.resize(M + N - 1);

  for (int n = 0; n <= M + N - 2; ++n) {
    for (int k = 0; k <= N; ++k) {
      if (n - k >= 0) {
        output[n] += x[k] * h[n - k];
      }
    }
  }
  return output;
}

#endif
