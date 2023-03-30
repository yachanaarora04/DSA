#include<iostream>
using namespace std;
struct card
{
    char face, shape, colour;
};
int main()
{
    struct card deck[5];
    cout<<"enter the card details:- ";
    for(int i=0; i<5; i++)
    {
        cout<<"enter the face name of card "<<i+1<<endl;
        cin>>deck[i].face;
        cout<<"enter the shape of the card "<<i+1<<endl;
        cin>>deck[i].shape;
        cout<<"enter the colour of the card "<<i+1<<endl;
        cin>>deck[i].colour;
    }

    for(int i=0; i<5; i++)
    {
        cout<<"card "<<i+1<<" has the following;- "<<endl<<"face: "<<deck[i].face<<endl<<"shape: "<<deck[i].shape<<endl<<"colour: "<<deck[i].colour;

    }
    return 0;

}