#include<stdio.h>
int main(){
    int x=0, y=0, max=0, result=0;
    scanf("%d %d", &x, &y);
    for(int i = 1; i <= x; i++){
        if(x%i == 0){
            if(y%i == 0){
                result = i;
            }
        }
    }
    printf("%d",result);
}