#include <stdio.h>
#include<stdlib.h>
double random(int n, int x){
    double result =0;
    for(int i = 1;i <= n; i++){
        result += (rand()%x)+1;
        printf("%d",result);
    }
    result /= n;
    return result;
}
int main(){
    int n =0;
    double result =0;
    scanf("%d", &n);
    result = random(10,n);
    printf("%0.1lf",result);
    return 0;
}