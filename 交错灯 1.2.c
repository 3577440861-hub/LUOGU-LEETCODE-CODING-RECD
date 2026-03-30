/*# P1259 黑白棋子的移动

## 题目描述

有 $2n$ 个棋子排成一行，开始为位置白子全部在左边，黑子全部在右边，如下图为 $n=5$ 的情况：

![](https://cdn.luogu.com.cn/upload/image_hosting/dzfwand6.png)

移动棋子的规则是：每次必须同时移动相邻的两个棋子，颜色不限，可以左移也可以右移到空位上去，但不能调换两个棋子的左右位置。每次移动必须跳过若干个棋子（不能平移），要求最后能移成黑白相间的一行棋子。如 $n=5$ 时，成为：

![](https://cdn.luogu.com.cn/upload/image_hosting/yus9ph6d.png)

任务：编程打印出移动过程。

## 输入格式

一个整数 $n$。

## 输出格式

若干行，表示初始状态和每次移动的状态，用 $\verb!o!$ 表示白子，$\verb!*!$ 表示黑子，$\verb!-!$ 表示空行。

## 输入输出样例 #1

### 输入 #1

```
7
```

### 输出 #1

```
ooooooo*******--
oooooo--******o*
oooooo******--o*
ooooo--*****o*o*
ooooo*****--o*o*
oooo--****o*o*o*
oooo****--o*o*o*
ooo--***o*o*o*o*
ooo*o**--*o*o*o*
o--*o**oo*o*o*o*
o*o*o*--o*o*o*o*
--o*o*o*o*o*o*o*

```

## 说明/提示

$ 4\leq n\leq 100$*/

#include<stdio.h>

int arr[300]={0};

int initia(int k){

    for(int i=0;i<k;i++){
        arr[i]=1;
    }

    for(int i=k;i<2*k;i++){
        arr[i]=2;
    }
    arr[2*k]=3;
    arr[2*k+1]=3;

}

int put(int n){
    if(n==1){
       printf("o");
    }
    else if(n==2){
        printf("*");
    }
    else if(n==3){
        printf("-");
    }
    else{
        return 0;
    }
}

void swap1(int k){

    arr[k]=arr[k]^arr[2*k+1];
    arr[2*k+1]=arr[k]^arr[2*k+1];
    arr[k]=arr[k]^arr[2*k+1];

    arr[k-1]=arr[k-1]^arr[2*k];
    arr[2*k]=arr[k-1]^arr[2*k];
    arr[k-1]=arr[k-1]^arr[2*k];




}
void swap2(int k){

     arr[k-1]=arr[k-1]^arr[2*k-2];
    arr[2*k-2]=arr[k-1]^arr[2*k-2];
    arr[k-1]=arr[k-1]^arr[2*k-2];


    arr[k]=arr[k]^arr[2*k-1];
    arr[2*k-1]=arr[k]^arr[2*k-1];
    arr[k]=arr[k]^arr[2*k-1];

    

    

}


int main(){

    int n=0;

    scanf("%d",&n);

    initia(n);

    for(int i=0;i<2*n+2;i++){

        put(arr[i]);

    }

    printf("\n");

    for(int i=0;i<n-1;i++){

        swap1(n-i);

         for(int j=0;j<2*n+1;j++){

        put(arr[j]);


        swap2(n-i);

         for(int j=0;j<2*n+1;j++){

        put(arr[j]);

    }


    printf("\n");

     


    }
}










}