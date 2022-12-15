import java.util.Scanner;

public class ProblemK {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt(), N = sc.nextInt(), Pi, ans = X;

        while(N > 0) {
            Pi = sc.nextInt();
            ans += X - Pi;
            N--;
        }
        System.out.println(ans);
        sc.close();
    }
}
