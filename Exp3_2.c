//To compute the BMI Index of the person
#include <stdio.h>
int main(){
    int weight, height;
    float bmi;
    printf("Enter weight (kg): ");
    scanf("%d", &weight);
    printf("Enter height (m): ");
    scanf("%d", &height);
    bmi = weight / (height * height);
    if(bmi < 18.5){
        printf("Underweight\n");
    } else if(bmi >= 18.5 && bmi < 24.9){
        printf("Normal weight\n");
    } else if(bmi >= 25 && bmi < 29.9){
        printf("Overweight\n");
    } else {
        printf("Obesity\n");
    }
    return 0;
}