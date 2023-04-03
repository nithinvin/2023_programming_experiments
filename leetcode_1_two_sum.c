#include <stdio.h>
#include <stdlib.h>


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int index1 = 0;
    int index2 = index1 + 1;    
    int *returnArray = NULL;

    returnArray = malloc(2 * sizeof(int));
    *returnSize = 2;

    while(index1 < numsSize)
    {
        if (nums[index1] + nums[index2] == target)
            break;

        ++index2;
        if(index2 == numsSize)
        {
            ++index1;
            index2 = index1 + 1;
        }
    }
    returnArray[0] = index1;
    returnArray[1] = index2;

    return returnArray;
}

int main()
{
    int nums_array[] = {3, 3};
    int tgt = 6;
    int *result = NULL;
    int resultSize = 0;

    result = twoSum(nums_array, sizeof(nums_array), tgt, &resultSize);
    
    printf("Adding %d with %d gives %d\n", nums_array[result[0]], nums_array[result[1]], tgt);
   
    return 0;
}
