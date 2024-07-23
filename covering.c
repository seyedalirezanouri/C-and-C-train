#include<stdio.h>
int fib(int n){
    int result =0;
    if(n == 1 || n == 2){
        result =1;
    }
    else{
        result = (fib(n - 1) + fib(n - 2)); 
    }
    return result;
}
// The pattern of this problem is exactly like Fibonacci
int main(){
    int a=0, n=0;
    scanf("%d", &a);
    n = fib(a) ;
    printf("%d", n);
}