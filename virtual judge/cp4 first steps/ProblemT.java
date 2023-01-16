import java.util.Scanner;

public class ProblemT {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Integer n = sc.nextInt(), a, b;

        while(n > 0) {
            a = sc.nextInt();
            b = sc.nextInt();
            System.out.println(ProblemT.check(a, b));
            n--;
        }
    }

    private static String check(Integer a, Integer b) {
        if (a > b) return ">";
        if (a < b) return "<";
        return "=";
    }

}