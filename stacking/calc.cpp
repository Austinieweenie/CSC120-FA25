#include "calc.hpp"

int main() {

    //stack<int> st  = {};

    st.push(2);
    st.push(4444);
    st.push(3);
    st.push(5555);
    st.push(8);
    st.push(9999);
    st.push(5);
    st.push(5);
    st.push(9999);

    st = evaluate(st);

    printf("result: %d\n", st.top());
    return 0;
}

stack<int> evaluate (stack<int> st) {

    int x = st.top();
    st.pop();

    if (x == 9999) {
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
    } else if (x == 3333) {
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
    } else if (x == 5555) {
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
    } else if (x == 4444) {
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

A::A() {
    st = {};
}