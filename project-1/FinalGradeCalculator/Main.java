package FinalGradeCalculator;

public class Main 
{
    public static void main(String[] args)
    {
        Student ania = new Student("Anna","Roszkiewicz");
        Student tosica = new Student("Antonina","Pogorzelczyk");
        Student wojtek = new Student("Wojciech","Hankiewicz");

        Student[] students = {ania,tosica,wojtek};  

        Subject math = new Subject("Math",students);
        Subject english = new Subject("English",students);

        TestItem mathTest = new TestItem("Calculus Exam",math,5);
        TestItem mathTest2 = new TestItem("Trigonometry Quiz",math,2);
        TestItem englishTest = new TestItem("Tenses Quiz",english,3);

        //math.StudentList();

        mathTest.AssignGrades();
        //mathTest.DisplayGrades();
        mathTest2.AssignGrades();
        englishTest.AssignGrades();

        double result = mathTest.TestAverage();
        System.out.printf("%.2f\n",result);

        wojtek.DisplayGrades();
        double result2 = wojtek.SubjectAverage(math);
        System.out.printf("%.2f\n",result2);

        math.AssignFinalGrades();
        english.AssignFinalGrades();

        ania.DisplayFinalGrades();
        double result3 = ania.FinalGradeAverage();
        System.out.printf("%.2f\n",result3);
    }
}
