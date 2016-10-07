// out_of_range example

#include <iostream>
#include <stdexcept>
#include <vector>

int main(void) {

  std::vector<int> myvector(10);
  try {
    myvector.at(19) = 21; // vector:at throws an out-of-range - at returns the value at the 20th value 
  }
  catch (const std::out_of_range& oor) {
    std::cerr << "Out of range error:" << oor.what() << "\n"; 
  }
  return 0;
}
