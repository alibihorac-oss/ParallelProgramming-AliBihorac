#include <stdlib.h>

int main(int argc, char *argv[]){
    int iops = 0, ival = 0;
    int *iarray = (int *) malloc(10*sizeof(int));
    if (argc == 2) ival = atoi(argv[1]);
    for (int i = 0; i < 10; i++)
    {
        iarray[i] = iops;
    }
    for (int i = 0; i < 10; i++)
    {
        if (ival == iarray[i]) iops = i;
    }
    free(iarray);
    return 0;
}
