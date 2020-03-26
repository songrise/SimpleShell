#include "builtin.h"

int builtin_command(char **argv)
{
    if (!strcmp(argv[0], "quit"))
    {
        printf("\n*Shell Terminated.*\n");
        exit(0);
    }
    if (!strcmp(argv[0], "help"))
    {
        help();
        return 1;
    }
    if (!strcmp(argv[0], "&")) // ignore single '&'
        return 1;

    return 0;
}

static void help(void)
{
    printf("sample help docs\n");
}