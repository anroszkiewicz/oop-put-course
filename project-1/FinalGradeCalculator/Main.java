package FinalGradeCalculator;

public class Main 
{
    public static void main(String[] args)
    {
        Student student1 = new Student("Anna","Roszkiewicz",1);
        String testname=student1.FullName();
        System.out.println(testname);

        Subject subject1 = new Subject("Math");
    }
}
