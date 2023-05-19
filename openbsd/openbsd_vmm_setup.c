#include <stdio.h>

int vmm(){
    string[] vmm = {"rcctl enable vmd","rcctl start vmd","vmctl create -s 50G disk.qcow2","vmctl start -m 1G -L -i 1 -r install73.iso -d disk.qcow2"};
    for(int i=0;i<sizeOf(vmm);i++){
        system(vmm[i]);
    }
}