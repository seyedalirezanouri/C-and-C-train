#include<stdio.h>
int main(){
    int n =0, building=0, h=0, max=0;
    scanf("%d", &n);
    for (int i =1;i<=n;i++){
        scanf("%d", &h);
        if (h>max){
            max =h;
            building++;
        }
    }
    printf("%d", building);
    return 0;
}