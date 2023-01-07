#include<stdio.h>

void find_max_min (int n, int nums[], int* p, int* q)
{
    *p = nums[0];
    *q = nums[0];

    int i;
    for(i=0; i<n; i++)
    {
        if(nums[i]>p*)
            *p = nums[i];
        if(nums[i]<q*)
            *q = nums[i];
    }
}

int main()
{
    int array[] = {12,6,9,3,4,21,66};
    
    int n = sizeof(array)/sizeof(int);
    int max, min;

    find max_min (n, array, &max, &min);

    return 0;
}