#include<stdio.h>
#include<stdlib.h>

int main(){


    struct time{
        int hour;
        int min;


    };

    int m;
    scanf("%d",&m);

    struct time bell[m];

    for(int i=0;i<m;i++){

        scanf("%d:%d",&bell[i].hour,&bell[i].min);
        
    }


    int ln[m-1];

    for(int i=0;i<m-1;i++){
        ln[i]=(bell[i+1].hour-bell[i].hour)*60+(bell[i+1].min-bell[i].min);

    }
int max;

    
    for(int i=0;i<m-3;i++){

    

        int step=0;

        int ti=0;

        for(int j=i;j<m-3;j++){
            ti+=ln[j];
            step++;

            if(ti>10)
            break;


        }


        if(step>max){
            max=step;
        }
        
        
          
        
        }

      
          if(max==2){
            printf("2");
        }
         else if(max==3){
            printf("1");}


            else {
                printf("0");
            }
        
    }








