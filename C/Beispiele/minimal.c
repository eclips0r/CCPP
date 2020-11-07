#include <stdio.h>

/*nimmt ein Array in der Kommandozeile als Argumente und printet die Zahl, sowie das dazugehoerige Argument aus*/
int main(int argc, char *argv[])
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%d: %s\n", i, argv[i]);
    }
    return 0;
}