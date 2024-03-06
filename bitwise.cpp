#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//page 242
void charToBin(int n);
//void buildStr();
void call();
char* buildStr();
char* intToBinary(int num);
int getDivAmount(int n);
int main(int argc, char *argv[]){

    short y = 0b10010001;
    short i = 0b11111111;
    int x = -4;
    printf("y >> i = %d\n",y >> 1);
    printf("y << i = %d\n",y << 1);
    printf("y && i = %d\n",y && i);
    printf("y | i = %d\n",y | i);
    printf("y & i = %d\n",y & i);
    printf("y ^ i = %d\n",y ^ i);
    printf("~y = %d\n",~x);


    
    call();
    
    //cout << getDivAmount(255);
    delete *argv;
}

void charToBin(int n){
    int i=0;
    while (n > 0) {
        cout<< n % 2;
        n = n / 2;
        i++;
    }
}

void call(){
      int number;
  cout << "Enter an integer: ";
  cin >> number;

  char* binary = intToBinary(number);
  cout << "Binary representation: " << binary << endl;

  // Remember to deallocate the memory after use:
  delete[] binary;
}

char* intToBinary(int num) {
  // Count the number of bits needed (assuming 32-bit integers)
  int numBits = getDivAmount(num);

  // Allocate memory for the character array (including null terminator)
  char* binary = new char[numBits + 1];

  // Fill the array with '0' initially
  memset(binary, 'x', numBits);
  binary[numBits] = '\0'; // Ensure null termination

  // Convert integer to binary using bitwise operations and loop
  int i = numBits - 1;
  while (num > 0) {
    binary[i--] = (num % 2) + '0'; // Convert remainder to character '0' or '1'
    num /= 2;
  }

  return binary;
}

char* buildStr(){
    char str[6];
    char *current = str;
    int i = 0;
    while (i != 5)
    {
        char s;
        cin >> s;
        *current = s;
        current++;        
        i++;
        cin.ignore();
    }

    return str;
}

int getBits(int n){
    int bits = 0;
    for (int i = 0; n > 0; i++)
    {
        n =  n/2;;
        bits++;
    }

    return bits;
}