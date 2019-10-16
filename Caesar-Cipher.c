#include<stdio.h>
#include<ctype.h>
#include<string.h>
void encryption(char str[])
{
    int key,i;
    printf("Enter the encryption key: ");
    scanf("%d",&key);
    for(i=0; i<strlen(str); i++)
    {
        str[i]=toupper(str[i]);
        str[i]=(((str[i]-65)+key)%26)+65;
    }
    printf("%s",str);
}
void decryption(char str[])
{
    int key,i;
    printf("Enter the decryption key: ");
    scanf("%d",&key);
    for(i=0; i<strlen(str); i++)
    {
        str[i]=toupper(str[i]);
        str[i]=(((str[i]-65)-key)%26)+65;
    }
    printf("%s",str);
}
int main()
{
    char str[100],s,i;
    printf("press 1 for encryption press 2 for decryption: ");
    scanf("%d",&s);
    printf("give the message: ");
    scanf("%s",str);
    switch (s)
    {
    case 1:
        encryption(str);
        break;
    case 2:
        decryption(str);
        break;

    }
}
