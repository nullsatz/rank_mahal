#include <time.h>

#include "smahal.h"

int main(int argc, char ** argv) {
    if(argc < 3) {
        printf("Usage:  smahal <nrows> <ncols>\n");
        exit(1);
    }

    char * tail;
    int
      nr = strtol(argv[1], &tail, 0),
      nc = strtol(argv[2], &tail, 0);

    puts(argv[1]);
    puts(argv[2]);

    double * x = Calloc(nr * nc, double);
    int * z = Calloc(nr, int);

    srand(time(0));
    for(int i = 0; i < nr; i++)
      z[i] = ((rand() % 2) == 1);
    for(int i = 0; i < nr * nc; i++)
      x[i] = (double) rand() / (double) RAND_MAX;

    for(int i = 0; i < nc; i++)
      x[i * nr] = x[i * nr + (nc - 1)];

    puts("==== z");
    for(int i = 0; i < nr; i++)
      printf("%d ", z[i]);
    puts("");

    printf("==== x\n");
    printMat(nr, nc, x);

    DMAT * ans = smahal(nr, nc, x, z);

    printf("==== ans\n");
    printMat(ans->nr, ans->nc, ans->data);

    free(ans->data);
    free(ans);

    return 0;
}
