import java.util.Scanner;

public class inputoutput {
    public static void main(String[] args) {
        try (// Write your code here
                Scanner read = new Scanner(System.in)) {
            char ch = read.next().charAt(0);
            if (ch >= 'a' && ch <= 'z')
                System.out.println(0);
            else if (ch >= 'A' && ch <= 'Z')
                System.out.println(1);
            else
                System.out.println(-1);
        }

    }
}
