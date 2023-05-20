#include <stdio.h>

int localmirror(){
    char commands = {"mkdir -p /var/www/pub/OpenBSD/7.3/amd64","mkdir -p /var/www/pub/OpenBSD/7.3/packages/amd64","mkdir -p /var/www/pub/OpenBSD/7.3/package-stable","mkdir -p /var/www/pub/OpenBSD/patches/7.3/common","doas pkg_add rsync","rsync --rv --progress --delete-delay --delay-updates -fuzzy rsync://mirror.leaseweb.com/openbsd/7.3/amd /var/www/pub/OpenBSD/7.3","rsync -rv --progress --delete-delay --delay--updates --fuzzy --exclude alpha --exclude arm64 --exclude armv7 --exclude hppa --exclude i386 --exclude landisk --exclude loongson --exclude luna88k --exclude macppc --exclude octeon --exclude sgi --exclude sparc64 --exclude amd64 --exclude packages rsync://mirror.leaseweb.com/openbsd/7.3 /var/www/pub/OpenBSD","rsync -rv --progress --delete-delay --delay-updates --fuzzy rsync://mirror.leaseweb.com/openbsd/7.3/packages/amd64 /var/www/pub/OpenBSD/7.3/packages","rsync -rv --progress --delete-delay --delay-updates --fuzzy rsync://mirror.leaseweb.com/openbsd/7.3/packages-stable/amd64 /var/www/pub/OpenBSD/7.3/packages-stable/amd64","rsync -rv --progress --delete-delay --delay-updates --fuzzy --exclude arm64 --exclude i386 rsync://mirror.leaseweb.com/openbsd/syspatch/7.3 /var/www/pub/OpenBSD/syspatch/7.3","rcctl enable httpd","rcctlstart httpd"};
    for(int i=0;i<sizeOf(commands);i++){
        system(commands[i]);
    }
    printf("\nVisit daulton.ca for how to setup your /etc/httpd file\n");
}