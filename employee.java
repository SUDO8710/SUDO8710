public class employee {
    public int Salary;
    public String name;

    public int Salary() {
        return Salary;

    }

    public String getName() {
        return name;
    }

    public void setName(String n) {
        name = n;

    }
}

class Cellphone {
    public String name;

    public void vibrating() {
        System.out.println("Vibrating");

    }

    public void ringing() {
        System.out.println("Ringing");

    }



    
    

    public static void main(String[] args) {
        /*employee A = new employee();
        A.setName("coding java");
        A.Salary = 10000;
        System.out.println(A.getName());
        System.out.println(A.Salary());*/

        Cellphone samsung =new Cellphone();
        samsung.ringing();

    }
}

