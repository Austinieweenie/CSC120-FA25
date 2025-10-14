#include <cstdio>
struct cart_point {
    int x;
    int y;
   };

   void print_cart(cart_point point) {
    printf("(%d, %d)", point.x, point.y);
    return ;
   }
int main() {
   cart_point x = cart_point {5, 2};
   print_cart(x); printf("\n");
    int A = 50;
    int B = 25;
    int C = 30;

    int n = A + B;
    for(int i=0; i<5; i=i+1) {
        n=n-C;
        printf("Hi~ i = %d\n", n);
    }
    
    for(int i=0; i<7; i=i+2) {
        printf("hello there i = %d\n", i);
    }
    return 0;
}