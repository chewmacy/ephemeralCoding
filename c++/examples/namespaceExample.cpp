#include <iostream> // could be only istream (for input) or ostream (for output)

using namespace std;

//first namespace
namespace first_space {
  void func() {
    cout << "inside first_space\n";
  }
}

namespace second_space {
  void func() {
    cout << "inside second_space\n";
  }
}

int main() {
  // calls function from first namespace
  first_space::func();

  // calls function from second namespace
  second_space::func();

  return 0;
}
