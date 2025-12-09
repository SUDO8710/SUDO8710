public class factorials {
    static int factorial(int a) {
        if (a == 0 || a == 1) {
            return 1;
        } else {
            return (a * factorial(a - 1));

        }

    }

    public static void main(String[] args) {
        int a = 5;
        System.out.println(factorial(a));

    }
}
