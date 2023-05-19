#include <stdio.h>

int saturation(){
    string[] mod = {"5","10","15","20","25","30","40","50","60","70","80","90","100","125","150","175","200"};
    printf("Enter image: ");
    scanf("%s", &image);
    for(int i = 0; i<sizeOf(mod);i++){
        char[] command1 = "magick ";
        char[] command2 = " -modulate ";
        char[] command3 = "100,";
        char[] satnum = mod[i];
        char[] command4 = ",100 out_saturation_";
        char[] command5 = mod[i];
        char[] command6 = ".jpg";
        char[] total = strcat(command1,&image,command2,command3,satnum,command4,command5,command6);
        system(total);
    }
    return 0;
}