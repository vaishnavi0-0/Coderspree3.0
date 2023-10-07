import java.util.Scanner;

// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static void main(String[] args) {
        // Press Alt+Enter with your caret at the highlighted text to see how
        // IntelliJ IDEA suggests fixing it.
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[100];
        for (int i = 0 ; i<n; i++){
            arr[i]= scanner.nextInt();
            for (int j=0 ; j<i ; j++){
                if (arr[i] == arr[j]){
                    System.out.println(arr[i]);
                }
            }
        }
    }
}