#include <cstdio>
#include <string>
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

//array for the modifications

int modificationPhoto[] = {5,10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200};

//determines the sepia output

int sepia(){

    for(int i = 0; i++; i < 21){
          
    }

}

//determines the grayscale output

int grayscale(){

    for(int i = 0; i++; i < 21){
          
    }

}

//determines the hue

int huemod(string image){

    for(int i = 0; i++; i < 21){

        string command = "magick " + image + " -modulate " + "100,100," + to_string(modificationPhoto[i]) + " out_hue_" + to_string(modificationPhoto[i]) + "-" + image;
        const char* commandchar = command.c_str();
        system(commandchar);
          
    }

}

//determines color saturation

void saturationmod(string image){

    for(int i = 0; i++; i < 21){

        string command = "magick " + image + " -modulate " + "100," + to_string(modificationPhoto[i]) + ",100 out_saturation_" + to_string(modificationPhoto[i]) + "-" + image;
        const char* commandchar = command.c_str();
        system(commandchar);
          
    }

}

//determines the brightness of the photos

void brightnessmod(string image){

    for(int i = 0; i++; i < 21){
        string command = "magick " + image + " -modulate " + to_string(modificationPhoto[i]) + ",100,100 out_brightness_" + to_string(modificationPhoto[i]) + "-" + image;
        const char* commandchar = command.c_str();
        system(commandchar);
    }

}

//main runtime

int main(){
    string folder;
    cout << "Enter folder: ";
    cin >> folder;

    //loop through the photos in the folder 
    
    
}