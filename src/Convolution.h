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
