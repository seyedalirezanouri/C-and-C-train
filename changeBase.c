#include<stdio.h>
int reverse(int a){
    int digit = 0, result=0;
     for (;a!=0;a=a/10){
            digit = a%10;
            result *= 10;
            result +=digit; 
        }
    return result;
}
int changeBase(int a ,int n){
    int backup = a;
    int digit = 0;
    int result =0;
    for(;a > n;a = a/n){
        digit = a%n;
        result+= digit; 
        result *= 10;
    }
    if(a!=n){
        result += a;
    }
    else{
        result += a%n;
        result *= 10;
        result += a/n;
    }
    result = reverse(result);
    for(;backup >= n ;backup = backup/n){
        digit = backup%n;
        if (digit == 0){
            result *= 10;
        }
        else{
            break;
        }
    }
    return result;
}
int week(char a, char b){
    int n =0;
    if (a == 115){
        n=7;
    }
    else if(a==109){
        n=2;
    }
    else if(a==119){
        n=4;
    }
    else if(a==102){
        n=6;
    }
    else if(a==116){
        if(b==117){
            n=3;
        }
        else{
            n=5;
        }
    }
    return n;
}
int main(){
    char a=0,b=0;
    int tedad=0, x=0,result=0 ,n=0;
    scanf("%c%c%*s %d", &a, &b, &tedad);
    if(a==115 && b==117){
        for(int i=0;i<tedad;i++){
            scanf("%d",&x);
            printf("%d \n",x);
        }
    }
    else{
        n =  week(a,b);
        for(int i=0;i<tedad;i++){
            scanf("%d",&x);
            result = changeBase(x,n);
            printf("%d\n", result);
        }
    }
}