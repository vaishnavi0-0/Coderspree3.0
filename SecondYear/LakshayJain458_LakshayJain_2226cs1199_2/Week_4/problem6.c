#include <stdio.h>
#include <stdlib.h>
void swap_val(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 int first_Missing_Positive_num(int *nums, int nums_size)
{
    if (nums_size < 1)
    {
        return 1;
    }
    int i = 0;
    while (i < nums_size)
    {
        if (nums[i] != i + 1 && nums[i] > 0 && nums[i] <= nums_size && nums[i] != nums[nums[i] - 1])
        {
            swap_val(nums + i, nums + nums[i] - 1);
        }
        else
        {
            i++;
        }
    }
    for (i = 0; i < nums_size; i++)
    {
        if (nums[i] != i + 1)
            break;
    }
    return i + 1;
}
int main()
{
    int i, count;
    printf("enter number array elements:");
    scanf("%d", &count);
    int nums[count];
    printf("enter array elements:");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("first missing positive integer is :%d\n", first_Missing_Positive_num(nums, count));
    return 0;
}
