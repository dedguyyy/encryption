#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include <stdlib.h>
void digits(string s);
int main(int argc,string argv[])
{
if(argc==2)
{
    for(int i=0,n=strlen(argv[1]);i<n;i++)
    {if(!isdigit(argv[1][i]))
     {printf("nope\n");
     return 1;}


    }

int d = atoi(argv[1]);
 string a = get_string("plaintext:  ");
 printf("ciphertext: ");
 for(int i = 0,n =strlen(a);i<n;i++)
  {
    if(isalpha(a[i]))
    {
       if (90>=(a[i] + (d%26)) || 122>=(a[i] + (d%26)))
    {
        printf("%c",a[i] + (d%26));
    }
       else
       {
        printf("%c",a[i] + (d%26)-26);
       }

    }
   else
   {
    printf("%c",a[i]);
   }
}
printf("\n");


 return 0;

































}
else
{
    printf("Usage:./caesar key\n");
    return 1;
}

}