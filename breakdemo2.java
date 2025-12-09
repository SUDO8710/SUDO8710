import java.io.IOException;

public class breakdemo2 {
    public static void main(String[]args) throws IOException{
        char ch;
        for (;;){
            ch=(char)System.in.read();
            if (ch=='q')break;
        }
    System.out.println("You pressed q!");
    }
    
}
