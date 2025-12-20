#include <vector>
#include <cstdio>
using std::vector;
using std::printf;

void print_stack(vector<int>);
vector<int> push_down(vector<int>, int);
vector<int> pop_up(vector<int>);
vector<int> push_q(vector<int>, int);
int pop_q(vector<int>);
