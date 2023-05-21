#include <stdlib.h>
#include <stdio.h>

//create the bootstrap file

int create_pkgsrc_bootstrap_file(){
    char file[] = {"BOOTSTRAP_TAR=\"bootstrap-trunk-x86_64-20230313.tar.gz\"","BOOTSTRAP_SHA=\"9cbd71b08358d1acf66eb44faacc78bc2abc77df\"","curl -O https://pkgsrc.smartos.org/packages/SmartOS/bootstrap/${BOOTSTRAP_TAR}","[\"${BOOTSTRAP_SHA}\"=\"$(/bin/digest -a sha1 ${BOOTSTRAP_TAR})\"] || echo \"ERROR: checksum failed\"","tar -zxpf ${BOOTSTRAP_TAR} -C /","PATH=/opt/local/sbin:/opt/local/bin:$PATH","MANPATH=/opt/local/man:$MANPATH"};
    FILE *fp;
    fp = fopen("bootstrap.sh","w+");
    //fprintf(fp,"content");
    fp = file;
    for(int i = 0;i<sizeOf(file);i++){
        fprintf(fp,file[i]);
    }
    fclose(fp);
    return 0;
}

//setup the OS to use it-focuses on OmniOS but COULD work on other illumos distros

int make_pkgsrc_work_setup_desktop(){

    //string arrays for stuff

    char commands[] = {"sudo pkg install git xsvc","sudo chmod +x bootstrap.sh","sudo ./bootstrap.sh","source /etc/profile","pfexec pkg set-publisher -G '*' -g https://sfe.opencsw.org/localhostoih localhostoih"};
    char profile[] = {"PKGSRC_BIN=/opt/local/bin","PKGSRC_SBIN=/opt/local/sbin","PKGSRC_MAN=/opt/local/man","PATH=${PKGSRC_SBIN}:${PKGSRC_BIN}:${PATH}","MANPATH=${PKGSRC_MAN}:${MANPATH}","export PATH","export MANPATH"};
    
    //attach stuff to the user's profile

    FILE *profilefile="~/.profile";
    fopen(profilefile,"a");
    fclose(profilefile);
    
    //exec commands

    for(int i = 0; i < sizeOf(commands); i++){
        system(commands[i]);
    }

    //return

    return 0;
}