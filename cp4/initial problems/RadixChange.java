import java.util.*;
import java.math.*;

class RadixChange{
    public static void main(String[] args){
        String str = "101"; int X = 2, Y = 10;
        System.out.println(new BigInteger(str, X).toString(Y));
    }
}