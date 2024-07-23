#include <stdio.h>
int fib ( int n ){
    if (n <= 0){
        return 0;
    }
    else if ( n == 1 || n == 2){
        return 1;
    }
    else { 
        int a = 1, b =1, c = 0;
        for(int i = 3; i <= n; i++){
            c = a + b;
            b = a;
            a = c;
        }
        return c;
    }    
}  
    
int main() {
    int n = 0, result = 0;
    scanf("%d", &n);
    result = fib(n);
    printf("%d", result);
    return 0;

}