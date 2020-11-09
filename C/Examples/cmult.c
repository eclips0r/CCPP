#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

/*performs a complex multiplication from terminal inputs and returns the calculated values*/
int main(int argc, char *argv[])
{
    double rz, iz;
    if (argc != 5)
    {
        fputs("usage: cmult rx ix ry iy\n", stderr);
        exit(1);
    }
    complexMult(atof(argv[1]), atof(argv[2]), atof(argv[3]), atof(argv[4]), &rz, &iz);
    printf("%f %f\n", rz, iz);
}