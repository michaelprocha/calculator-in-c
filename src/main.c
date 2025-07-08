#include <stdio.h>
#include "../include/calculator.h"

int main(void)
{
    int option__operation;
    int end_calculator;

    do
    {
        do
        {
            home_screen();

            scanf("%d", &option__operation);

            switch (option__operation)
            {
            case 1:
                result_screen(addition_screen());
                break;
            case 2:
                result_screen(subtraction_screen());
                break;
            case 3:
                result_screen(multiplication_screen());
                break;
            case 4:
                result_screen(division_screen());
            }
        } while (option__operation > 4 || option__operation < 1);

        do
        {
            end_screen();
            scanf("%d", &end_calculator);
        } while (end_calculator > 2 || end_calculator < 1);

    } while (end_calculator == 1);
    return 0;
}