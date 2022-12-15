import java.util.Scanner;
import java.math.BigInteger;

public class ProblemB {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        BigInteger n;
        int num, rows;
        while(t > 0) {
            n = sc.nextBigInteger();
            num = Integer.parseInt(n.multiply(BigInteger.valueOf(8)).add(BigInteger.ONE).sqrt().add(BigInteger.ONE).toString());   
            System.out.println(num);
            rows = (int) Math.floor(num / 2);
            System.out.println(rows);
            t--;
        }
        sc.close();
    }
}
