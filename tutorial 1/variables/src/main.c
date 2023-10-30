#include <stdio.h>

int main(int argc, char const *argv[])
{

    // when creating a variable in C, you must tell the computer a couple pieces of information about that variable.
    // the first thing you have to tell the computer is what type of information you want the variable to store.

    // this variable stores a single character.
    // the 'char' is where you specify what type of data is being stored. in this case, a character is being stored, so char has been typed there.
    // the 'x' is where you specify the name of the variable,
    // and next to the equals sign is where you specify the data you want to be stored.
    char x = "e";

    // in order to store more than one character, you must put an open and closed square brackets after the name of the variable.
    char characterName[] = "Tom";

    // in order to store an integer number, 'int' is used to specify that.
    int characterAge = 67;

    // the '%_' acts as a placeholer for a variable, and the '_' will represent what kind of variable is going to go in that location.
    // after the quotes, you specify the name of the variable that you want to be placed where the '%_' is.
    // if you want to add multiple variables, simply add more placeholders, and the order of the variables will be what order they are inserted into the placeholders.
    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);
    
    // in order to modify a variable, you don't need to specify what type of data it is storing, you only need to specify what the data being stored should be.
    characterAge = 30;
    
    printf("He really liked the name %s\n", characterName);
    printf("but he did not like being %d.\n", characterAge);


    return 0;
}
