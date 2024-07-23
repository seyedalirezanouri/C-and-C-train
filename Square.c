#include<stdio.h>
int donbale(int a,int b,int n){
    int max=0,min=0;
    if(a==0 || b==0){
        n = 0;
        return n;
    }
    else{
        if(a>b){
            max=a;
            min=b;
        }
        else{
            max=b;
            min=a;
        }
        if(max == min){
            n +=1;
            return n;
        }
        else{
        n = donbale(max-min,min, n+1);
        }
    }
    return n;
}
int main(){
    int a=0,b=0,n=0;
    scanf("%d %d", &a, &b);
    n=donbale(a,b,0);
    printf("%d",n);
    return 0;
}