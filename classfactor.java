class Factor{
    boolean isFactor (int a,int b){
        if (b%a ==0) return true;
        else return false;
    }

}
public class classfactor {
    public static void main(String[]args){
        Factor x=new Factor();
        if (x.isFactor(2, 20)) System.out.println("It is a factor of 20");
        if(x.isFactor(7, 34)) System.out.println("It is not a factor of 34"); 
    }
    
}
