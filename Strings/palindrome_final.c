#include <stdio.h>
#include <string.h>

void reverse(char *str);
void fix_capital_space(char *str);
int isPalindrome(char str[]);

int main()
{
    char str[100];
    printf("Enter your expression: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    int result = isPalindrome(str);
    if(result==1){
        printf("It is palindrome!");
    }
    else{
        printf("It is not palindrome.");
    }
    
    return 0;
}

void reverse(char *str) {
    if (str == NULL || *str == '\0') {
        return;
    }

    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;
    char temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}



void fix_capital_space(char *str){
    
    int length = strlen(str);
    
    for(int t=0; t<length; t++){
            if(str[t] >= 'A' && str[t] <= 'Z'){
            str[t] = str[t]+32;
            //+32 because difference of ASCII codes between small and capital letters is 32.
        }
    }
    
    
    
    int j=0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i]>='0' && str[i]<='9' || str[i]>='a' && str[i]<='z') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    
}

int isPalindrome(char str[]){
    
    int length = strlen(str);
    char org[100];
    char not_org[100];
    
    strcpy(org,str);
    strcpy(not_org,str);
    
    fix_capital_space(org);
    fix_capital_space(not_org);
    
    
    
    
    reverse(not_org);
    int result;
        if(strcmp(org,not_org)==0){
            result=1;
        }
        else{
            result=0;
        }
    return (result);
}