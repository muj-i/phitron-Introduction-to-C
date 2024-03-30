#include<stdio.h>
int main(){
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);

    printf("Enter your height in Feet: ");
    float heightFeet;
    scanf("%f", &heightFeet);

    printf("Enter your height in Inch: ");
    float heightInch;
    scanf("%f", &heightInch);

    printf("Enter your weight: ");
    float weight;
    scanf("%f", &weight);

    printf("Your age is %d\n", age);

    float heightInCm = (heightFeet * 30.48) + (heightInch * 2.54);
    printf("Your height in CM is %0.2f\n", heightInCm);
    printf("Your weight is %0.2f\n", weight);
    printf("Your BMI is %0.2f\n", weight / ((heightInCm / 100) * (heightInCm / 100)));
    return 0;
}