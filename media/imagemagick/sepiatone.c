#include <stdio.h>

int sepia(){
    printf("Enter image: ");
    scanf("%s", &image);
    char[] command = "convert ";
    char[] command2 = " -sepia-tone 80%% out.jpg";
    char[] total = strcat(command,&image,command2);
    system(total);
    return 0;
}