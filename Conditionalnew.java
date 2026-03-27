
import java.util.Scanner;
public class Conditional21 {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);

        String location=scan.nextLine();
        Double parkinghours=scan.nextDouble();
        scan.nextLine();
        String vehicletype=scan.nextLine();
        String membershipstatus=scan.nextLine();

        double basehourlyrate=5.00;
        double zonepremium=0.0;
        double vehiclesizesurcharge=0.0;
        double membershipdiscount=0.0;
        double totalparkingfee=0.0;
        String dailycapapplied;
        String ratecategory=" ";
        

        if(location.equals("Downtown")){
            zonepremium=50;
            basehourlyrate=5.00;
            ratecategory="Premium";
            dailycapapplied=150.0;
        }
        else if(location.equals("Business-District")){
            zonepremium=30;
            basehourlyrate=5.00;
            ratecategory="Premium";
            dailycapapplied=120.0;
        }
        else if(location.equals("Residential")){
            zonepremium=0;
            basehourlyrate=5.00;
            ratecategory="Standard";
            dailycapapplied=
        }
        else if(location.equals("Airport")){
            zonepremium=100;
            basehourlyrate=5.00;
            ratecategory="Luxury";
        }


        if(vehicletype.equals("Motorcycle")){
            vehiclesizesurcharge=-2;
        }
        else if(vehicletype.equals("Compact")){
            vehiclesizesurcharge=0;
        }
        else if(vehicletype.equals("Sedan")){
            vehiclesizesurcharge=0;
        }
        else if(vehicletype.equals("SUV")){
            vehiclesizesurcharge=3;
        }
        else if(vehicletype.equals("Oversized")){
            vehiclesizesurcharge=5;
        }

        double rawfee;
        rawfee=(basehourlyrate*(1+zonepremium/100)+vehiclesizesurcharge)*parkinghours;

        if(membershipstatus.equals("None")){
            membershipdiscount=0;
        }
        else if(membershipstatus.equals("Monthly")){
            membershipdiscount=20;
        }
        else if(membershipstatus.equals("Annual")){
            membershipdiscount=25;
        }
        else if(membershipstatus.equals("VIP")){
            membershipdiscount=30;
        }

        
            
            
        double discountedfee=rawfee*(1-membershipdiscount)/100;
        if(parkinghours>=24 ){
                
                dailycapapplied="Yes";
            }
        else{
               
                dailycapapplied="No";
            }
        
        

        System.out.println("Location:"+location);
        System.out.println("ParkingDuration:"+parkinghours);
        System.out.println("VehicleType:"+vehicletype);
        System.out.println("Membership Status:"+membershipstatus);
        System.out.println("Base Hourly Rate:"+basehourlyrate);
        System.out.println("Zone Premium:"+zonepremium);
        System.out.println("Vehicle Size Surcharge:"+vehiclesizesurcharge);
        System.out.println("Membership Discount:"+membershipdiscount);
        System.out.println("Total Parking Fee:"+totalparkingfee);
        System.out.println("Daily Cap Applied:"+dailycapapplied);
        System.out.println("Rate Category:"+ratecategory);

        scan.close();


    }
}





import java.util.Scanner;
public class Conditional22 {
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);

        int unitsconsumed=scan.nextInt();
        scan.nextLine();
        String customertype=scan.nextLine();
        String season=scan.nextLine();
        String paymentmethod=scan.nextLine();

        
        double Tier1cost=0.0;
        double Tier2cost=0.0;
        double Tier3cost=0.0;
        double Tier4cost=0.0;
        double seasonaladjustment=0.0;
        double paymentdiscount=0.0;
        double totalbill=0.0;
        double averagerate=0.0;


        if(customertype.equals("Residential")){
            if(unitsconsumed<100){
                Tier1cost=0.10;
            }
            else if(unitsconsumed<300){
                Tier2cost=0.15;
            }
            else if(unitsconsumed<500){
                Tier3cost=0.25;
            }
            else if(unitsconsumed>501){
                Tier4cost=0.30;
            }
        }
        else if(customertype.equals("Commercial")){
            if(unitsconsumed<100){
                Tier1cost=0.12;
            }
            else if(unitsconsumed<300){
                Tier2cost=0.18;
            }
            else if(unitsconsumed<500){
                Tier3cost=0.25;
            }
            else if(unitsconsumed>501){
                Tier4cost=0.25;
            }
        }
        else if(customertype.equals("Industrial")){
            if(unitsconsumed<100){
                Tier1cost=0.08;
            }
            else if(unitsconsumed<300){
                Tier2cost=0.12;
            }
            else if(unitsconsumed<500){
                Tier3cost=0.20;
            }
            else if(unitsconsumed>501){
                Tier4cost=0.20;
            }
        }


        if(season.equals("Summer")){
            seasonaladjustment=+15;
        }
        else if(season.equals("Winter")){
            seasonaladjustment=-10;
        }
        else if(season.equals("Regular")){
            seasonaladjustment=0;
        }
        

        if(paymentmethod.equals("Autopay")){
            paymentdiscount=5;
        }
        else if(paymentmethod.equals("Online")){
            paymentdiscount=3;
        }
        else if(paymentmethod.equals("Manual")){
            paymentdiscount=0;
        }
    }
}
