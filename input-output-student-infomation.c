#include <stdio.h>

int main(void)
{
    int age, id = 0;
    float height = 0;
    char name[50];

    // Ask name
    printf("What's your name? ");
    scanf("%s", name);

    // Ask ID
    printf("What's your ID? ");
    scanf("%i", &id);

    // Ask age
    printf("How old are you? ");
    scanf("%i", &age);

    // Ask height
    printf("Type your height (0.00): ");
    scanf("%f", &height);

    // Print student informations
    printf("=============\n");
    printf("Name: %s\n", name);
    printf("ID: %i\n", id);
    printf("Age: %i years\n", age);
    printf("Height: %.2fcm\n", height);

    return 0;
}