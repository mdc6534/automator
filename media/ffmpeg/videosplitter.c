#include <stdio.h>

int splitter(){
    //ffmpeg -i input.mp4 -c copy -map 0 -segment_time 00:20:00 -f segment output%03d.mp4
    printf("Enter video: ");
    scanf("%s",&video);
    printf("Enter segment time in seconds: ");
    scanf("%s",&seconds);
    char[] c1 = "ffmpeg -i ";
    char[] c2 = " -c copy -map0 -segment_time ";
    char[] c3 = " -f segment output%03d.mp4"
    char[] total = strcat(c1,&video,c2,&seconds,c3);
    return 0;
}