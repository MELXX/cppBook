#include <iostream>
using namespace std;

typedef float balance;
typedef float balances[];

int main()
{
    balance mybal = 1.7769987f;
    balance herbal = 2.56f;
    printf("total of balances%f\n",mybal + herbal) ;
    balances accounts = {mybal,herbal,100.658,888.888996};
    for (size_t i = 0; i < sizeof(accounts)/sizeof(float); i++)
    {
        printf("account bal %d:%f\n",i+1,accounts[i]);
    }
    
    
}