#include<stdio.h>
#include<math.h>
int donbale(int c, int s, int k, int n){
    if(n==0 || n%k != 0){
        if(c < s){
            return n;
        }
        else {
           n = donbale(c-s,s,k,n+1);
           return n;
        }
    }
    else {
        n = donbale(c,s,k,n+1);
        return n;
    }
}
int main(){
    int c=0,s=0,result=0, k=0;
    double k1=0,k2=0;
    scanf("%d %d %d/%d",&c, &s, &k1, &k2);
    k = k2/k1;
    result = donbale(c,s,k,0);
    printf("%d", result);
}