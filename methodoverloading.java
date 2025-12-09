class addition {
    static int add(int... arr) {
        int sum = 0;
        for (int a : arr) {
            sum = sum + a;

        }
        return sum;

    }

        public static void main(String[] args) {
            System.out.println(add(1, 2));
            System.out.println(add(1, 2, 4, 3));
            System.out.println(add(1, 2, 9));

        }
    }

