#include <stdio.h>

int main(int argc, char const *argv[])
{
    // a constant is a value that can not be modified.
    // variables that are constants should have names with no lowercase letters.

    int num = 5;

    printf("%d\n", num);

    num = 8;

    printf("%d\n", num);




    // by writing const either before or after the type of variable is declared, that variable will no longer be mutable.
    // should put const before the type of variable is declared because it looks better.
    const int NUM2 = 4;

    printf("%d\n", NUM2);

    // the line of code below would actually cause an error, because constants can't be changed, and so trying to change one would cause an error.
    // int num2 = 6;

    // a constant can also refer to any number or text that is being used in the program. 
    // in the code below, the text 'Hello' is acutally considered a constant, along with the number 90.
    printf("Hello\n");
    printf("%d\n", 90); 


    return 0;
}
    