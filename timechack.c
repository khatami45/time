#include<stdio.h>
#include<unistd.h>
int main(){
    int second, mint, hours;
    printf("Enter the current time: ");

    scanf("%d", &hours);
    scanf("%d", &mint);
    scanf("%d", &second);

    if(hours>24 || mint>60 || second>60){
        printf("Error! you enter worng time.");
    }
    else{

        do{

            printf("current time is: %d : %d : %d\n", hours, mint, second);

            if(second > 59){
                mint++;
                second = 0;
            }
            else{
                second++;
            }

            if(mint > 60){
                hours++;
                mint = 0;
            }

            if(hours > 24){
                hours = 0;
            }
            sleep(1);
            system("clear");
        }while(1);
    }

}
