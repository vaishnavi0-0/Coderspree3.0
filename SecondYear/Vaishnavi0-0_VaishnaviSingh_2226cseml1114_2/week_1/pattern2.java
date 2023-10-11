import java.util.Scanner;

public class pattern2 {

    public static void printTriangle(int n) {
        // code here
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        try (Scanner read = new Scanner(System.in)) {
            int n = read.nextInt();
            printTriangle(n);
        }
    }
}
