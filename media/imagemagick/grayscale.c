#include <stdio.h>

int grayscale(){
    char image;

    printf("Enter image: ");
    scanf("%s",&image);
    char command = "convert ";
    char command2 = " -grayscale average out.jpg";
    char total = strcat(command,&image,command2);
    system(total);
    return 0;
}