class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int n=str.size();
        
        int s=0;
        int e=n-1;
        
        while(s<e){
            swap(str[s],str[e]);
            s++;
            e--;
        }
        
        return str;
        
    }
};
