#include <stdio.h>
int main() {
    char lowercase;

    do
    {
        printf("Enter an char: ");

        if (scanf(" %c", &lowercase) == 0);

        printf("%c in lowercase is represent as %c :\n ", lowercase, toupper(lowercase));
    }


    while (lowercase != 'Q' && lowercase != 'q'); {

        printf("%c ", lowercase);
     scanf(" %c", &lowercase);
    }

    return 0;
}