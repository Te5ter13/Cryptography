#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>


void encrypt_message(char ch[100], char msg[100], int key,int string_length)
{
    int i;
    char arr[100];
    for (i=0; i<string_length;i++){
        msg[i]=toupper(ch[i]);
        arr[i]=((msg[i]+key-65)%26);
    }
    printf("Encrypted message is\n");
    for(i=0; i<string_length;i++){
        printf("%c",arr[i]+65);
    }
    printf("\n");
}


int main(){
    char ch[100];
    char msg[100];
    char arr[100];
    int key, string_length,i;
    printf("Enter the key in numbers\n");
    scanf("%d",&key);
    printf("Enter your message to encrypt\n");
    scanf("%s",ch);
    string_length=strlen(ch);
    encrypt_message(ch,msg,key,string_length);

    printf("\n");
    return 0;
}
