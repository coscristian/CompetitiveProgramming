import java.util.Scanner;

public class ProblemM {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String date = sc.nextLine();
        if (date.equals("OCT 31") || date.equals("DEC 25"))
            System.out.println("yup");
        else
            System.out.println("nope");
        sc.close();
    }
}
