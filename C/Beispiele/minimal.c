#include <stdio.h>

/*takes inputs from terminal arguments and prints the corresponding number with the position of the argument
(.exe name is included within arguments so length is at least 1)*/
int main(int argc, char *argv[])
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%d: %s\n", i, argv[i]);
    }
    return 0;
}
