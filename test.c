#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {

    char* string = strdup("A B C D E F G");
    char* token;
    printf("%s\n", string);

    while ( (token = strsep(&string, " ")) != NULL)
    {
        printf("hello");
        printf("%s\n", token);
    }

    char* input = malloc(sizeof(char) * 100);
    fgets(input, 100, stdin);
    char* testCpy = strdup(input);
    puts("This is the copy");
    puts(testCpy);

    return 0;
}
