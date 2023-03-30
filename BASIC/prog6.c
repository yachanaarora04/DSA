#include<stdio.h>
#include<string.h>
int main()
{
    char name[30],vow[30],con[30];
    int v=0,w=0;
    scanf("%s", name);
    int n= strlen(name);
    
    for(int i=0; i<n; i++)
    
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        {
            vow[v]=name[i];
            v++;
        }
        else
        {
            con[w]=name[i];
            w++;
        }    
    }
    printf("the vowels are: %s\n", vow);
    printf("\nthe consonants are: %s",con);
    return 0;
}    