#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int nvmm_start(){
    string[] initialcommands = {"modload nvmm","chown USER:wheel /dev/nvmm", "sudo pkgin install qemu"};

    for(int i = 0; i<sizeOf(initialcommands);i++){
        system(command[i]);
    }

    return 0;
}

int nvmm_create(char[] cpunum, char[] ram, char[] image){
    char[] command1 = "qemu-system-x86_64 -accel nvmm -cpu max -smp cpus=";
    char[] ramcommand = " -m ";
    char[] command2 = "G -display sdl,gl=on";
    char[] command3 = " -cdrom ";
    char[] total = strcat(command1,cpunum,ramcommand,ram,command2,command3,image);
    system(total);
    return 0;
}

int nvmm_create_disk(char[] diskname, char[] disksize[]){
    char[] c1 = "qemu-img create -f qcow2 ";
    char[] c2 = ".qcow2 ";
    char[] c3 = "G";
    char[] total = strcat(c1,diskname,c2,disksize,c3);
    return 0;
}