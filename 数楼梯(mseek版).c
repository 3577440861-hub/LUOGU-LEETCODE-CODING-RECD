#include<stdio.h>
#define MAX 5000
long long arr[MAX];

void arr_st(){  
    for(int i=0;i<MAX;i++){
        arr[i]=-1;
    }
}

long long stairs(int n){

    if(n<=0)return 0;
    
    else if(n==1)return 1;
    else if(n==2)return 2;

    if(arr[n]!=-1)return arr[n];

    else if(arr[n]==-1){
        long long tep=stairs(n-1)+stairs(n-2);
        arr[n]=tep;
        return tep;

    }
}





int main(){
    int n=0;

    scanf("%d",&n);

    arr_st();

    printf("%ld",stairs(n));


}