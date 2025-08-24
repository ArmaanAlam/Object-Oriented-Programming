// Function Template 
// Syntax of Function Template:
// template < class Ttype> ret_type func_name(parameter_list)



// #include <iostream>
// using namespace std;

// template <class T1, class T2>
// T2 get(T1 a, T2 b) {
//   return a * b;
// }

// int main() {
//   cout<<get(3, 5.54);
//   return 0;
// }
//output 16.62


#include <iostream>
using namespace std;

template <class T1, class T2>
T1 get(T1 a, T2 b) {
  return a * b;
}

int main() {
  cout<<get(3, 5.54);
  return 0;
}
//output 16