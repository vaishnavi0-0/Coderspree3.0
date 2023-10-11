import java.util.Scanner;

public class question2 {
    public static int dataTypes(String type) {
        // Write your code here
        type = type.toLowerCase();
        switch (type) {
            case "integer":
                return 4;
            case "long":
                return 8;
            case "float":
                return 4;
            case "double":
                return 8;
            case "character":
                return 1;
            default:
                return (-1);

        }
    }

    public static void main(String[] args) {
        try (Scanner read = new Scanner(System.in)) {
            String dataty = read.next();
            System.out.println(dataTypes(dataty));
        }
    }
}
