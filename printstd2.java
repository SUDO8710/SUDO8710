import java.util.Scanner;
public class printstd2 {

    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int i=scanner.nextInt();
        scanner.nextLine();
        double d = scanner.nextDouble();
        scanner.nextLine();
        String str = scanner.nextLine();
        scanner.close();
        
        System.out.println("String: "+ str );
        System.out.println("Double: "+ d );
        System.out.println("Int: "+i);
    }
}

    

