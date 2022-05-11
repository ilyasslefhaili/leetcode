int search(int* nums, int numsSize, int target){
    int l;
    int h;
    int mid;

    h = numsSize - 1;
    l = 0;
    while(l <= h)
    {
        mid = (l + h)/2;
        if (nums[mid] == target)
            return (mid);
        else if (target > nums[mid])
            l = mid + 1;
        else
            h = mid - 1;
    }
    return (-1);
}
