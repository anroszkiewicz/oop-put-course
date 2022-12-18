package FinalGradeCalculator;

public class Main 
{
    public static void main(String[] args)
    {
        Student john = new Student("John","Smith");
        Student robert = new Student("Robert","Johnson");
        Student mary = new Student("Mary","Williams");

        Student[] students = {john,robert,mary};  

        Subject math = new Subject("Math",students);
        Subject english = new Subject("English",students);

        TestItem mathTest = new TestItem("Calculus Exam",math,5);
        TestItem mathTest2 = new TestItem("Trigonometry Quiz",math,2);
        TestItem englishTest = new TestItem("Tenses Quiz",english,3);
        
        mathTest.AssignGrades();
        mathTest2.AssignGrades();
        englishTest.AssignGrades();

        mary.DisplayGrades();
        mathTest2.DisplayGrades();

        math.AssignFinalGrades();
        english.AssignFinalGrades();

        john.DisplayFinalGrades();
        john.DisplayFinalGradeAverage();
    }
}
