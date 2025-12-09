import java.io.IOException;

public class letterguessadvanced {
    public static void main(String[]args) throws IOException{
            char ch,Answerone='k';
            char Answertwo='K';
            System.out.println("Can you guess the letter I am going to think?");
            System.out.println("It will be between A and Z.");
            ch=(char)System.in.read();
            if(ch==Answerone||ch==Answertwo)
            System.out.println("You guessed right");
            else{
            System.out.println("You guessed wrong.");
                if (ch<Answerone&&ch<Answertwo)
                System.out.println("Too low");
                else
                System.out.println("Too high");
            }
                
        }
        
    }
    

