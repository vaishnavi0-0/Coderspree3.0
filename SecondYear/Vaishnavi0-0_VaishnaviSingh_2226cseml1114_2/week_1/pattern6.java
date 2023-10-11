import java.util.Scanner;

public class pattern6 {
    public static void main(String[] args) {
        try (Scanner read = new Scanner(System.in)) {
            int n = read.nextInt();
            printTriangle(n);
        }
    }

    public static void printTriangle(int n) {
        // code here
        for (int i = 1; i <= n; i++) {
            for (int j = n; j > i; j--) {
                System.out.print(" ");
            }
            for (int k = 1; k <= i; k++) {
                System.out.print("*");
            }
            for (int a = 1; a < i; a++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
