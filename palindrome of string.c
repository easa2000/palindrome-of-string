// palindrome

#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int l, r, is_palindrome = 1;
    printf("\n Enter a String: ");
    gets(str);
    l = 0;
    r = strlen(str) - 1;

    while(l < r)
    {
        if(str[l] != str[r])
        {
            is_palindrome = 0;
            break;
        }
        l++;
        r--;
    }

    if(is_palindrome == 1)
    {
        printf("\n %s is Palindrome.",str);
    }
    else{
        printf("\n %s is not a Palindrome.",str);
    }
}
