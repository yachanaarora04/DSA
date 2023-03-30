#include<iostream>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        fun(n-1);//If this function is used below the cout statement then it will behave as in the ascending phase. First call and the return. 
        cout<<n<<" ";//Right now behaving in the descending phase. use debugging for better understanding in both the cases.
    }
}
int main()
{

    int x=3;
    fun(x);
    return 0;
}
