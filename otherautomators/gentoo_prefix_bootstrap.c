#include <stdio.h>

int gentooprefix(){
    char[] commands = {"wget https://gitweb.gentoo.org/repo/proj/prefix.git/plain/scripts/bootstrap-bash.sh", "chmod +x bootstrap-bash.sh","./bootstrap-bash.sh /var/tmp/bash","export PATH=\"/var/tmp/bash/usr/bin:${PATH}\"","wget https://gitweb.gentoo.org/repo/proj/prefix.git/plain/scripts/bootstrap-prefix.sh","chmod +x bootstrap-prefix.sh","./bootstrap-prefix.sh"};
    for(int i=0;i<sizeOf(commands);i++){
        system(command[i]);
    }
    return 0;
}