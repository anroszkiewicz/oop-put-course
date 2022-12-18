package FinalGradeCalculator;
import java.util.Scanner;
import java.util.ArrayList;

public class TestItem 
{
    private String name;
    private Subject subject;
    private int weight;
    private SingleGrade[] grades;

    Scanner scanner = new Scanner(System.in);

    public TestItem(String inputName, Subject inputSubject, int inputWeight)
    {
        this.name=inputName;
        this.subject=inputSubject;
        this.weight=inputWeight;
    }

    public void AssignGrades()
    {
        Subject currentSubject = this.subject;
        int classSize = currentSubject.students.length;

        SingleGrade newGrades[];
        newGrades = new SingleGrade[3];

        System.out.println("Please input grades for " + this.subject.SubjectName() + " " + this.name + ": ");

        for(int i=0; i<classSize; i++)
        {
            System.out.print(currentSubject.students[i].FullName() + ": ");
            Double inputGradeValue = scanner.nextDouble();
            SingleGrade newGrade = new SingleGrade(this,currentSubject.students[i],inputGradeValue);
            newGrades[i] = newGrade;

            currentSubject.students[i].grades.add(newGrade);
        }

        this.grades = newGrades;
    }

    public void DisplayGrades()
    {
        for(SingleGrade grade: this.grades)
        {
            double value = grade.GradeValue();
            //String name = grade.student.FullName();
            System.out.println(value);
        }
    }

    public double TestAverage()
    {
        double sum=0;
        double result=0;

        try
        {
            for(int i=0; i<this.grades.length; i++) 
            {
                double grade = this.grades[i].GradeValue();
                sum+=grade;
            }
            result=sum/grades.length;
        }
        catch(NullPointerException e)
        {
            System.out.println("Zero grades - cannot calculate average");
        }
        return result;
    }

    public String Name()
    {
        return this.name;
    }

    public Subject TestSubject()
    {
        return this.subject;
    }

    public int TestWeight()
    {
        return this.weight;
    }
}
