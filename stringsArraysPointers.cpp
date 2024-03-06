#include <iostream>
#include <array>
#include <string>
#include <cstring>
using namespace std;

int Arrays()
{

    short lst[100];
    lst[0] = 100;
    lst[2] = 0xb11;
    cout << sizeof(lst) / sizeof(short) << endl;
    for (size_t i = 0; i < size(lst); i++)
    {
        lst[i] = i + 10;
    }
    for (size_t i = 0; i < size(lst); i++)
    {
        cout << lst[i] << endl;
    }

    return 0;
}

void invertedCaseString(char str[])
{
    int i;
    cout << "Original string: " << str << "\n";
    for (i = 0; str[i]; i++)
    {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
        else if (islower(str[i]))
            str[i] = toupper(str[i]);
    }
    cout << "Inverted-case string: " << str;
}

void ArrayPointers()
{
    char str[100];
    char *ptr;
    cout << "enter a string: ";
    gets_s(str, sizeof(str));

    ptr = str;
    for (size_t i = 0; i < 10; i++)
    {
        cout << *ptr;
        *ptr++;
    }

    // cout << "string entered is: " << ptr;
}

void Strings()
{
    char str[100];
    cout << "enter a string: ";
    // cin >> str;
    // cin.getline(str,sizeof(str));
    gets_s(str, sizeof(str));
    cout << "string entered is: " << str;
}

void StrFuncsEg()
{
    char s1[80], s2[80];
    strcpy(s1, "C++");
    strcpy(s2, " is power programming.");
    cout << "lengths: " << strlen(s1);
    cout << ' ' << strlen(s2) << '\n';
    if (!strcmp(s1, s2))
        cout << "The strings are equal\n";
    else
        cout << "not equal\n";
    strcat(s1, s2);
    cout << s1 << '\n';
    strcpy(s2, s1);
    cout << s1 << " and " << s2 << "\n";
    if (!strcmp(s1, s2))
        cout << "s1 and s2 are now the same.\n";
}

void PointerAccessEg(){
        int *arr[1][10];
    int x = 0xffffff;
    int *p = &x;
    int **pp = &p;
    int ***ppp = &pp;
    int *np = 0;

    cout << p << endl;
    cout << *p << endl;
    if (!np)
    {
        cout << "np is null" << endl;
    }

    np = &**pp;

    if (np)
    {
        cout << "np is now assigned address: " << np << endl;
        cout << "np is now assigned value: " << *np << endl;
    }
    // cout << *np<<endl;
    cout << **pp;
}

void reverseString(char *str);
void reverseString(char *str){
    char *start;
    int i = 0xff;
    int len;
    char t;
}

int getLengthOfString(char str[]){
int count = 0;
    size_t i = 0;

    while (str[i++]) {
        count++;
    }

    return count;
}

int main()
{

try {         
    // cout << "enter a string: " << endl;
    // char str[80];
    // cin >> str; 
    // char *strp = str;
    // char *start;
    // int i = 0xff;
    // int len;
    // char t;
    // cout << strp[0];
    cout << getLengthOfString("hello");

    
 } 
catch( const exception& e )  {   
        cerr << "Exception " << e.what() << endl;
 } 

    // invertedCaseString(str);
    // ArrayPointers();
    //  char selection;
    //  cout << "A for Arrays() B for Strings(): ";
    //  cin >> selection;
    //  switch (selection)
    //  {
    //  case 'A':
    //      Arrays();
    //      break;
    //  case 'B':
    //      cin.ignore();
    //      Strings();
    //      break;
    //  default:
    //      break;
    //  }

    return 0;
}