#include <iostream>
#include <cmath>
//#include "f_to_m.h"
using namespace std;

void GetEven(int *x){
    for(int i = 1;i<*x;i++){
        if(i % 2 == 0){
            cout << i;
            cout << " is even" << endl;
        }
    }
}



int main()
{
    cout << "Hello world!" << endl;
        int *ip;
        int y = 100;
        ip = &y; //assigns address
        cout << "enter a number: "; 
        cin >> y;
        GetEven(ip);
        int var;

        cout <<"square root of "<<*ip << " is " << sqrt(y);
        return 0;
}


