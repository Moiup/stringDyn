#include "stringDyn.h"

int main()
{
    char * res;
    double d = 1.23345;

    res = stringDyn_float_to_string(d, 6);

    fprintf(stdout, "%f %s\n", d, res);

    free(res);

    return EXIT_SUCCESS;
}
