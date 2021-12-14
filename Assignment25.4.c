#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  StrCpySmall()
//
// Description   :   Write a program which accept string from user and copy small 
//                   characters of that string into another string.
//
// Input         :  String
//
// Output        :  String
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

void StrCpySmall(char *src, char *dest)
{
    if (src == NULL)
    {
        return;
    }

    while ((*src != '\0'))
    {
        if ((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            *dest++;
        }
        *src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    StrCpySmall(arr,brr);

    printf("%s",brr);

    return 0;   
}