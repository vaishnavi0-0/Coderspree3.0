import java.util.Scanner;

public class While_loop {
    public static void main(String[] args) {
        // Write your code here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int even =0;
        int odd=0;
        int digit =0;
        while (n>0) {
            digit = n%10;
            if(digit%2==0)
                even+=digit;
            else
                odd+=digit;
            n/=10;
        }
        System.out.println(even+" "+odd);
    }
}
