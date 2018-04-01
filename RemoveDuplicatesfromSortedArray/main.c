#include <stdio.h>
#include <stdlib.h>

/**
    删除有序数组中的重复元素
**/

int removeDuplicates(int arr[], int length)
{
    int index = 0;
    int i = 0;

    if (length == 0)
    {
        return 0;
    }

    for (i = 1; i < length; i++)
    {
        if (arr[index] != arr[i])
        {
            arr[++index] = arr[i];
        }
    }

    return index + 1;
}

int main()
{
    int arr[] = {1, 1, 2, 3, 3};
    int length = removeDuplicates(arr, sizeof(arr)/sizeof(int));
    int i = 0;

    printf("arrary length --> %d\n", length);
    for (i = 0; i<length; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
