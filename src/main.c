#include <stdio.h>
#include "../include/calculator.h"

int main(void)
{
    int option__operation;
    int result;

    do
    {
        home_screen();

        scanf("%d", option__operation);

        switch (option__operation)
        {
        case 1:
            addition_screen();
            break;
        case 2:
            subtraction_screen();
            break;
        case 3:
            multiplication_screen();
            break;
        case 4:
            division_screen();
        }

        system("cls");
        system("clear");
    } while (option__operation > 4 || option__operation < 1);

    return 0;
}
