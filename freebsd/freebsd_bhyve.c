#include <stdio.h>

int freebsd_bhyve(){

    //declare some variables

    char ram;
    char vmname;
    char image;

    printf("Enter ram: ");
    scanf("%s",&ram); //fetch ram input
    printf("VM name: ");
    scanf("%s",&vmname); //set a vm name
    printf("Operating System Image: ");
    scanf("%s",&image); //choose an operating system image
    char command1 = "/usr/sbin/bhyveload -m ";
    char command2 = " -d ";
    char total = strcat(command1,&ram,command2,&image,&vmname); //strcat to concat strings because I couldn't find any other way to merge strings in C
    system(total);
    return 0;
}