import java.util.Scanner;

public class pattern4 {

    public static void main(String[] args) {
        try (Scanner read = new Scanner(System.in)) {
            int n = read.nextInt();
            printTriangle(n);
        }
    }

    public static void printTriangle(int n) {
        // code here
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }

}
