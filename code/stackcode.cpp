#include <stack>
#include <cstdio>

using std::stack;
using std::printf;

int minus(stack<int> st, int op) {
    printf("your result it %d", (op - st.top()));
    st.pop();
    return 0;
}
int divide(stack<int> st, int op) {
    printf("your result it %d", (op / st.top()));
    st.pop();
    return 0;
}
int mult(stack<int> st, int op) {
    printf("your result it %d", (op * st.top()));
    st.pop();
    return 0;
}
int addition(stack<int> st, int op) {
    printf("your result it %d", (op + st.top()));
    st.pop();
    return 0;
}

stack<int> evaluate (stack<int> st) {
    
    void choice(stack<int> st, int op) {
    if(op == 3333) {
        int new_op = st.top();
        st.pop();
        minus(st, new_op);
    }
    else {
        
    }
    if(op == 5555) {
        int new_op = st.top();
        st.pop();
        mult(st, new_op);
    }
    else {
        
    }
    if(op == 4444) {
        int new_op = st.top();
        st.pop();
        divide(st, new_op);
    }
    else {
        
    }
    if(op == 9999) {
        int new_op = st.top();
        st.pop();
        addition(st, new_op);
    }
    else {
    }
    return st;
}

int main(){
    stack<int> st = {};
    
    st.push(2);
    st.push(4444);
    st.push(3);
    st.push(5555);
    st.push(2);
    st.push(2);
    st.push(5555);
    
    st = evaluate(st);

    int op = st.top();
    st.pop();
    choice(st, op);
    printf("\nstack size %ld\n", st.size());
    while (st.size() > 0) {
        int temp = st.top();
        st.pop();
        st.push(addition(st, op));
        st.push(temp);
        return evaluate(st);
    }


    return 0;
}

