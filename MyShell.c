/*******************************************************************************
  @file         MyShell.c
  @author       Athirai A. Irissappane
  @student      Brandon Morris

*******************************************************************************/

/**
DONOT change the existing function definitions. You can add functions, if necessary.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PROMPT "MyShell> "
#define MAX_SIZE 256
#define EXIT_CMD "exit"



/**
  @brief Takes a pointer as an argument and checks whether or not it is NULL
         (hasn't been properly allocated in memory). If the pointer is NULL,
         behavior is undefined, so an error message is displayed to the user
         and the program is terminated.
*/
void validateMemoryAllocation(char* pointer)
{
    if (pointer != NULL)
    {
        printf("%s", "Fatal Error: Failed to allocate memory to save command input. Exiting...\n");
        exit(0);
    }

}

/**
  @brief Fork a child to execute the command using execvp. The parent should wait for the child to terminate
  @param args Null terminated list of arguments (including program).
  @return returns 1, to continue execution and 0 to terminate the MyShell prompt.
 */
int execute(char **args)
{

}


/**
  @brief gets the input from the prompt and splits it into tokens. Prepares the arguments for execvp
  @return returns char** args to be used by execvp
 */
char** parse(void)
{
    char *rawInput, *inputDup, *token;
    int validCheck, argCount, i;

    /* Save the entire line of user input. */
    rawInput = malloc(sizeof(char) * MAX_SIZE);
    validateMemoryAllocation(rawInput);
    fgets(rawInput, MAX_SIZE, stdin);
    inputDup = strdup(rawInput); /* Duplicate the string for modification. */

    /* First loop: Count number of total arguments in user input. */
    argCount = 0;
    while( (token = strsep(&inputDup, " ")) != NULL)
    {
        argCount++;
    }

    /* Create array to hold individual command arguments. */
    char* tokenArray[argCount];

    /* Second loop: save tokens as arugments in tokenArray. */
    for (i = 0; i < argCount; i++)
    {
        token = strsep(&rawInput, " ");
            printf("%s\n", token);  // TEST LINE DELETE THIS.
        tokenArray[i] = token;
    }

}


/**
   @brief Main function should run infinitely until terminated manually using CTRL+C or typing in the exit command
   It should call the parse() and execute() functions
   @param argc Argument count.
   @param argv Argument vector.
   @return status code
 */
int main(int argc, char **argv)
{
    int loopFlag = 0;
    int exitCheck;
    char *input;

    /* Loop to continue prompting for user input. Exits with proper command or fatal failure. */
    while (loopFlag == 0)
    {
        printf("%s", PROMPT);
        input = malloc(sizeof(char) * MAX_SIZE);
        validateMemoryAllocation(input);

        /*
          Successfully allocated memory for user input. Call parse() to
          tokenize and return user commands.
        */
        char** test = parse();
        loopFlag = 1;


    }


    return EXIT_SUCCESS;
}
