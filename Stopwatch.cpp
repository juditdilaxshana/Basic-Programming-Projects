#include <iostream>
#include <cstdlib>
#include <unistd.h>
using std::cout;
using std::cin;
using std::endl;

int main(){
    short minutes, seconds; int time;

    do{
        cout<< "Enter seconds::  ";
        cin>> seconds;
    } while (seconds>59);

    do{
        cout<< "Enter minutes::  ";
        cin>> minutes;
    } while (minutes>59);

    time = minutes != 0 ? minutes*60 : 0;
    time += seconds;

    for(int i = time; i> 0 ; i--){
        cout<< "The time remaining is 0:" << minutes << ":" << seconds << endl;
        minutes = i % 60 == 0 ? --minutes : minutes;
        seconds = seconds == 0 ? 59 : --seconds;
        sleep(1);
    }
    cout<< "*******************\nTimer ended!\a\nLasted for " << time << " seconds" << "\n*******************\n\n\n\n\n\n" << endl;   
}