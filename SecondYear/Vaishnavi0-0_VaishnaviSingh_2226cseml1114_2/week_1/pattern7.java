import java.util.Scanner;

public class pattern7 {

    public static void main(String[] args) {
        try (Scanner read = new Scanner(System.in)) {
            int n = read.nextInt();
            printDiamond(n);
        }
    }

    public static void printDiamond(int n) {
        // Your code here
        for (int i = 1; i <= n; i++) {
            for (int j = n; j > i; j--) {
                System.out.print(" ");
            }
            for (int k = 1; k <= i; k++) {
                System.out.print("* ");
            }
            System.out.println();
        }
        for (int i = n; i >= 1; i--) {
            for (int j = i; j < n; j++) {
                System.out.print(" ");
            }
            for (int k = i; k >= 1; k--) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
