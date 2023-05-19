#include <stdio.h>

int freebsd_bhyve(){
    printf("Enter ram: ");
    scanf("%s",&ram);
    printf("VM name: ");
    scanf("%s",&vmname);
    printf("Operating System Image: ");
    scanf("%s",&image);
    char[] command1 = "/usr/sbin/bhyveload -m ";
    char[] command2 = " -d ";
    char[] total = strcat(command1,&ram,command2,&image,&vmname);
    system(total);
    return 0;
}