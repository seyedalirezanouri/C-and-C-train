#include<stdio.h>
int main(){
    int n =0, t1=0 ,t2=0 ,t3=0;
    scanf("%d %d %d %d", &n , &t1 , &t2 , &t3);
    if (n%4==0){
        printf("0");
    }
    else if(n%4==3){
       if(t2+t3>=t1){
           if(3*t3 >t1){
           printf("%d",t1);
           }
           else{
            printf("%d", 3*t3);
           }
       }
       else if(3*t3>t2+t3){
           printf("%d", t2+t3);
       }    else{
           printf("%d", 3*t3);
       }
    }   
    else if(n%4==2){
        if(2*t1 > t2){
            if(t2 > 2*t3){
                printf("%d", 2*t3);
            }
            else{
                printf("%d", t2);
            }
        }
        else if(2*t1 > 2*t3){
            printf("%d", 2*t3);
         }
            else 
            {printf("%d",2*t1);

            }
        }
    else if(n%4==1){
        if(t2+t1 > t3){
            if (t3>3*t1){
                printf("%d", 3*t1);
            }
            else{
                printf("%d", t3);
            }
        }
        else if(t1+t2>3*t1){
            printf("%d", 3*t1);
        }
            else{
                printf("%d", t1+t2);
            }
        
            
        
    }
    return 0;
}