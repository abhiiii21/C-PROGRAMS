//PRACTICE PROBLEMS ON ARRAYS

//1. Write a program to find the sum of all elements in an array.

// #include <stdio.h>
// void main() 
// {
//     int array[5];
//     int sum = 0;
//     printf("Enter 5 integers:\n");
//     for (int i = 0; i < 5; i++) {
//         scanf("%d", &array[i]);
//         sum = sum + array[i];
//     }
//     printf("Sum of all elements in the array is: %d\n", sum);
// }


//2. Write a program to find the largest element in an array.
// #include <stdio.h>
// void main() 
// {
//     int array[5];
//     int largest = array[0];
//     printf("Enter 5 integers:\n");
//     for (int i = 0; i < 5; i++) {
//         scanf("%d", &array[i]);
//         if(array[i] > largest) {
//             largest = array[i];
//         }
//     }
//     printf("The largest element in the array is: %d\n", largest);
// }

//3. Write a program to find the smallest element in an array.
//  #include <stdio.h>
// void main() 
// {
//     int array[5];
//     int smallest = array[0];
//     printf("Enter 5 integers:\n");
//     for (int i = 0; i < 5; i++) {
//         scanf("%d", &array[i]);
//         if(array[i] < smallest) {
//             smallest = array[i];
//         }
//     }
//     printf("The smallest element in the array is: %d\n", smallest);
// }

//4. Write a program to calculate the average of elements in an array.
// #include <stdio.h>
// void main() 
// {
//     int array[5];
//     int sum = 0;
//     float average;
//     printf("Enter 5 integers:\n");
//     for (int i = 0; i < 5; i++) {
//         scanf("%d", &array[i]);
//         sum = sum + array[i];
//     }
//     average = (float)sum / 5;
//     printf("The average of the elements in the array is: %.2f\n", average);
// }   

//5. Write a program to reverse the elements of an array.
// #include <stdio.h>
// void main()  
// {
//     int array[5]= {1, 2, 3, 4, 5};
//     printf("Original array:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
//     printf("Reversed array is:\n");
//     for (int i = 4; i >= 0; i--) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
// }

//6. Write a program to count the number of even and odd elements in an array.
// #include <stdio.h>
// void main()
// {
//     int array[5];    
//     int evenCount = 0;
//     int oddCount = 0;
//     printf("Enter 5 integers:\n");
//     for (int i = 0; i < 5; i++) {
//         scanf("%d", &array[i]);
//         if (array[i] % 2 == 0) {
//             evenCount++;
//         } else {
//             oddCount++;
//         }
//     }
//     printf("Number of even elements in the array: %d\n", evenCount);
//     printf("Number of odd elements in the array: %d\n", oddCount);
// }

 
