import java.util.Scanner;

public class ProblemL {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt(),b = sc.nextInt(),c = sc.nextInt(),n = sc.nextInt();
        boolean hasCero = a == 0 || b == 0 || c == 0;
        if (hasCero)
            System.out.println("NO");
        else if((a+b+c) >= n)
            System.out.println("YES");
        else
            System.out.println("NO");
        sc.close();
    }
}
