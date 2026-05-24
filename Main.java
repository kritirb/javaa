//create a main class with method-in main method, create object of those three classes and call their methods
public class Main()
public static void main(String[] args){
Bike b = new Bike();
Car c = new Car();
Truck t = new Truck();

//Bike
System.out.println("Bike Tires:" + b.noofTires);
b.startEngine();
b.drive();
b.honk();
system.out.println();

//Car
System.out.println("Car Tires:" + c.noofTires);
c.startEngine();
c.honk();
system.out.println();

//Truck
System.out.println("Truck Tires:" + t.noofTires);
t.startEngine();
t.honk();
system.out.println();
}