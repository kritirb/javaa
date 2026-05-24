interface libraryhelper {
    void bookborrowed(int books);
}

abstract class student {
    String name;
    int rollno;
    double fees;

    student(String name, int rollno, double fees) {
        this.name = name;
        this.rollno = rollno;
        this.fees = fees;
    }

    abstract void attendclass();
    abstract void giveExam();

    void payfee() {
        System.out.println("Fees paid: " + fees);
    }
}

class studentCEIV extends student implements libraryhelper {
    int marks;

    studentCEIV(String name, int rollno, double fees, int marks) {
        super(name, rollno, fees);
        this.marks = marks;
    }

    void attendclass() {
        System.out.println(name + " is attending class.");
    }

    void giveExam() {
        System.out.println(name + " is giving exam.");
    }

    public void bookborrowed(int books) {
        System.out.println("Books borrowed: " + books);
    }

    void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Roll No: " + rollno);
        System.out.println("Fee: " + fees);
        System.out.println("Marks: " + marks);
    }

    void gradeStudent() {
        if (marks >= 90) {
            System.out.println("Grade: A");
        } else if (marks >= 80) {
            System.out.println("Grade: B");
        } else if (marks >= 70) {
            System.out.println("Grade: C");
        } else if (marks >= 60) {
            System.out.println("Grade: D");
        } else {
            System.out.println("Grade: F");
        }
    }
}

public class studentManagement {
    public static void main(String[] args) {

        studentCEIV student1 =
                new studentCEIV("Alice", 101, 5000.0, 85);

        student1.attendclass();
        student1.giveExam();
        student1.payfee();
        student1.bookborrowed(3);
        student1.displayInfo();
        student1.gradeStudent();
    }
}