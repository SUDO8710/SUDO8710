class Power{
    double b;
    int e;
    double val;
    Power(double base,int exp){
        this.e=exp;
        this.b=base;
        this.val=1;
        if (exp==0)return;
        for(;exp>0;exp--)
            this.val=this.val*base;
        }
         double getVal(){
            return this.val;
        }


    }

public class thisdemo {
    public static void main (String[]args){
        Power x=new Power(4,0);
        Power y=new Power(3,6);
        Power z=new Power(6,2);
        System.out.println(x.b + "raised to the" + x.e + "power is" + x.getVal());
        System.out.println(y.b + "raised to the" + y.e + "power is" + y.getVal());
        System.out.println(z.b + "raised to the" + z.e + "power is" + z.getVal());
    }
    
}
