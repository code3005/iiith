#include<stdio.h>

int palindrome(char *val){
    int length= sizeof(val);
    int chaar = sizeof(char);
    /* if(){
        
    } */
    printf("The length is %d\n",length);
    printf("The length char is %d\n",chaar);
    //printf("The string is %s\n",val);
    return 0;
}

int main(){
    char val[50];
    printf("Enter String or Number : ");
    scanf("%s",val);
    //int length= sizeof(val);
    int chaar = sizeof(char);
    int length = sizeof(val) / sizeof(val[0]);
    /* if(){
        
    } */
    printf("The length is %d\n",length);
    printf("The length char is %d\n",chaar);

    //int res = palindrome(val);
    //printf("The string is %s\n",val);
    return 0;
}