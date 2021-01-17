#include<stdio.h>


/**
 * @brief solution to "Clock-Setting" Problem.
 * 
 * @author Mann Patel (@manncodes)
 *  
 */
int main(){
    int hour,minute,second;
    int isAM=1;
    scanf("%d %d %d",&hour,&minute,&second);
    if(hour>12){
        hour%=12;
        isAM=0;
    }
    printf("%d:%d:%d %s\n",hour,minute,second,(isAM)?"AM":"PM");
}   