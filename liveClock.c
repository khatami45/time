#include<stdio.h>
int main(){
    int time;
    int hours, mint, second;

    printf("Enter the current time: ");
    scanf("%d", &hours);
    scanf("%d", &mint);
    scanf("%d", &second);

    while(1){
        if(hours>24 || mint > 60 || second > 60){
            printf("Error! you Enter a worng value.");
        }
        else{
            if(second < 60){
                mint++;
            }else if(mint < 60){
                hours++;
            }else if(hours < 24){
                
            }

            printf("%d : %d : %d\n",hours, mint, second);
        }
        
    }
}