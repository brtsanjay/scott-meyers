#include <iostream>

// Returns size of array as a compile-time constant.
// Parameter has no name, as we only care about
// the number of elements it contains.
// noexcept helps compiler generate better code.
template <typename T, std::size_t N>
constexpr std::size_t arraySize(T (&)[N]) noexcept
{
  return N;
}

int main()
{
  const int values[] = { 1, 1, 2, 3, 5, 8, 13 };
  std::cout << "Length of values = " 
            << arraySize(values) << std::endl;

  int array[arraySize(values)];
  std::cout << "Length of array = " 
            << sizeof(array)/sizeof(array[0]) << std::endl;
}
