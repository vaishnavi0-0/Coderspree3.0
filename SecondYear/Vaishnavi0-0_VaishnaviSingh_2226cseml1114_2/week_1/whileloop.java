import java.util.Scanner;

public class whileloop {

    public static void main(String[] args) {
        try (// Write your code here
                Scanner read = new Scanner(System.in)) {
            int n = read.nextInt();
            int evenS = 0, oddS = 0;
            while (n != 0) {
                if ((n % 10) % 2 == 0)
                    evenS += n % 10;
                else
                    oddS += n % 10;
                n /= 10;
            }
            System.out.println(evenS + " " + oddS);
        }

    }
}
