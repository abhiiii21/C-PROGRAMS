//Search for an element (Linear search)

//Print position if found, else print -1

// #include <stdio.h>
// void main()
// {
//     int arr[100], n, i, key, flag = 0;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     printf("Enter the elements: ");
//     for (i = 0; i < n; i++)
//         scanf("%d", &arr[i]);
//     printf("Enter the element to search: ");
//     scanf("%d", &key);
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             printf("Element found at position: %d\n", i + 1);
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//         printf("-1\n");
// }

//COPY ONE ARRAY TO ANOTHER
// #include <stdio.h>
// void main()  
// {
//     int arr1[100], arr2[100], n, i;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     printf("Enter the elements: ");  
//     for (i = 0; i < n; i++){
//         scanf("%d", &arr1[i]);}
//     for (i = 0; i < n; i++){
//         arr2[i] = arr1[i];}
//     printf("Copied array: ");
//     for (i = 0; i < n; i++){
//         printf("%d ", arr2[i]);}
//     printf("\n");
// }

//FIND SECOND LARGEST ELEMENT IN AN ARRAY
// #include <stdio.h>

// int main()
// {
//     int arr[5], i;
//     int largest = -9999, second_largest = -9999;

//     printf("Enter the 5 elements: ");

//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);

//         if (arr[i] > largest)
//         {
//             second_largest = largest;
//             largest = arr[i];
//         }
//         else if (arr[i] > second_largest && arr[i] != largest)
//         {
//             second_largest = arr[i];
//         }
//     }

//     printf("Second largest element: %d\n", second_largest);

//     return 0;
// }


//COUNT FREQUENCY OF EACH ELEMENT IN AN ARRAY
// #include <stdio.h>
// void main()
// {
//     int arr[100], freq[100], n, i, j;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     printf("Enter the elements: ");
//     for (i = 0; i < n; i++)
//         scanf("%d", &arr[i]);
//     for (i = 0; i < n; i++)
//         freq[i] = -1;
//     for (i = 0; i < n; i++)
//     {
//         if (freq[i] == -1)
//         {
//             int count = 1;
//             for (j = i + 1; j < n; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     count++;
//                     freq[j] = 0;
//                 }
//             }
//             freq[i] = count;
//         }
//     }
//     printf("Element\tFrequency\n");
//     for (i = 0; i < n; i++)
//     {
//         if (freq[i] != 0)
//             printf("%d\t%d\n", arr[i], freq[i]);
//     }
// }


//SORT AN ARRAY IN ASCENDING ORDER
#include <stdio.h>
void main()
{
    int arr[100], n, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array in ascending order: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}








