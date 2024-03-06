#include <iostream>
using namespace std;

int main()
{
    double distance = 34000000.0; // 34,000,000 miles
    double lightspeed = 186000.0; // 186,000 per second
    double delay;
    double delay_in_min;
    delay = distance / lightspeed;
    cout << "Time delay when talking to Mars: " << delay << " seconds.\n";
    delay_in_min = delay / 60.0;
    cout << "this is " << delay_in_min << " minutes.\n";

    // switch ((int)distance)
    // {
    // case (int)5: cout << "is 5";
    //     break;
    // default: cout << "is not valid\n";
    //     break;
    // }

    // int h = 0b01;

    // cout << ++h<<"\n";
    //  h = 0b01;

    // cout << h++<<"\n";


    return 0;
}