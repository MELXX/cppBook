#include <iostream>
using namespace std;

static int sglobalInt = 0;
int nsgobalInt = 0;
void globalIntIncrement();
void localIntIncrement();
int AddAll(int *ptr,int n);


int main()
{
    printf("global static int value:%d\n", sglobalInt);
    printf("global int value:%d\n", nsgobalInt);
    sglobalInt++;
    nsgobalInt++;
    globalIntIncrement();
    localIntIncrement();
    if (sglobalInt == 10)
    {
        int arr[] = {10,5,9,7,4,1,2,3};
        printf("sum of [10,5,9,7,4,1,2,3]:%d\n", AddAll(arr,8));
        transport t = car;
        return 0;
    }
    else
    {
        main();
    }
}

void globalIntIncrement()
{
    static int localInt = 2;
    printf("local static int value:%d\n", localInt);
    localInt *= 5;
}

void localIntIncrement()
{
    int localInt = 2;
    printf("local int value:%d\n\n", localInt);
    localInt *= 5;
}

int AddAll(int *ptr,int n)
{
     int i = 0;
     register int sum = 0;
    if (ptr)
    {
        for (i;i<n;i++)
        {
           sum += ptr[i];
        }
        
    }
    return sum;
}

enum transport { car, truck, airplane, train, boat };