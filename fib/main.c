#include <stdio.h>

int main() {
    int f_atual=1;
    int f_anterior=0;
    int fib=0;
    for(int i=0;i<10;i++) {
        printf("%d\n", f_anterior);
        fib = f_atual+f_anterior;
        f_anterior = f_atual;
        f_atual = fib;
    }
    return 0;
}
