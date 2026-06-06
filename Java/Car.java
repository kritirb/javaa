class Car {
    int noofTires=4;
    String horn="Beep Beep";
    void dive(){
        System.out.println("Car is driving");
    }
    void honk(){
        System.out.println(horn);
    }
    void startEngine(){
        System.out.println("Car engine started");
    }
    
    public static void main(String[] args){
        Car c = new Car();
        c.dive();
        c.honk();
        c.startEngine();
    }
}
