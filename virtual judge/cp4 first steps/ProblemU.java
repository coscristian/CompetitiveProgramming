import java.util.Scanner;

public class ProblemU {
    public static void main(String args[]) {
        final String ENGLISH = "ENGLISH";
        final String SPANISH = "SPANISH";
        final String GERMAN = "GERMAN";
        final String FRENCH = "FRENCH";
        final String ITALIAN = "ITALIAN";
        final String RUSSIAN = "RUSSIAN";
        final String UNKNOWN_LANG = "UNKNOWN";

        String language;
        Integer count = 1;
        Scanner sc = new Scanner(System.in);
        String word = "";

        while(!(word = sc.nextLine()).equals("#")) {
            switch(word) {
                case "HELLO": language = ENGLISH; break;
                case "HOLA": language = SPANISH; break;
                case "HALLO": language = GERMAN; break;
                case "BONJOUR": language = FRENCH; break;
                case "CIAO": language = ITALIAN; break;
                case "ZDRAVSTVUJTE": language = RUSSIAN; break;
                default: language = UNKNOWN_LANG; break;
            }
            System.out.println("Case " + count + ": " + language);
            count++;
        }
        sc.close();
    }
}
