#include <stdio.h>

//setup an environment for distribution constructor

void distribution_constructor(){
    char commands[] = {"mkdir distro-const","cd distro-const","pfexec pkg install install/distribution-constructor","cp /usr/share/distro_const/slim_cd/slim_cd_x86.xml .","pfexec distro_const build slim_cd_x86.xml"};
    for(int i = 0; i<sizeof(commands);i++){
        system(commands[i]);
    }
}