class Solution {

    public void swap(int[] ar, int i, int j) {
        int t = ar[i];
        ar[i] = ar[j];
        ar[j] = t;
    }

    public void reverse(int[] ar, int i, int j) {
        while (i < j)
            swap(ar, i++, j--);
    }

    public void nextPermutation(int[] nums) {
        
        int lastIndex = nums.length - 1;
        
        if (lastIndex == 0)
            return;
        int i;
        outer: for (i = lastIndex; i > 0; i--) {
            if(nums[i - 1] < nums[i]) {
                for (int j = lastIndex; j > i - 1; j--) {
                    if (nums[j] > nums[i - 1]) {
                        swap(nums, i - 1, j);
                        break outer;
                    }
                }
            }
        }
        reverse(nums, i, lastIndex);
    }
}