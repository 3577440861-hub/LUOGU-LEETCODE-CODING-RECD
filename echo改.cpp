#include<stdio.h>

int arr[100],ori[100];


 

 int scan(int a[],int k,int n){

    for(int i=0;i<n;i++){
      
        if (a[i]==k){
            return 1;
        }

        return 0;
      
    }







 }



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





     int n,leg,poi;


    scanf("%d",&n);

    leg=((n+1)*n)/2;

    
    ori[0]=0;

   

    for(int i=0;i<leg;i++){

        scanf("%d",&arr[i]);


    }

    bouble(arr,leg);

     for(int i=leg-1;i>0;i--)
    {
        for(int j=i-1;j>=0;j--){
            poi=arr[i]-arr[j];

            if(scan(arr,poi,leg)&&!scan(arr,arr[j]-poi,leg)){
                ori[i]=1;
            }
            


        }


    }

    for(int i=0;i<leg;i++)

    if(ori[i]==0)
    printf("%d ",arr[i]);














}