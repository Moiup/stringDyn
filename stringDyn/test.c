#include "stringDyn.h"

int main()
{
    char *debut = strdup("debut");
    char *fin = strdup("fin");
    char *new = NULL;

    debut = stringDyn_concat_realloc(debut, fin);

    fprintf(stdout, "%d\n", strlen(fin));
    fprintf(stdout, "%s %d\n", debut, strlen(debut));

    new = stringDyn_concat_new(debut, fin);

    fprintf(stdout, "%s %d\n", new, strlen(new));

    fprintf(stdout, "TEST_1\n");
    free(debut);
    fprintf(stdout, "TEST_2\n");
    free(fin);
    fprintf(stdout, "TEST_3\n");
    free(new);
    fprintf(stdout, "TEST_4\n");

    return EXIT_SUCCESS;
}
