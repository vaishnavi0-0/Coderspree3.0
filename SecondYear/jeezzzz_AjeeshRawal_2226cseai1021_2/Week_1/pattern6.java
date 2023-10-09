class Solution {

    void printTriangle(int n) {
        int space=n-1,i,j;
       for (j = 1; j<= n; j++)
         {
           for (i = 1; i<= space; i++)
            {
              System.out.print(" ");
            }
           space--;
           for (i = 1; i <= 2 * j - 1; i++)
            {
              System.out.print("*");
            }
           System.out.println("");
          }
    }
}