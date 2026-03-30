#include<stdio.h>


int process(int a[],int num,int n){

    int L_EDGE=0;
    int R_EDGE=n-1;

    for(int i=1;i<n;i++){

        if(a[i]<num){
            a[i]=a[i]^a[L_EDGE];
            a[L_EDGE]=a[i]^a[L_EDGE];//XOR trap,the same zone resulting it turning into 0;
            a[i]=a[i]^a[L_EDGE];
            L_EDGE++;
        }

        else if(a[i]>num){
            a[i]=a[i]^a[R_EDGE];
            a[R_EDGE]=a[i]^a[R_EDGE];
             a[i]=a[i]^a[R_EDGE];
             R_EDGE--;
             i--;

        }













    }














}

























int main(){








}