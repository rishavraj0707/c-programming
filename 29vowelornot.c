// check the entered character is vowel or not 

#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    switch (ch)
    {
    
    case 'A':
    case 'a':printf("vowel!");
        break;
    case 'E':
    case 'e':printf("vowel!");
        break;
    case 'I':
    case 'i':printf("vowel!");
        break;
    case 'O':
    case 'o':printf("vowel!");
        break;
    case 'U':
    case 'u':printf("vowel!");
        break;

    default:printf("Consoant!");
        break;
    }
}