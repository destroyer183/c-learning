#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    // printf prints out plain text that is in double quotes.
    // \n represents a new line.
    // using a backslash can also allow you to print characters you normally wouldn't be able to print, like quotes.
    printf("\"Hello\nWorld!\"\n");


    // in order to print out a number, you must use a format specifier. 
    // a foramt specifier tells the printf function that you want to print out a type of data that isn't plain text in quotes.
    // %d would allow you to print out a number, specifically an int.
    printf("my favourite number is %d\n", 500);

    // %s would allow you to include more text, like when using variables.
    printf("I enjoy eating %s\n", "raspberries");

    // %f would allow you to print a decimal number.
    // C likes to add a '0' to the end of every printed decimal number for some reason.
    printf("the number pi is approximately %f\n", 3.14159);

    int favNum = 90;

    // %d would allow you to print out a number, specifically an int.
    printf("my other favourite number is %d\n", favNum);



    char myChar = 'i';

    // %c would allow you to print a single character.
    printf("my favourite char is %c", myChar);


    

    return 0;
}
