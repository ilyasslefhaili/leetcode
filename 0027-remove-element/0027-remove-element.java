class Solution {
    public int removeElement(int[] nums, int val) {
        int a = nums.length;
        int e = 0;
        for (int i = 0;i < a;i++)
        {
            if (nums[i] == val)
            {
                a--;
                for (int j = nums.length - 1; j > 0;j--)
                {
                    if (nums[j] != val || j == i)
                    {
                        e = j;
                        break ;
                    }
                }
                nums[i] = nums[e];
                nums[e] = val;
            }
        }
        while (a > 0 && nums[a - 1] == val)
            a--;
        return (a);
    }
}