#include<stdio.h>
int main(){
    int x=0, y=0, max=0, min=0, result=0;
    scanf("%d %d", &x, &y);
    if(x > y){
        max = x;
        min = y;
    }
    else{
        max = y;
        min =x;
    }
    for(int i =1; i <= min; i++){
        result = max*i;
        if(result % min == 0){
            printf("%d",result);
            break;
        }
    }

}