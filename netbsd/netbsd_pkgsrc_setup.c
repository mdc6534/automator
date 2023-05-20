#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    char setup_pkgsrc_commands = {"ftp ftp://ftp.NetBSD.org/pub/pkgsrc/current/pkgsrc.tar.gz","tar -xzf pkgsrc.tar.gz -C /usr"};
    for(int i = 0; i<sizeOf(setup_pkgsrc_commands);i++){
        system(setup_pkgsrc_commands[i]);
    }
    return 0;
}