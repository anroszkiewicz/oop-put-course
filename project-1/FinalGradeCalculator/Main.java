package FinalGradeCalculator;

public class Main 
{
    public static void main(String[] args)
    {
        Student ania = new Student("Anna","Roszkiewicz",1);
        Student tosica = new Student("Antonina","Pogorzelczyk",2);
        Student wojtek = new Student("Wojciech","Hankiewicz",3);

        Student[] students = {ania,tosica,wojtek};  

        Subject math = new Subject("Math",students);
        Subject english = new Subject("English",students);

        TestItem mathTest = new TestItem("Calculus Exam",math,5);
        TestItem mathTest2 = new TestItem("Trigonometry Quiz",math,2);
        TestItem englishTest = new TestItem("Tenses Quiz",english,3);

        //math.StudentList();

        mathTest.AssignGrades();
        mathTest.DisplayGrades();

        double result = mathTest.TestAverage();
        System.out.print(result);
    }
}
