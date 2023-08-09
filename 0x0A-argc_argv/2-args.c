#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
        int a = 0;

        while (a < argc)
        {
                printf("%s\n", argv[a]);
                        a++;
        }
        return (0);
}
