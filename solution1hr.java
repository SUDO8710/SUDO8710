import java.util.Scanner;

public class solution1hr {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        sc.close();
        // int N=2;

        for (int i = 1; i <= 10; i++) {
            System.out.println(N + " x " + i + " = " + i * N);
        }
    }
}
