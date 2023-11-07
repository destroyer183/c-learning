#include <stdio.h>

int main(int argc, char const *argv[])
{

    // %f is for a floating point number, either a float or a double.
    // C will always print any float or double to a very precise decimal point, even if the number is an integer. (the number set, not the variable type)
    printf("%f\n", 8.9);

    // printf will automatically do the math needed to turn the two numbers into a sinlge number, and it will work with +-/*
    printf("%f\n", 5.0 + 4.5);

    // when adding an integer and a float/double, the answer will always get converted into a float/double.
    printf("%f\n", 5 + 4.5);

    // this won't actually work properly, because %f is meant for floating point numbers, while the numbers given to printf are both integers.
    // printf("%f", 5 + 4);

    // because of the formatter used, when using %f, this will break and idk why, but while using %d will automatically round the number to the nearest int.
    printf("%f\n", 5 / 4);
    printf("%d\n", 5 / 4);

    double num = 5 / 4;

    // this also works differently, despite conceptually being the exact same thing, although it still doesn't work correctly in the first place.
    printf("%f\n", num);

    // however, if I do it like this, with one of the numbers being a double, it will work just fine.
    printf("%f\n", 5 / 4.0);

    int num2 = 6;

    // this prints a variable.
    printf("%d\n", num2);

    // this funciton returns the first number to the power of the second number.
    // this function will always return a decimal number, so make sure to use %f when printing it (I didn't the first time)
    printf("%f\n", pow(4, 3));

    // this function will return the square root of the inputted number.
    printf("%f\n", sqrt(16));

    // this function will round the inputted decimal number up.
    printf("%f\n", ceil(63.25));

    // this function will round the inputted decimal number down.
    printf("%f\n", floor(63.99));

    return 0;
}
