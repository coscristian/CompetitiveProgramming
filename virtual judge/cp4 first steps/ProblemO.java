import java.util.Scanner;

public class ProblemO {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt(), M = sc.nextInt(), remainingChickens = M - N;
        String plural = "s";

        if(remainingChickens < 0){
            if (remainingChickens == -1) plural = "";
            System.out.printf("Dr. Chaz needs %d more piece%s of chicken!\n", Math.abs(remainingChickens), plural);
        } else {
            if (remainingChickens == 1) plural = "";
            System.out.printf("Dr. Chaz will have %d piece%s of chicken left over!\n", remainingChickens, plural);
        }    
        sc.close();
    }
}
