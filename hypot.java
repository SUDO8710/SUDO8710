import java.util.Scanner;
public class hypot{
    public static void main (String[]args){
        try (Scanner hypot = new Scanner(System.in)) {
            System.out.print("Enter the first number");
            int a=hypot.nextInt();
            System.out.print("Enter the second number");
            int b=hypot.nextInt();
            double z=Math.sqrt(a*a+b*b);
            System.out.println("Hypotenuse is " + z);
        }
    }
    
}
