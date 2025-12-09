public class printnumbers {

    static void func(int a) {
        if (a>0) {
            System.out.println(a);
            func(a - 1);



        }

    }

    public static void main(String[] args) {
        int a = 6;
        func(a);

    }
}
