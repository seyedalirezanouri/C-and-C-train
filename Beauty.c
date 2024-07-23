#include<stdio.h>
 // eliminate 0 function
int beautify(int x){
     int x1=0,x2=0,digit=0;
     for (;x!=0;x=x/10){
        digit = x%10;
        if (digit!=0){
            x1+=digit;
            x1=x1 *10;
        }
        }
        for (;x1!=0;x1=x1/10){
            digit = x1%10;
            x2=x2*10;
            x2+=digit; 
        }
    return x2;
}
int main(){
    int x =0, y=0, sum=0, sum1=0;
    scanf("%d %d", &x , &y);
    sum =x+y;
    x= beautify(x);
    y= beautify(y);
    sum1 = x + y;
    sum = beautify(sum);
    printf("%d \n" , sum);
    if (sum==sum1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}