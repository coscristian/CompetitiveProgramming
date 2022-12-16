import java.util.Scanner;

public class ProblemG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-- != 0) {
            double n = sc.nextInt(), m = sc.nextInt();
            System.out.println((int) (Math.ceil((n-2)/3) * Math.ceil((m-2)/3)));
        }
        sc.close();
    }
}
