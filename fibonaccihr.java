import java.util.*;

public class fibonaccihr {

    public static int fibonacci(int n) {
        // Complete the function.
        return 0;

    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.close();
        // System.out.println(fibonacci(n));
        int fi = 0;
        int f0 = 0;
        int f1 = 1;
        // System.out.print("0 1 ");
        int lastBefore = f0;
        int lastTerm = f1;
        for (int index = 0; index < n - 1; index++) {
            // int lastBefore=f0;
            // int lastTerm=f1;
            fi = lastBefore + lastTerm;
            lastBefore = lastTerm;
            lastTerm = fi;

            // System.out.print(fi + " ");

        }
        System.out.print(fi);

    }
}
