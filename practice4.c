//COUNT VOWELS AND CONSONANTS IN A STRING
// #include <stdio.h>
// void main()
// {
//     char str[100];
//     int vowels = 0, consonants = 0;  
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
//             str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
//         {
//             vowels++;
//         }
//         else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
//         {
//             consonants++;
//         }
//     }
//     printf("Vowels: %d\n", vowels);
//     printf("Consonants: %d\n", consonants);
// }

//FIND THE LENGTH OF A STRING WITHOUT USING STRLEN() FUNCTION
// #include <stdio.h>
// void main()
// {
//     char str[100];
//     int length = 0;
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     for (int i = 0; str[i] != '\0'; i++)
//     {    
//         length++;
//     }
//     printf("Length of the string is: %d\n", length - 1);
// }

//reverse a string
// #include <stdio.h>
// void main()
// {
//     char str[100], rev[100];
//     int length = 0;
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         length++;
//     }
//     for (int i = 0; i < length - 1; i++)
//     {
//         rev[i] = str[length - 2 - i];
//     }
//     rev[length - 1] = '\0';
//     printf("Reversed string: %s\n", rev);
// }

//CONVERT LOWERCASE TO UPPERCASE AND UPPERCASE TO LOWERCASE
// #include <stdio.h>
// void main()
// {
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] = str[i] - ('a' - 'A');
//         }
//         else if (str[i] >= 'A' && str[i] <= 'Z')
//         {
//             str[i] = str[i] + ('a' - 'A');
//         }
//     }
//     printf("Converted string: %s\n", str);
// }

//CHECK IF A STRING IS A PALINDROME
#include <stdio.h>
void main()
{
    char str[100];
    int length = 0, is_palindrome = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 2 - i])
        {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
}