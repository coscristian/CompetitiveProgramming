import java.util.Scanner;

public class ProblemN {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int l = sc.nextInt(), r = sc.nextInt();

        if (l == 0 && r == 0)
            System.out.println("Not a moose");
        else if(l == r) 
            System.out.printf("Even %d\n", 2*l);
        else 
            System.out.printf("Odd %d\n", 2 * Math.max(l, r));

        sc.close();
    }
}