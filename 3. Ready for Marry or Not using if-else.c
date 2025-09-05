#include <stdio.h>

int main() {
    char gender;
    int age;

    printf("Enter your gender(M/m for male, F/f for female): ");
    scanf(" %c", &gender); 

    if (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f') {
        printf("Enter a valid gender.\n");
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    if ((gender == 'M' || gender == 'm') && age >= 21) {
        printf("You can marry.\n");
    } 
    else if ((gender == 'M' || gender == 'm') && age < 21) {
        printf("Padhai likhai kro, IAS/YAS banno.\n");
    } 
    else if ((gender == 'F' || gender == 'f') && age >= 18) {
        printf("You can marry.\n");
    } 
    else if ((gender == 'F' || gender == 'f') && age < 18) {
        printf("Chhoti bachchi ho.\n");
    } 
    else{
        printf("Are you Kidding! ");
    }
    return 0;
}