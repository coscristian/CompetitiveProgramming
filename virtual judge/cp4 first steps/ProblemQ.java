import java.util.Scanner;

public class ProblemQ {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt(), y = sc.nextInt(), cuad = 0;
        
        if (x > 0 && y > 0) cuad = 1;
        else if(x < 0 && y > 0) cuad = 2;
        else if(x < 0 && y < 0) cuad = 3;
        else if(x > 0 && y < 0) cuad = 4;

        System.out.println(cuad);
        sc.close();
    }
}
