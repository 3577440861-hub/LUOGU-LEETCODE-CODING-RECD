#include<stdio.h>

//题目要求
/*
n个箱子，分别有{x,y,z}长宽高三个参数，以此堆放，上面的箱子长宽小于 下面//箱子不能旋转

返回最高箱子堆 

*/


/*
解决：
定义dp[n]数组用来存放以i为top的塔高
初始化dp[i]=box[i].z

以x对箱子从大arrange

然后对i箱子遍历j<i



if(box[i].y<box[j].y&&box[i].x<box[j].x){
取max{dp[i],dp[j]+box[i].z}
}
*/
int main(){

    int n;

    scanf("%d",&n);

    int dp[n];


    struct box 
    {
        int x;

        int y;

        int z;
    };

    struct box stac[n];

    for(int i=0;i<n;i++){
        scanf("%d %d %d",&stac[i].x,&stac[i].y,&stac[i].z);
    }

    for(int i=0;i<n;i++){
        dp[i]=stac[i].z;
    }//dp初始化


    for(int i=0;i<n;i++){

    }//排序x

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(stac[i].y<stac[j].y&&stac[i].x<stac[j].x){
                dp[i]=max(dp[i],dp[j]+stac[j].z);
            }
            

        }
    }

    

    



}