class Solution {

    void printTriangle(int n) {
        int i,j,k,space=0;
        for(i=n;i>=1;i--)
        {
            for(j=1;j<=i;j++)
            {
                System.out.print("*");
            }
            for(k=1;k<=space;k++)
            {
                System.out.print(" ");
            }
            for(k=1;k<=space;k++)
            {
                System.out.print(" ");
            }
            space++;
            for(j=1;j<=i;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
        space=n-1;
        for(i=1;i>=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                System.out.print("*");
            }
            for(k=1;k<=space;k++)
            {
                System.out.print(" ");
            }
            for(k=1;k<=space;k++)
            {
                System.out.print(" ");
            }
            space--;
            for(j=1;j<=i;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
        
    }
}