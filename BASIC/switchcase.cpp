#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"enter a button";
    cin>>button;

    switch(button)
    {
        case 'a':
          cout<<"hello";
          break;

        case 'b':
          cout<<"namaste";
          break;

        case 'c':
          cout<<"salut";
          break;

        case 'd':
          cout<<"hola";
          break;

        case 'e':
          cout<<"ciao";
          break;

        default:
          cout<<"I am still learning more!";
          break;           
    }
    return 0;
}