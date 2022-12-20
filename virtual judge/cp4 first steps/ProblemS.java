import java.util.Scanner;

public class ProblemS {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-- != 0) {
            int n = sc.nextInt();
            if(n % 2 == 0)
                System.out.printf("%d is even\n", n);
            else
                System.out.printf("%d is odd\n", n);
        }
        sc.close();
    }
}
