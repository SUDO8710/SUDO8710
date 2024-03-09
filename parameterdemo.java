class Checkwhetheroddoreven{
    boolean isEven(int x){
        if ((x%2)==0)
        return true;
        else 
        return false;
    }
}

public class parameterdemo {
    public static void main (String[]args){
        Checkwhetheroddoreven e=new Checkwhetheroddoreven();
        if(e.isEven(10))
         System.out.println("10 is even");
         if(e.isEven(9))
         System.out.println("9 is even");
         if(e.isEven(7))
         System.out.println("7 is even");
    }
    
}
