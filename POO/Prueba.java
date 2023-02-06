interface X {
    int VALUE = 100;
    int h = 10;
}

interface Y {
    int VALUE = 200;
    String h = "Hello World";
    int sub = VALUE - X.VALUE;
}

public class Prueba implements Y{
    public static void main(String args[]) {
        System.out.println("X.VALUE = " + X.VALUE);
        System.out.println("Y.VALUE = " + Y.VALUE);
        System.out.println("sub = " + sub);
        System.out.println("X.h = " + X.h);
        System.out.println("h = " + h);
    }
}