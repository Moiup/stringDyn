#include "stringDyn.h"


int main(){
    char *s;
    char *s1;
    char *s2;
    char *to_string;

    s1 = stringDyn_create("KALASH");
    s2 = stringDyn_create("magic in the air");

    s = stringDyn_concat_new(s1, s2);

    fprintf(stdout, "%s\n", s);

    s2 = stringDyn_concat_realloc(s2, s1);

    fprintf(stdout, "%s\n", s2);

    to_string = stringDyn_int_to_string(1234512345);

    fprintf(stdout, "%s\n", to_string);

    free(s);
    free(s1);
    free(s2);
    free(to_string);
    return EXIT_SUCCESS;
}

