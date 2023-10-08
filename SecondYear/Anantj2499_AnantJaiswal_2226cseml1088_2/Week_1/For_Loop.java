import java.util.Scanner;

public class For_Loop {
    public static void main(String[] args) {

        /* Your class should be named Solution.
         * Read input as specified in the question.
         * Print output as specified in the question.
         */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum=0;
        int n1=0;
        int n2=1;
        for (int i = 0; i<=n; i++) {
            if (i<=0) {
                sum =n1;
            }
            else if (i==1) {
                sum =n2;
            }
            else{
                sum= n1+n2;
                n1=n2;
                n2=sum;
            }

        }
        System.out.println(sum);

    }
}
