#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *longest_str = argv[1];
    if (argc == 1)
    {
        longest_str = "";
    }
    for (int i = 1; i < argc; i++)
    {
        if (strlen(argv[1]) < strlen(argv[i]))
        {
            longest_str = argv[i];
        }
    }
    puts(longest_str);
    return EXIT_SUCCESS;
}
