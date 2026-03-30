
/*

本文件用二分查找+递归实现了一个求最大问题

小点有：调整区间防止溢栈，用右移一位代替除法优化
*/


#include<stdio.h>

int max(int a,int b){
    if(a>b){
        return a;
    }
     else {
        return b;
    }
}

int arrmax(int a[],int L,int R){

    if(L==R){
        return a[L];
    }

    else{
        int mid=L+((R-L)>>1);

    int a1=arrmax(a,L,mid);
    int a2=arrmax(a,mid+1,R);  //右区间若不加一，则会触发无穷递归导致溢栈

    return max(a1,a2);



    }
    




}






int main(){

    int a[20]={2,3,44,3,2,3,22,1,2,3,4,1,2,55,4,15,16,11,12,13};

   /*for(int i=0;i<20;i++){
        scanf("%d",&a[i]);
    }*/

    int k=arrmax(a,1,9);


    printf("%d",k);



}