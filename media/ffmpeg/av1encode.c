#include <stdio.h>

int av1encode(){

    char video;

    printf("Enter video: ");
    scanf("%s",&video);
    char command1 = "ffmpeg -i ";
    char command2 = " -c:v libsvtav1 -c:a copy -preset 10 -crf 30 out_av1.mp4";
    char total = strcat(command1,&video,command2);
    system(total);
    return 0;
}