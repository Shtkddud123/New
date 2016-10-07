#include <iostream>
#include <thread>

using namespace std;

void hello() {
  cout << "Hello I am thread\n";
}

int main() {
  thread t(hello);
  t.join();
}
