#include<stdio.h>
int an[20][20]={1};
   

int exam(int a){

    for(int i=0;i<20;i++){

        int flag=0;

        for(int j=0;j<i+1;j++){

            if(a==an[i][j]){
                printf("%d %d",i+1,j+1);
                flag=1;
                break;
            }




        }
        if(flag==1)
        break;
    }


}

int facti(int n){

    if(n==0){
        return 1;
    }


    else 
    return facti(n-1)*n;


}



int main(){

    

    for(int i=1;i<20;i++){

        for(int j=0;j<i+1;j++){

            an[i][j]=facti(i)/(facti(j)*facti(i-j));


        }




    }

    int x;

    scanf("%d",&x);

    exam(x);





}