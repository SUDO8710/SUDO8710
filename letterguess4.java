import java.io.IOException;

public class letterguess4 {
    public static void main(String[]args) throws IOException{
        char ch,ignore,Answer='k';
        do {
            System.out.println("I am thinking of a letter between A and Z");
            System.out.println("Can you guess it?");
            ch=(char) System.in.read();
            do{
                ignore=(char)System.in.read();
            } while(ignore!=('\n'));
              if (ch==Answer)  System.out.println("You guessed it Right!");
              else{
                System.out.println("Sorry you are too  ");
                if (ch<Answer) System.out.println("low");
                else System.out.println(" too high");
                     System.out.println("Try Again! \n");
                }
            
            }  while(ch!=Answer); 
     

    }
}    

