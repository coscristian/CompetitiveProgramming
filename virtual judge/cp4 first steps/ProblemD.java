import java.util.Scanner;

class ProblemD {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R1 = sc.nextInt(), S = sc.nextInt();

        System.out.printf("%d\n", 2*S - R1);
        sc.close();
    }
}