#include <stdio.h>
#include<iostream>
#include <string.h>
using namespace std;

void encrypt(char password[],int key)
{
    unsigned int i;
    for(i=0;i<strlen(password);++i)
    {
        password[i] = password[i] - key;
    }
}

void decrypt(char password[],int key)
{
    unsigned int i;
    for(i=0;i<strlen(password);++i)
    {
        password[i] = password[i] + key;
    }
}
int main()
{
    char password[20] ;
    printf("Enter the password: n ");
    scanf("%s",password);
    cout<<"\n";
    printf("Passwrod     = %sn",password);
    encrypt(password,0xFACA);
    cout<<"\n";
    printf("Encrypted value = %sn",password);
    decrypt(password,0xFACA);
    cout<<"\n";
    printf("Decrypted value = %sn",password);
    return 0;
}
