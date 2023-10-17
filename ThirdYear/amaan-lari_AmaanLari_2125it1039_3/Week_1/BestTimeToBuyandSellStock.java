class Solution {
    public int maxProfit(int[] prices) {
        
            int i = 0, j = 0;
            int diff = prices[j] - prices[i];
            int ptr = 0;
            while(ptr != prices.length) {

                if(prices[ptr] < prices[i]) {
                    i = ptr;
                }
                if(prices[ptr] - prices[i] > diff) {
                    diff = prices[ptr] - prices[i];
                }
                ptr++;
            }
        return diff;
    }
}