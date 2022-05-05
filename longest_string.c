#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
        puts("");

    else
    {
        char *longest_str = argv[1];
        for (int i = 1; i < argc; i++)
        {
            if (strlen(argv[1]) < strlen(argv[i]))
            {
                longest_str = argv[i];
            }
        }
        puts(longest_str);
    }
    return EXIT_SUCCESS;
}
