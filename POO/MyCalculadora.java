
interface Add_Sub {
    public void add(double x, double y);
    public void substract(double x, double y);
}

interface Mul_Div {
    public void multiply(double x, double y);
    public void divide(double x, double y);
}

interface Calculadora extends Add_Sub, Mul_Div {
    public void printResult(double result);
}

public class MyCalculadora implements Calculadora{


    public static void main(String[] args) {
        MyCalculadora calc = new MyCalculadora();
        calc.add(8,4 );        
        calc.substract(3, 1);
        calc.divide(10, 5);
        calc.multiply(4, 6);
    }

    @Override
    public void printResult(double result) {
        System.out.println("The result is: " + result);
    }

    @Override
    public void add(double x, double y) {
        double result = x + y;
        printResult(result);
        
    }

    @Override
    public void substract(double x, double y) {
        double result = x - y;
        printResult(result);
        
    }

    @Override
    public void divide(double x, double y) {
        double result = x / y;
        printResult(result);
        
    }

    @Override
    public void multiply(double x, double y) {
        double result = x * y;
        printResult(result);
    }
}