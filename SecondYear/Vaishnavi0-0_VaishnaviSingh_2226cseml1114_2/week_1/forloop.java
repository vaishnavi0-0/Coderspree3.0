import java.util.Scanner;

public class question4 {

    public static void main(String[] args) {

        try (/*
              * Your class should be named Solution.
              * Read input as specified in the question.
              * Print output as specified in the question.
              */
                Scanner read = new Scanner(System.in)) {
            int count = read.nextInt();
            System.out.println(F(count));
        }

    }

    /*
     * static int printFibonacci(int count){
     * if(countif(count>0){
     * n3 = n1 + n2;
     * n1 = n2;
     * n2 = n3;
     * printFibonacci(count-1);
     * 
     * }
     * return n3;
     * }
     */
    public static int F(int n) {
        if (n == 1 || n == 2) {
            return 1;
        }

        if (n > 2) {
            return F(n - 1) + F(n - 2);
        }
        return 0;
    }
}
