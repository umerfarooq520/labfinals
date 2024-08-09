#include<stdio.h>
int main(){
    int monthly_saving=1000;
    int total_saving=0;
    int car_amount=169700;
    int i;
    for(i=1;total_saving<car_amount;i++){
            if(i%6==0){
                    total_saving += 1025;
            }
            else{
                total_saving += monthly_saving;
            }
    }
    printf("No of Month he will take to buy a car is %d\n", i);
    float year = i/12.0;
    printf("Number of years to buy a car is: %0.1f", year);
    

return 0;}
