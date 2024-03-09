
public class Solution {
    public static boolean IsOdd(int a) {
        // if (a%2!=0)
        // return true;
        // else return false;
        return a % 2 != 0;

    }

    public static boolean IsInRange6To20(int a) {
        return 6 < a && a < 20;
    }

    public static void main(String[] args) {
        //int a

        int N = 20;
        //System.out.println(N);
        //Scannner sc=new Scanner System.in;
        //a=sc.nextInt();
        if (IsOdd(N) || IsInRange6To20(N)){
            System.out.println("Weird");
        }else {
            System.out.println("Not Weird");
        }
            
        }

}
