import java.util.Scanner;

class ProblemH {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t > 0) {
            t--;
            int n = sc.nextInt();
            System.out.printf("%d\n", Math.abs(((n * 567 / 9 + 7492) * 235 / 47 - 498)) / 10 % 10);
        }
        sc.close();
    }
}