/*
大根堆  heapsize

and堆排序 
*/

void swap(int *arr,int a,int b){
    arr[a]=arr[a]^arr[b];
     arr[b]=arr[a]^arr[b];
      arr[a]=arr[a]^arr[b];

}




void HeapInert(int *arr,int index){//将index作为根的树化为大根堆
   while(arr[index]>arr[(index-1)/2]){
    swap(arr,index,(index-1)/2);
    index=(index-1)/2;//追踪父节点
   }
}


//关于越界：index=0包含在while的跳出条件中

//创建heapsize作为堆边界的界定

//如何实现排序？

/*Heapinsert返回大根堆，将0位置最大拿出，末index复制入0位置，heapsize--，末index与堆断链
剩下的结构依旧保持堆的结构，只要再把0上新元素安排好就是新的大根堆*/

//如何安排新的0号？

/*Heapify函数
参数列表 arr，index，heapsize*/


void Heapify(int *arr,int index,int heapsize){

   int left=2*index+1;//左孩子


   while(left<heapsize){//确保左孩子存在

      int largest = left+1<heapsize&&arr[left]<arr[left+1]?left+1 : left;//柿子之争（？兄弟局

      //右可能没有，右孩子存在的话比较大小

      largest = arr[index]>arr[largest] ? index : largest ;//李二凤模拟器

      if(largest==index)
      break;//若已成大根堆，提前结束

      swap(arr,largest,index);//大数往根移动

      index=largest;//追踪0号新元素

      left=2*index+1;//更新左孩子


   }

  

}

