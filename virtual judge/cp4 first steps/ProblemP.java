import java.util.Scanner;

public class ProblemP {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int G = sc.nextInt(), S = sc.nextInt(), C = sc.nextInt(),
            buyingPower = 3*G + 2*S + C;
        String victory = "", treasure = "";

        if (buyingPower >= 8) victory += "Province";
        else if (buyingPower >= 5) victory += "Duchy";
        else if (buyingPower >= 2) victory += "Estate";

        if (buyingPower >= 6) treasure += "Gold";
        else if (buyingPower >= 3) treasure += "Silver";
        else treasure += "Copper";

        if (victory.isEmpty())
            System.out.printf("%s\n", treasure);
        else 
            System.out.printf("%s or %s\n", victory, treasure);

        sc.close();
    }
}
