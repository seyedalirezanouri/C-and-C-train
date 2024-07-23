#include<stdio.h>
double composite(double balance, double deposit, double withdrawal, double interest, int duration){
    for(int i = 0; i < duration; i++){
        balance = balance+ deposit - withdrawal;
        if (balance >=0){
            balance += (interest/100)*balance;
        }    
    }
    return balance;
}
double simple(double balance, double deposit, double withdrawal, double interest, int duration){
    double tempInterest = 0;
    for(int i =0; i < duration; i++){
        balance = balance + deposit - withdrawal;
        if (balance >= 0){
            tempInterest += (interest/100)*balance; 
        }
    }
    balance += tempInterest;
    return balance;
}
int main(){
    double balance=0, deposit=0,  withdrawal=0,  interest=0, remain=0 ; 
    char kind =0 ;
    int duration=0;
    scanf("%c %lf %lf %lf %lf %d", &kind,&balance,&deposit,&withdrawal,&interest,&duration);
    if(kind == 67){
        remain = composite(balance,deposit,withdrawal,interest,duration);
    }
    else {
        remain = simple(balance,deposit,withdrawal,interest,duration);
    }
    printf("Your balance in %d years will be: %0.3lf", duration,remain);
    return 0;
}