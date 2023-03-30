#include<iostream>
using namespace std;
int main()
{
    char A[]="How are you";
    int i,space=0,vow=0,con=0;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]==' ')
        space++;
        if(A[i]=='a' || A[i]=='e' || A[i]=='o' || A[i]=='u' || A[i]=='i' || A[i]=='A' || A[i]=='E' || A[i]=='O' || A[i]=='U' || A[i]=='I')
        vow++;
        else if((A[i]>=97 && A[i]<=122) || (A[i]>=65 && A[i]<=90))
        con++;
    }
    cout<<"number of words= "<<space+1<<endl<<"number of vowels="<<vow<<endl<<"number of consonants="<<con;
    return 0;
}