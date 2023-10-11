import java.util.Scanner;

public class pattern9 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int n = read.nextInt();
        printTriangle(n);
    }

    public static void printTriangle(int n) {
        // code here
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= n; j++) {
                if (j <= i)
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            /*
             * for(int k=i;k<(n-i);k++)
             * {
             * System.out.print(" ");
             * }
             */
            for (int j = n; j >= 1; j--) {
                if (j <= i)
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            System.out.println();
        }
        for (int i = n; i >= 1; i--) {
            for (int j = n; j >= 1; j--) {
                if (j >= i)
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            for (int j = 1; j <= n; j++) {
                if (j >= i)
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            /*
             * for(int k=i;k<(n-i);k++)
             * {
             * System.out.print(" ");
             * }
             */

            System.out.println();
        }
    }

}
