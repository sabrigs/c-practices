#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Functions
void rock(void);
void scissors(void);
void paper(void);

int main(void)
{
    // Players
    unsigned int user = 0;
    unsigned int robot = 0;
    /*
    rand() é uma função que gera um valor randomico.
    %3 é o módulo, o resto de uma divisão por 3.
    o min. valor do módulo é 0, então +1 para conseguir atingir 1,2 e 3;
    */  

    // Generate random number
    srand(time(0));

    // Intro game
    printf("================================\n");
    printf("LET`S PLAY JO KEN PO!\n");
    printf("================================\n");
    printf("\n");
    
    // Menu
    printf("Choice your weapon!\n");
    printf("[1] Paper\n");
    printf("[2] Rock\n");
    printf("[3] Scissors\n");
    
    // User choice
    printf("Wich one do you choose (insert the option number)? ");
    scanf("%u", &user);

    // Print user answer
    printf("\n");
    switch(user)
    {
        case 1:
            printf("You chose: Paper\n");
            paper();
            break;
        case 2:
            printf("You chose: Rock\n");
            rock();
            break;
        case 3:
            printf("You chose: Scissors\n");
            scissors();
            break;
        default:
            printf("Invalid option. Try again.\n");
            return 0;
            break;
    }
    
    // Robot choice
    robot = rand() % 3 + 1;

    // Print robot choice
    printf("\n");
    switch(robot)
    {
        case 1:
            printf("Robot chose: Paper\n");
            paper();
            break;
        case 2:
            printf("Robot chose: Rock\n");
            rock();
            break;
        case 3:
            printf("Robot chose: Scissors\n");
            scissors();
            break;
    }

    // Fight time

    /*
    [1] Paper
    [2] Rock
    [3] Scissors

    Win
    1 de 2
    2 de 3
    3 de 1
    
    */

    if (user == 1 && robot == 1)
    {
        printf("None of you won, PEEEACEE!\n");
    }
    else if (user == 1 && robot == 2 ||
             user == 2 && robot == 3 ||
             user == 3 && robot == 1)
    {
        printf("YOU WOOOONNN!\n");
    }
    else if (user == 2 && robot == 1 ||
             user == 3 && robot == 2 ||
             user == 1 && robot == 3)
    {
        printf("ROBOT WON! AI WILL KILL US ALL!\n");
    }
}

void rock(void)
{
    printf("    _______\n");
    printf("---'   ____)\n");
    printf("      (_____)\n");
    printf("      (_____)\n");
    printf("      (____)\n");
    printf("---.__(___)\n");
    printf("\n");
}

void paper(void)
{
    printf("     _______\n");
    printf("---'    ____)____\n");
    printf("           ______)\n");
    printf("          _______)\n");
    printf("         _______)\n");
    printf("---.__________)  \n");
    printf("\n");
}

void scissors(void)
{
    printf("    _______\n");
    printf("---'   ____)____\n");
    printf("          ______)\n");
    printf("       __________)\n");
    printf("      (____)\n");
    printf("---.__(___)\n");
    printf("\n");
}