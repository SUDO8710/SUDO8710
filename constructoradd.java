//Adding a constructor
class Vehicle{
    int passengers;
    int fuelcap;
    int milespergallons;
    //Constructor for vehicle
    Vehicle(int p,int f,int m){
        passengers=p;
        fuelcap=f;
        milespergallons=m;
    }
    //Returning the range
    int range(){
        return milespergallons*fuelcap;
    }
    //Calculating fuel needed for given distance
    double FuelNeeded(int miles){
        return (double) miles/milespergallons;
    }
}

public class constructoradd {
    public static void main(String[]args){
        Vehicle minivan =new Vehicle (1,4,8);
        Vehicle sportscar= new Vehicle(8, 7, 9);
        double gallons;
        int distance =5667;
        gallons=minivan.FuelNeeded(distance);
        System.out.println("To go" + distance + "miles minivan needs" + gallons + "gallons of fuel");
        gallons=sportscar.FuelNeeded(distance);
        System.out.println("To go" + distance + "miles sportscar needs" + gallons + "gallons of fuel");
    }

}
