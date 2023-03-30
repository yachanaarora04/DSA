#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    int count=0;
    scanf("%s", name);
    int n= strlen(name);
    for(int i=0; i<n; i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        {
             count++;
        }
        if(count>3)
        {
            for(int i=0; i<n; i++)
            {
                if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
                {
                      for(int j=i; j<n; j++)
                      {
                           name[j]=name[j+1];
                      }
                   i--;
                   n--;
            
                }
            }  
        }
       
    }
   
        printf("%s",name);
        
    return 0;
}
