#include "skibussy.hpp"




int main() {
    Calc calc;
    vector<Calc::ice_cream> load_eq = {};

    Calc::ice_cream x {0, '+'};
    Calc::ice_cream y {1, 'e'};
    Calc::ice_cream z {1, 'e'};

    load_eq.push_back(x);
    load_eq.push_back(y);
    load_eq.push_back(z);

    calc.road_in(load_eq);

    return 0;
}

void Calc::road_in(vector<ice_cream> x) {
    vector<Calc::lunchbox> mapping = map_ice_lunch(x);
    for(int i=x.size(); i<=0; i=i-1) {
        senpai.push(mapping.at(i));
    }
    return ;
}


vector<Calc::lunchbox> Calc::map_ice_lunch(vector<Calc::ice_cream> x) {
    vector<Calc::lunchbox> ret = {};
    for(int i=0; i<x.size(); i++) {
        lunchbox c(x.at(i).flavor, x.at(i).cone);
        ret.push_back(c);
        printf("%d, %c", c.num, c.op);
    }
    return ret;
}

stack<int> evaluate (stack<int> st) {

    int x = st.top();
    st.pop();

    if (x == "+") {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        if (st.empty()) {
            st.push(addition(y,z));
        } else {
            int temp = st.top();
            st.pop();
            st.push(addition(y,z));
            st.push(temp);
            return evaluate(st);
        }
    } else if (x == -) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        st.push(subtraction(y,z));
        if (st.empty()) {
            st.push(subtraction(y,z));
        } else {
            int temp = st.top();
            st.pop();
            st.push(subtraction(y,z));
            st.push(temp);
            return evaluate(st);
        }
    } else if (x == *) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        st.push(multiplication(y,z));
        if (st.empty()) {
            st.push(multiplication(y,z));
        } else {
            int temp = st.top();
            st.pop();
            st.push(multiplication(y,z));
            st.push(temp);
            return evaluate(st);
        }
    } else if (x == 5) {
        int y = st.top();
        st.pop();
        int z = st.top();
        st.pop();
        st.push(division(y,z));
        if (st.empty()) {
            st.push(division(y,z));
        } else {
            int temp = st.top();
            st.pop();
            st.push(division(y,z));
            st.push(temp);
            return evaluate(st);
        }
    } else {
        printf("FAIL\n");
    }

    return st;
}

int addition(int l, int r)          { return l + r; }
int subtraction(int l, int r)       { return l - r; }
int multiplication(int l, int r)    { return l * r; }
int division(int l, int r)          { return l / r; }