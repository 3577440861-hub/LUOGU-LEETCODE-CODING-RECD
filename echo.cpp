#include<stdio.h>



int bouble(int a[],int n){

    int stake=0;

    for(int j=0;j<n-1;j++)
    for(int i=0;i<n-1-j;i++){
        if(a[i]>a[i+1]){
            stake=a[i];
            a[i]=a[i+1];
            a[i+1]=stake;
        }
        
    }

}


int main(){


    int n,leg;


    scanf("%d",&n);

    leg=((n+1)*n)/2;

    int arr[leg];

    for(int i=0;i<leg;i++){

        scanf("%d",&arr[i]);


    }

    bouble(arr,leg);

    int isori[leg];

    isori[0]=1;

    for(int i=leg-1;i>=0;i--)
    {
        for(int j=i-1;j>=0;j--){

            for(int k=0;k<j;k++){
                if(arr[k]+arr[j]==arr[i]){
                     
                }
            }





        }








    }




























}