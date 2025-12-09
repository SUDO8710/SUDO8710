
class calculate {
    int multiply(int a, int b) {
        return (a * b);
    }

    double multiply(double a, double b, double c) {
        return (a * b * c);
    }
}

public class constructoroverloading {
    public static void main(String[] args) {
        calculate obj = new calculate();
        int c = obj.multiply(4, 6);
        double d = obj.multiply(5.7, 8.7, 3.8);
        System.out.println(c);
        System.out.println(d);

    }
}
