#include <stdlib.h>

int compiler(){
    char inputfile;
    char outputfile;
    printf("Enter input file: ");
    scanf("%c",&inputfile);
    printf("Enter output file: ");
    scanf("%c",&outputfile);
    char total = strcat("g++ ",inputfile," -o ",outputfile);
    system(total);
    return 0;
}