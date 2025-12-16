#include "ob.hpp"

int main() {
    vector<char> sand = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!'};
    A skimpy;
    
    skimpy.vec_print(sand);
    return 0;
}

void A::load(vector<char> input) {
    for(int i=0;i<input.size();i++) {
        st.push(input[i]);
    }
    return ;
}

void A::st_print() {
    while(!st.empty()) {
    char top = st.top();
    st.pop();

    printf("%c", top);
}
    return ;
}

void A::vec_print(vector<char> input) {

    stack<char> buffer;

    for(int i=0;i<input.size();i++) {
        if(i>20) {
            break;
        }
        st.push(input[i]);
    }

   while(!st.empty()) {
    buffer.push(st.top());
    st.pop();
   }
   st = buffer;
   st_print();
    return ;
}

A::A() {
    st = {};
}