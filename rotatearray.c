void reverse(int *nums, int low, int high)
{
    int temp;
    while (low < high)
    {
        temp = nums[low];
        nums[low] = nums[high];
        nums[high] = temp;
        low++;
        high--;
    }
}

void rotate(int* nums, int n, int k){
    k = k %n;
    reverse(nums, 0, n-k-1);
    reverse(nums, n-k, n-1);
    reverse(nums, 0, n-1);
}