#include <stdio.h>

int main(int argc, char const *argv[])
{

    char characterName[] = "Tom";

    int characterAge = 67;

    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);
    
    characterAge = 30;
    
    printf("He really liked the name %s\n", characterName);
    printf("but he did not like being %d.\n", characterAge);


    return 0;
}