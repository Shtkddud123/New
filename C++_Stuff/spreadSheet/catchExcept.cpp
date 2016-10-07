#include <string>
#include <stdexcept>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main (int argc, char *argv[]) {

  /*
    First we'll incite and catch an exception from the c++ 
    standard library class std::string by attempting to replace 
    a substring starting 
  */

  try {
    std::string().replace(100,1,1,'c');
  } catch (std::out_of_range &e) {
    std::cout << "Caught out_of_range exception: " << e.what() << '\n'; 
  }

  std::string base = "This is a test string";
  std::string base2 = "This is another test string";
  std::string a = base; 

  a.replace(1,10,base2);
  
  cout << a << endl;
  
}
