import java.util.Scanner;

public class summation {
    public static void main(String[]args){
        char operator;
        double a,b,result;
        Scanner sc =new Scanner(System.in);
        System.out.println("Choose an operator : +,-,*,/");
        operator=sc.next().charAt(0);
        System.out.println("Enter the first number :");
        a=sc.nextDouble();
        System.out.println("Enter the second number :");
        b=sc.nextDouble();
        switch (operator) {
            case '+':
            result=a+b;
            System.out.println(a+"+"+b+"="+result);
            break;
            case '-':
            result=a-b;
            System.out.println(a+"-"+b+"="+result);
            break;
            case '*':
            result=a*b;
            System.out.println(a+"*"+b+"="+result);
            break;
            case '/':
            result=a/b;
            System.out.println(a+"/"+b+"="+result);
            break;
            default:
            System.out.println("Invalid operator used.");
            break;
        }
        sc.close();


        
    }
    
}
