#include<stdio.h>
#include<time.h>
int main(){
    int times;
    int thour, tmin;
    int hour, min, second;

    printf("Enter the time in second: ");
    scanf("%d", &times);
    
   /*
    times = time(NULL);
    printf("current tine in second is: %d\n", times);
   */
    second = times % 60;
    tmin = times / 60;
    min = tmin % 60;
    hour = tmin / 60;

    printf(" %d : %d : %d ", hour, min, second);
    

}