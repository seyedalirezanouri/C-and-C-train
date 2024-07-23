#include <stdio.h>
#include<math.h>
    int main(){
        double x =0, x2=0, cosinos=0;
        int n=0,equality=0;
        scanf("%d", &n);
        for ( ; equality != n ; ){
            x += 0.00001;
            x2= pow(x,2);
            cosinos= cos(x);
            equality = x2 - cosinos;
        }
        x = floor(1000*x)/1000;
        double x1 = -1 * x;
        printf("%0.3lf \n",x1);
        printf("%0.3lf", x );
        return 0;
    }


      /*
        double n=0;
        scanf("%lf",&n);
        for(double x=sqrt(n)-1;;x+=0.000001){
            if(floor(pow(x,2)-cos(x))==n){
               printf("%0.3lf \n",-x);
                printf("%0.3lf ",x);
                
                break;
            }
        }*/
        
  
