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

        math.StudentList();
    }
}
