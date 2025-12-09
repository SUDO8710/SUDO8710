import java.util.Scanner;

public class studentgrade {
    public static void main(String[]args){
        int marks;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your marks");
        marks=sc.nextInt();
        sc.close();
        if (marks>=80)
        {
            System.out.println("A");
        }
        else if(marks>=60 && marks<80)
        {
            System.out.println("B");
        }
        else if(marks>=40 && marks<60)
        {
            System.out.println("C");
        }
        else
            System.out.println("You have failed");
    }
    
}
