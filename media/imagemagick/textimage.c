#include <stdio.h>

int textimage(){

    char text2image;
    char pointsize;
    char background;
    char fill;

    printf("Enter text: ");
    scanf("%s",&text2image);
    printf("Enter pointsize: ");
    scanf("%s",&pointsize);
    printf("Enter background color:");
    scanf("%s",&background);
    printf("Enter fill color: ");
    scanf("%s", &fill);

    //set some variables

    char start = "convert -background ";
    char next = " -fill ";
    char next2 = " -pointsize ";
    char next3 = " label:";
    char final = " out.jpg";

    //run the command after concatenation of the strings

    char command = strcat(start,&background,next,&fill,next2,&pointsize,next3,&text2image,final);
    system(command);
    return 0;
}