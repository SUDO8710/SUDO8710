import java.io.IOException;

public class helpjava1 {
    public static void main(String[]args) throws IOException{
        char choice;
        System.out.println("This is Java Help System :");
        System.out.println("Please select one option for further details");
        System.out.println("1.if");
        System.out.println("2.switch");
        choice=(char) System.in.read();
        System.out.println("\n");
        switch(choice){
            case '1':
            System.out.println("1. The if :\n");
            System.out.println("if (condition) statement;");
            System.out.println("else statement;");
            break;
            case '2':
            System.out.println("2.The switch:\n");
            System.out.println("switch (expression) {");
            System.out.println("  case constant:");
            System.out.println("  statement sequence");
            System.out.println("  break;");
            System.out.println("//...");
            System.out.println("}");
            break;
            default:
            System.out.println("You have selected wrong info!");

        }



    }
    
}
