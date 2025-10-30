#include <vector>
#include <cstdio>
using std::vector;


vector<int> push_down(vector<int> v, int e) {
    v.insert(v.begin(), e);
    return v;
}

vector<int> pop_up(vector<int> v) {
    printf("popped %d\n", v[0]);
    v.erase(v.begin());
    return v;

}

int main() {
    vector<int> l =  {};
    l = push_down(l, 5);
    l = push_down(l, 6);
    printf("%d, %d", l[0], l[1]);

    l = pop_up(l);
    printf("%d\n", l[0]);

    return 0;
}