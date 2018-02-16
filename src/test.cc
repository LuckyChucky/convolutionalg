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
