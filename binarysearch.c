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

int main()
{
    int i = 0;
    int a[1];
    while(i < 1)
    {
        scanf("%d", &a[i]);
        i++;
    }
    printf("%d\n",search(a, 1, 3));
}