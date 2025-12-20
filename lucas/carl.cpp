#include"header.hpp"

int main() {
    vector<int> l =  {};
    l = push_down(l, 5);
    l = push_down(l, 6);
    printf("%d, %d", l[0], l[1]);

    l = pop_up(l);
    printf("%d\n", l[0]);

    vector<int> q = {};

    q = push_q(q, 10);
    q = push_q(q, 20);
    q = push_q(q, 30);

    print_stack(q);

        int e = pop_q(q);
        printf(" popped %d", e);
        printf("\n%c %d", q[0], q[1]);
    return 0;
}

void print_stack(vector<int> q) {
    for(int i=0; i<q.size(); i++) {printf("%d ", q.at(i));
    }
    return;
}

vector<int> push_down(vector<int> v, int e) {
    v.insert(v.begin(), e);
    return v;
}

vector<int> pop_up(vector<int> v) {
    printf("popped %d\n", v[0]);
    v.erase(v.begin());
    return v;

}

vector<int> push_q(vector<int> q, int e) {
    q.push_back(e);
    return q;
}

int pop_q(vector<int> q) {
    int r = q.at(0);
    q.erase(q.begin());
    return r;
}
