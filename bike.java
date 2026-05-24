class Bike {
    int noofTires=4;
    String horn="Beep Beep";
    void dive(){
        System.out.println("Bike is driving");
    }
    void honk(){     
        System.out.println(horn);
    }
    void startEngine(){

        System.out.println("Bike engine started");
    }
    
    public static void main(String[] args){
        Bike b = new Bike();
        b.dive();
        b.honk();
        b.startEngine();
    }
}
