#include <stdio.h>  
int main ()  
{  
 
int n;  
printf (" Enter a positive number: ");  
scanf (" %d", &n);  


printf (" \n After shifting the binary bits to the left side. ");  
printf (" \n The new value of the variable num = %d", n<<1);  


printf (" \n After shifting the binary bits to the right side. ");  
printf (" \n The new value of the variable num = %d", n>>1);  

return 0;  
}  