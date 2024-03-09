class Vehicle {
    int passengers;
    int fuelcapacity;
    int mpgfuelconsumption;

    int range() {
        return (passengers * fuelcapacity);
    }
}

public class vehicledemo {
    public static void main(String[] args) {
        Vehicle minivan = new Vehicle();
        Vehicle sportscar = new Vehicle();
        int range1;
        int range2;
        // int range4;
        minivan.passengers = 67;
        minivan.fuelcapacity = 34;
        minivan.mpgfuelconsumption = 37;
        sportscar.passengers = 4;
        sportscar.fuelcapacity = 879;
        sportscar.mpgfuelconsumption = 167;
        // range1=minivan.passengers*minivan.fuelcapacity*minivan.mpgfuelconsumption;
        // System.out.println("Range1 is : " + range1);
        // range2=sportscar.passengers*sportscar.fuelcapacity*sportscar.mpgfuelconsumption;
        // System.out.println("Range2 is :" + range2);
        // range3=bus.passengers/minivan.passengers;
        // System.out.println("Range3 is : " + range3);
        // range4=bus.passengers;
        // System.out.println("Range4 is : " + range4);
        range1 = minivan.range();
        range2 = sportscar.range();
        System.out.println("Range of minivan is : " + range1);
        System.out.println("Range of sportscar is :" + range2);

    }

}
