#include <stdio.h>

int main(int argc, char const *argv[])
{

    // an integer stores a whole number, positive or negative, but it can't store any decimal numbers. 
    // you don't use any quotes when making an int.
    int age = 40;

    // a double stores a decimal number, positive or negative. 
    // it can also store whole numbers, but it won't store them the same way as an int. a double will store the number 3 as 3.0 unlike an int.
    double gpa = 3.6;

    // this variable stores a single character.
    // the 'char' is where you specify what type of data is being stored. in this case, a character is being stored, so char has been typed there.
    // the 'x' is where you specify the name of the variable,
    // and next to the equals sign is where you specify the data you want to be stored.
    // when specifying a single character, you must always use single quotes, '' and not double quotes "".
    char grade = 'A';

    // in order to store more than one character, you must put an open and closed square brackets after the name of the variable.
    // when specifying more than one character, double quotes "" should always be used instead of single quotes ''.
    // this is actually considered an array in memory.
    // because of this, it acts differently than the other variables types.
    char phrase[] = "Giraffe  Academy";



    return 0;
}
