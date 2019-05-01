/*******************************************************************************
  @file         MyShell.c
  @author       Athirai A. Irissappane

*******************************************************************************/

/**
DONOT change the existing function definitions. You can add functions, if necessary.
*/

#include <stdio.h>
#include <stdlib.h>

#define PROMPT "MyShell> "
#define MAX_SIZE 256

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
    char *input;

    /* Loop to continue prompting for user input. Exits with proper command or fatal failure. */
    while (loopFlag == 0)
    {
        printf("%s", PROMPT);
        input = malloc(MAX_SIZE);

        /* Ensure proper memory allocation for user command. */
        if (!input)
        {
            printf("%s", "Fatal Error: Failed to allocate memory to save command input. Exiting...\n");
            return EXIT_FAILURE;
        }

        fgets(input, MAX_SIZE, stdin);

    }


    return EXIT_SUCCESS;
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

}


int getInputLength(char *input)
{

}
