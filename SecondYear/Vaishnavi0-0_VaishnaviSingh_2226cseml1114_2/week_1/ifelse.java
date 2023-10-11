import java.util.Scanner;

public class question3 {
    public static String compareIfElse(int a, int b) {
        // Write your code here
        if (a > b)
            return "greater";
        if (a < b)
            return "smaller";
        if (a == b)
            return "equal";
        return "null";
    }

    public static void main(String[] args) {
        try (Scanner read = new Scanner(System.in)) {
            int a = read.nextInt();
            int b = read.nextInt();
            System.out.println(compareIfElse(a, b));
        }
    }
}
