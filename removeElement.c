#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n = 7;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the array element : ");
        scanf("%d", &nums[i]);
    }
    int i = 0;
    int target = 2;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            for (int k = i; k < n - 1; k++)
            {
                nums[k] = nums[k + 1];
            }
            n--;
            // i--;
        }
    }
    // n=n-i;
    printf("n=%d\n", n);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (nums[i]=nums[j])
    //         {
    //             for (int k=j;k<n-1;k++)
    //             {
    //                 nums[k]=nums[k+1];
    //             }
    //             n--;
    //         }
    //     }
    // }
    printf("Printing the array elemets : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}

// int removeElement(int* nums, int numsSize, int val) {
//     for(int i=0;i<numsSize;i++){
//         if (nums[i]==val)
//         {
//             for (int k = i; k < numsSize - 1; k++)
//             {
//                 nums[k] = nums[k + 1];
//             }
//             numsSize--;
//         }
//     }
//     return numsSize;
// }
