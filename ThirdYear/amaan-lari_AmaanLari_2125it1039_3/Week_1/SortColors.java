class Solution {
    public void sortColors(int[] nums) {
        int i = 0, p0 = 0, p2 = nums.length - 1;
        while (i <= p2) {
            if (nums[i] == 1)
                i++;
            else {
                if (nums[i] == 0) {
                    int t = nums[i];
                    nums[i] = nums[p0];
                    nums[p0] = t;
                    p0++;
                    i++;
                } 
                else {
                    int t = nums[i];
                    nums[i] = nums[p2];
                    nums[p2] = t;
                    p2--;
                }
            }
        }
    }
}