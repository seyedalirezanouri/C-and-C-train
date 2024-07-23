#include<stdio.h>
int main (){
    int n = 0, max=0;
    scanf("%d", &n);
    max = (n+1)/2;
    for(int i=1;i<=n;i++){
        int ascii = 64;
        for(int j =1 ; j<=i; j++){
            if(i<=max){
                ascii += i;
                printf("%c", ascii);
            }
            else if (j<=n+1-i){
                    ascii+=i;
                    printf("%C",ascii);
            }
            printf(" ");
        }   
        puts(" ");
    }
    return 0;
}
