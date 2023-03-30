#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"enter an alphabet";
    cin>>c;

    switch(c)
    {
        case 'a':
            cout<<"it is a vowel";
            break;

        case 'e':
            cout<<"it is a vowel";
            break;

        case 'i':
            cout<<"it is a vowel";
            break;

        case 'o':
            cout<<"it is a vowel";
            break;

        case 'u':
            cout<<"it is a vowel";  
            break;

        default:
            cout<<"it is a consonant";
            break;
    }
    return 0;
}