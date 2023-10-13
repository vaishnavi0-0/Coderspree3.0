//{ Driver Code Starts
import java.io.*;

class Main8 {
    // Driver code
    public static void main(String[] args) throws Exception {
        BufferedReader br =
                new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            Solution8 obj = new Solution8();
            obj.printTriangle(n);
        }
    }
}
// } Driver Code Ends


class Solution8 {

    void printTriangle(int n) {
        // code here
        for(int i =1; i<=n; i++)
        {
            for(int j =1; j<=i; j++)
            {
                System.out.print(j+" ");
            }
            for(int k =i; k<n; k++)
            {
                System.out.print("  ");
            }
            for(int k =i; k<n; k++)
            {
                System.out.print("  ");
            }
            for(int j =i; j>=1; j--)
            {
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}