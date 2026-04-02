/*
动态规划，将问题拆分成局部问题，实现局部最优，从而找到最优路径
*/




#include<stdio.h>

int max(int n,int m){

    if(n>m)
    return n;
    else 
    return m;
}



//dp[i]表示以i元素结尾的最长递增子序列长度

//initial dp[i]=1,元素自身

//状态转移 指针到i，遍历j<i 如果有num[i]>num[j] 取max{dp[i],dp[j]+1}

//返回 dp最大
int main(){

    int n;
    scanf("%d",&n);

    int num[n];
    int dp[n];

    for(int i=0;i<n;i++){
        dp[i]=1;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    for(int i=0;i<n;i++){

        for(int j=0;j<i;j++){
            if(num[i]>num[j]){
                dp[i]=max(dp[j]+1,dp[i]);//这个dp[i]在j遍历中不断更新，最后一定能返回最大的链
            }
        }
    }

    int k=0;

    for(int i=0;i<n;i++){

        if(k<dp[i])

        k=dp[i];



    }

    printf("%d",k);






}