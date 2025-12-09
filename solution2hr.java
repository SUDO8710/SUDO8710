import java.util.Scanner;

public class solution2hr {
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        for(int i=0;i<t;i++){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int n = sc.nextInt();
            sc.close();
            int x=1;
            for(int k=0;k<n;k++){
                a=a+x*b;
                System.out.print(a+" ");
                x=x*2;
            }
            System.out.println();
        }
    }
    
}
