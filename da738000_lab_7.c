#include <stdio.h>
#include <string.h>


void bubbleSort(int* nums, int n)
{
    int temp;

    int count97 = 0;
    int count16 = 0;
    int count45 = 0;
    int count63 = 0;
    int count13 = 0;
    int count22 = 0;
    int count7 = 0;
    int count58 = 0;
    int count72 = 0;

    for (int i = 0; i < n-1; i++)
    {
        for (int x = 0; x < n-i-1; x++)
        {
            if (nums[x] > nums[x+1])
            {
                temp = nums[x];
                nums[x] = nums[x+1];
                nums[x+1] = temp;
                switch (nums[x])
                {
                    case 97:
                        count97++;
                        break;
                    case 16:
                        count16++;
                        break;
                    case 45:
                        count45++;
                        break;
                    case 63:
                        count63++;
                        break;
                    case 13:
                        count13++;
                        break;
                    case 22:
                        count22++;
                        break;
                    case 7:
                        count7++;
                        break;
                    case 58:
                        count58++;
                        break;
                    case 72:
                        count72++;
                        break;
                    default:
                        break;
                }
                switch (nums[x+1])
                {
                    case 97:
                        count97++;
                        break;
                    case 16:
                        count16++;
                        break;
                    case 45:
                        count45++;
                        break;
                    case 63:
                        count63++;
                        break;
                    case 13:
                        count13++;
                        break;
                    case 22:
                        count22++;
                        break;
                    case 7:
                        count7++;
                        break;
                    case 58:
                        count58++;
                        break;
                    case 72:
                        count72++;
                        break;
                    default:
                        break;
                }
            }
        }
    }
    printf("97 was swapped %d times.\n", count97);
    printf("16 was swapped %d times.\n", count16);
    printf("45 was swapped %d times.\n", count45);
    printf("63 was swapped %d times.\n", count63);
    printf("13 was swapped %d times.\n", count13);
    printf("22 was swapped %d times.\n", count22);
    printf("7 was swapped %d times.\n", count7);
    printf("58 was swapped %d times.\n", count58);
    printf("72 was swapped %d times.\n", count72);
}

int main()
{
    int arr[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int x = 9;
    printf("Before: ");
    for(int i = 0; i < x; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    bubbleSort(arr, x);
    printf("After: ");
    for(int y = 0; y < x; y++)
    {
        printf("%d, ", arr[y]);
    }
}