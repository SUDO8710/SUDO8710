public class staticexample {

    static int a = 56;
    int b = 34;

    void simpleDisplay() {
        System.out.println(a);
        System.out.println(b);

    }

    static void staticdisplay() {
        System.out.println(a);
    }

    public static void main(String[] args) {
        staticexample obj = new staticexample();
        obj.simpleDisplay();
        staticdisplay();

    }
}
