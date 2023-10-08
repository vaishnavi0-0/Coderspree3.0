public class Data_Types {
    public static int dataTypes(String type) {
        // Write your code here
        if (type.equalsIgnoreCase("Integer")) {
            return 4;
        }
        if (type.equalsIgnoreCase("Long")) {
            return 8;
        }
        if (type.equalsIgnoreCase("Float")) {
            return 4;
        }
        if (type.equalsIgnoreCase("Double")) {
            return 8;
        }
        if (type.equalsIgnoreCase("Character")) {
            return 1;
        }
        else
            return 0;
    }
}
