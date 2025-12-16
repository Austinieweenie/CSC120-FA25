#include <cstdio>
#include <stack>
#include <vector>

using std::stack;
using std::vector;

class A {
private:
   stack<char> st;
public:
    A();
  void load(vector<char>);
  void st_print();
  void vec_print(vector<char>);
};