#include <stdio.h>

int rescale(){

    char video;
    char size;

    printf("Enter video: ");
    scanf("%s",&video);
    printf("Enter size:");
    scanf("%s",&size);
    char command1 = "ffmpeg -i ";
    char command2 = " -c copy -vf scale=";
    char command3 = ":";
    char command4 = " out_scaled.mkv";
    char total = strcat(command1,&video,command2,&size,command3,&size,command4);
    system(total);
    return 0;
}