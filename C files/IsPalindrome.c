#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void removeSpaces(char *str)
{
    // To keep track of non-space character count
    int count = 0;
 
    // Traverse the given string. If current character
    // is not space, then place it at index 'count++'
    for (int i = 0; str[i]; i++)
        if (isalpha())
            str[count++] = str[i]; // here count is
                                   // incremented
    str[count] = '\0';
}

const char* IsPalindrome(char arr[]){
    removeSpaces(arr);
    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] == arr[strlen(arr)-1-i]){
            return "True";
        }
    }
    return "False";
}

int main(){
    printf("%s", IsPalindrome("racecar"));
    
    return 0;
}
