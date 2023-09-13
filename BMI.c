#include<stdio.h>
int main()
{
    float height, weight, BMI;
    printf("enter your height in meter:\n");
    scanf("%f",&height);
    printf("enter your weight in kg: \n");
    scanf("%f",&weight);
    BMI=weight/(height*height);
    printf("BMI=%.2f\n",BMI);
        if(BMI<18.5){
        printf(" you are underweight \n");
    }
     else if(BMI<25 && BMI>=18.5){
     printf("your weight is normal \n");
     }
     else if(BMI<30&&BMI>=25){
     printf("You are overweight \n");
     }
     else if(BMI>=30){
     printf("You are obese punguza msosi \n");
     }
     else{
     printf("you have put a wrong value \n");
     }
     return 0;
}
