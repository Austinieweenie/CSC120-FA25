#include <cstdio>
#include <stack>
#include <vector>

using std::printf;
using std::stack;
using std::vector;

class Calc {
private:
    struct lunchbox {
        int num;
        char op;
        lunchbox(int a, char b) {
            num = a;
            op = b;
        }
    };
    stack<lunchbox> senpai;
    int addition(int, int);
    int subtraction(int, int);
    int multiplication(int, int);
    int division(int, int);
   
public:
    struct ice_cream {
        int flavor;
        char cone;
        ice_cream(int a, char b) {
            flavor = a;
            cone = b;
        }
    };
    vector<lunchbox> map_ice_lunch(vector<ice_cream>);
    Calc();
    void road_in(vector<ice_cream>);
      
};
  