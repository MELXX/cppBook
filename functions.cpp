#include <iostream>
#include "f_to_m.h"

using namespace std;

int randomNumber;
int callByValue(int i){
    return ++i;
}

int callByRef(int *i){
    return ++(*i);
}

int &refRetunEg(){
    unsigned int seed = static_cast<unsigned int>(time(0));
    // Use the seed to initialize the random number generator
    srand(seed);
    // Generate a random number between 1 and 100
    randomNumber = rand() % 100 + 1;
    return randomNumber;
}

int main(int argc, char *argv[]){
    // int i = 10;
    // int val = callByValue(i);
    // cout << i<<endl;
    // int ref = callByRef(&i);
    // cout << i<<endl;

    int *ptr = &refRetunEg();
    cout << ptr;

    return 0;
}

