#ifndef CALCULATOR_H
#define CALCULATOR_H

// screens
void home_screen(void);
float addition_screen(void);
float subtraction_screen(void);
float multiplication_screen(void);
float division_screen(void);
void end_screen(void);

// mathematical operations
float addition(float n1, float n2);
float subtraction(float n1, float n2);
float multiplication(float n1, float n2);
float division(float n1, float n2);

// result screen
void result_screen(float result);

#endif