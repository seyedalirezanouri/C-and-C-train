#include<stdio.h>
#include <stdlib.h>
#include <math.h>
long long int reverse(long long int a){
    long long int digit = 0, result=0;
     for (;a!=0;a=a/10){
            digit = a%10;
            result *= 10;
            result +=digit; 
        }
    return result;
}
int counter(long long int a){
    int n =0;
    for (;a > 0;){
        a = a/10;
        n++;
    }
    return n;
}
int main(){
    long long int password=0,m=0,n=0;
    scanf("%lld %lld", &m,&password);
    long long int password_bu = password;
    password = abs(password);
    long long int result = password;
    n=counter(password);
    m=m-n;
    for(;m >= n; m=m-n){
       result*=pow(10,n);
       result+=reverse(password);
       password = reverse(password);
    }
    for(int i=1; i <= m; i++){
        result *=10;
        result = result + (password%10);
        password = password/10;
    }
    if(password_bu < 0){
        result *= -1;
    }
    printf("%lld", result);
}