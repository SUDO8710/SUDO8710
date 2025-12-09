import java.util.Scanner;
public class hypotenuse {
    public static void main (String[]args){
      try ( Scanner sc=new Scanner(System.in)){
        System.out.print("Enter the first number");
        int a=sc.nextInt();
        System.out.print("Enter the second number");
        int b=sc.nextInt();
        double z=Math.sqrt(a*a+b*b);
        System.out.println("Hypotenuse is " + z);
    }
    }
}
        
    

