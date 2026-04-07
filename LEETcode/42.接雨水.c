//一道非常经典的双指针

/*
算法解析：双指针代替重复遍历

左右记录最大值更新

两个指针的值大小比较

哪个小结算哪个的当前值，结算完移位
*/

int trap(int* height, int heightSize) {



    int left=0;
    int right=heightSize-1;
    int left_max=0;
    int right_max=0;

    int ct=0;
    int sum=0;
    int d=0;
    while(left<right){
        if(height[left]>left_max){
            left_max=height[left];
        }
         if(height[right]>right_max){
            right_max=height[right];
        }

        //左右最高的min-现在的左

        if(right_max>left_max){
            
             ct=left_max-height[left];

             left++;
        }
        else{
              
             ct=right_max-height[right];
             right--;
        }



       

        if(ct>0){
            sum+=ct;
        }

       


    }

    return sum;

    
    
}
