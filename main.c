#include <stdio.h>

// символические константы
#define LOWER  0   /* нижняя граница температур в таблице */
#define UPPER  300 /* верхняя граница */
#define STEP   20  /* величина шага */
#define FTOC   "Fahrenheit to Celsius:"  /* фаренгейты в целсии */
#define CTOF   "Celsius to Fahrenheit:"  /* целсии в фаренгейты */
#define F   "F"  /* фаренгейты */
#define C   "C"  /* целсии */

// вывод таблицы температур по Фаренгейту и Цельсию для fahr = 0, 20, ..., 300
void farToCels(void) {
    float fahr, celsius;
    fahr = LOWER;

    printf("%s\n", FTOC);
    printf("%3s %6s\n", F, C);

    while (fahr <= UPPER) {
        celsius = 5.0 / 9.0 * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);

        fahr = fahr + STEP;
    }
}

// вывод таблицы температур по Фаренгейту и Цельсию для fahr = 0, 20, ..., 300
void celsToFar(void) {
    float fahr, celsius;
    celsius = LOWER;

    printf("%s\n", CTOF);
    printf("%3s %6s\n", C, F);

    while (celsius <= UPPER) {
        fahr = celsius * 9.0 / 5.0 + 32.0;
        printf("%3.0f %6.0f\n", celsius, fahr);

        celsius = celsius + STEP;
    }
}

// вывод таблицы температур по Фаренгейту и Цельсию от 300 градусов до нуля (Упр. 1.5)
void farToCels300ToZero(void) {
    int fahr;

    printf("%s\n", FTOC);
    printf("%3s %6s\n", F, C);

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}


int main(void) {
    farToCels();
    celsToFar();
    farToCels300ToZero();
}