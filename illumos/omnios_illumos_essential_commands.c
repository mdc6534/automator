#include <stdio.h>
#include <stdlib.h>

//pull in the necessary hardware check for bhyve

int omniosbhyvecompatchecker(){
    system("curl -o /tmp/bhhwcompat https://downloads.omnios.org/misc/bhyve/bhhwcompat && chmod +x /tmp/bhhwcompat && pfexec /tmp/bhhwcompat");
    return 0;
}

//function to create a simple bhyve vm

int omniosbhyvesetupnewvm(){

    char zone_bhyve_name;
    char zone_size;
    
    printf("Enter zone name: ");
    scanf("%s", &zone_bhyve_name);
    printf("Enter zone size: ");
    scanf("%s", &zone_size);
    char maincommand[] = "dladm create-nic -l net0 bhyve0 &&";
    char secondcommand[] = "zfs create -V";
    char thirdcommand[] = "G rpool/bhyve0 &&";
    char fourthcommand[] = "zonecfg -z ";
    char fifthcommand[] = " && /usr/lib/brand/bhyve/socat /data/zone/bhyve/root/tmp/vm.vnc 5905";
    char totalcommand[] = str(maincommand,secondcommand,&zone_size,thirdcommand,&zone_bhyve_name,fifthcommand);
    system(totalcommand);
    return 0;
}

//ISC DHCP server

int omniosiscdhcp(){
    system("sudo pkg install isc-dhcp nano && sudo nano /etc/dhcpd.conf");
    system("svccfg -s dhcp:ipv4 setprop config/listen_ifnames = e1000g0 && svccfg -s dhcp:ipv4 refresh && svcadm enable dhcp:ipv4");
    return 0;
}