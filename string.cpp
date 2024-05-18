#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string FirstString;
    cout << "Enter your first string: ";
    cin >> FirstString;
    cout << endl;


    cout << "1.  Length of the first string is: " << FirstString.size() << endl << endl;
    cout << "2.  Length of the first string is: " << FirstString.length() << endl << endl;
    cout << "---------------------------------------------------------------" << endl << endl;

    char SecondString[50], ThirdString[50];
    cout << "Enter your second string: ";
    cin >> SecondString;
    cout << "Enter your Third string: ";
    cin >> ThirdString;
    cout << endl;


    cout << "1.  Length of the second string is: " << strlen(SecondString) << endl << endl;
    cout << "2.  The memory second string occupying is: " << sizeof(SecondString) << endl << endl;

     if(strcmp(SecondString, ThirdString) == 0)
    {
        cout << "3.  The second string and the third string are equal" << endl << endl;
    }
    else
    {
        cout << "3.  The second string and the third string are not equal" << endl << endl;
    }

    if(strncmp(SecondString, ThirdString, 2) == 0)
    {
        cout << "4.  The first two characters of the second string and the third string are equal" << endl << endl;
    }
    else
    {
        cout << "4.  The first two characters of the second string and the third string are not equal" << endl << endl;
    }

    cout << "5.  After concatenating the second and third string, the new second string value is: " << strcat(SecondString, ThirdString) << endl << endl;

    cout << "6.  After concatenating first 2 characters of the third string with the new second string, the new second string value is: " << strncat(SecondString, ThirdString, 2) << endl << endl;

    cout << "7.  After copying the third string value into the new second string, the new second string value is: " << strcpy(SecondString, ThirdString) << endl << endl;

    cout << "8.  After copying first 3 characters of the third string value into the new second string, the new second string value is: " << strncpy(SecondString, ThirdString, 3) << endl << endl;
}

