#include<stdio.h>
int main(){
    int width = 0 , line=0, min=0 , remain=0;
    scanf("%d %d", &width, &line );
    min = (width+1)/2;
    remain = ((width/2)-1) - line;
    for(int i=1;i<=width;i++){
        for (int j=1;j<=width;j++){
            if (i==1 || i==width){
                printf("*");
            }
            else if(i==min){
                if(j==i){
                    printf("*");
                }
                else {
                    printf(" ");
                }
            } 
            else if(i>=min-remain && i < min){
                if (j<i || j>width-i+1){
                    printf(" ");
                }
                else if(j==i||j==width-i+1){
                    printf("*");
                }
                else {
                    printf(".");
                }
            } 
            else if( i>= width-line ){
                if(j==i||j==width-i+1){
                    printf("*");
                }
                else if(j<i&&j>width-i+1){
                    printf(".");
                }
                else{
                    printf(" ");
                }
            }
            else{
                if (j==i||j==width-i+1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
    puts("");
    }
    return 0;
}