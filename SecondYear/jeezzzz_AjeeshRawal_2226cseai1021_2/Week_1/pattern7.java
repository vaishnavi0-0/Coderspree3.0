class Solution {

    void printDiamond(int n) {
       int space=n-1,i,j,k;
       for(i=1;i<=n;i++)
       {
           for(k=1;k<=space;k++)
           {
               System.out.print(" ");
           }
           space--;
           for(j=1;j<=i;j++)
           {
               System.out.print("* ");
           }
           System.out.println();
       }
       space=0;
       for(i=n;i>=1;i--)
       {
           for(k=1;k<=space;k++)
           {
               System.out.print(" ");
           }
           space++;
           for(j=1;j<=i;j++)
           {
               System.out.print("* ");
           }
           System.out.println();
       }
       
    }
}