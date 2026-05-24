public class studentCEIV extends student{
    public studentCEIV(String name, int roll, double fee){
        super(name, roll, fee);
    }
    @Override
    void attendClass(){
        System.out.println("Student is attending class");
    }
    @Override
    void giveExam(){
        System.out.println("Student is giving exam");
    }
    public static void main(String[] args) {
        studentCEIV s1 = new studentCEIV("Alice", 101, 5000.0);
        s1.attendClass();
        s1.giveExam();
        s1.payFee();
    }
}