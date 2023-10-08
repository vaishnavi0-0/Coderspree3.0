class Solution {

    void printTriangle(int n) {
        int i,j,k,space=16;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                System.out.print(j+" ");
            }
            for(k=1;k<=space;k++)
            {
                System.out.print(" ");
            }
            space=space-4;
            for(j=i;j>=1;j--)
            {
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}