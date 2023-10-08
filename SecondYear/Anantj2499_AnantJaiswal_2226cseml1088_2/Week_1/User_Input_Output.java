import java.util.Scanner;

public class User_Input_Output {

    /**
     * Solution
     */

        public static void main(String args[])
        {
            Scanner scanner = new Scanner(System.in);
            char ch = scanner.next().charAt(0);
            if (Character.isLetter(ch)) {
                if (Character.isUpperCase(ch)) {
                    System.out.println(1);
                } else if (Character.isLowerCase(ch)) {
                    System.out.println(0);
                }
            } else {
                System.out.println(-1);
            }
        }

}
