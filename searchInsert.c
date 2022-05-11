
int searchInsert(int* nums, int numsSize, int target){
    int mid;
    int l;
    int h;

    l = 0;
    h = numsSize - 1;
    while (l <= h)
    {
        mid = (l + h)/2;
        if (nums[mid] == target)
            return (mid);
        if (nums[mid] > target)
            h = mid - 1;
        else
            l = mid + 1;
    }
    if (nums[mid] < target)
        return(mid + 1);
    return (mid);
}