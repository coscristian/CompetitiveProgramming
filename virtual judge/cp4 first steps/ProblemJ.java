import java.util.Scanner;

public class ProblemJ {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        float qAcum = 0f, q =0f, y;
        while(N-- != 0) {
            q = sc.nextFloat();
            y = sc.nextFloat();
            qAcum += q*y;
        }
        System.out.printf("%.3f\n", qAcum);

        sc.close();
    }
}
