#include "stringDyn.h"

int main()
{
    int n_tab;
    int i;
    char **tab;
    char *test = strdup("Bonjour Saint-Louis !!!  !!");

    tab = stringDyn_split(test, " ", 1, &n_tab);
    fprintf(stdout, "%s\n", test);
    fprintf(stdout, "%d\n", n_tab);

    for(i = 0; i < n_tab; i++)
    {
        fprintf(stdout, "%s\n", tab[i]);
    }

    // fprintf(stdout, "%s\n", test);

    return EXIT_SUCCESS;
}
