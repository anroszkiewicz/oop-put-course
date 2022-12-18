package FinalGradeCalculator;
import java.util.Scanner;
import java.util.ArrayList;

public class TestItem 
{
    private String name;
    private Subject subject;
    private int weight;
    ArrayList <SingleGrade> grades;

    Scanner scanner = new Scanner(System.in);

    public TestItem(String inputName, Subject inputSubject, int inputWeight)
    {
        this.name=inputName;
        this.subject=inputSubject;
        this.weight=inputWeight;
        this.grades = new ArrayList <SingleGrade>();
    }

    public void AssignGrades()
    {
        Subject currentSubject = this.subject;
        int classSize = currentSubject.students.length;

        System.out.println("Please input grades for " + this.subject.SubjectName() + " " + this.name + ": ");

        for(int i=0; i<classSize; i++)
        {
            System.out.print(currentSubject.students[i].FullName() + ": ");
            Double inputGradeValue = scanner.nextDouble();
            SingleGrade newGrade = new SingleGrade(this,currentSubject.students[i],inputGradeValue);
            
            this.grades.add(newGrade);
            currentSubject.students[i].grades.add(newGrade);
        }
    }

    public void DisplayGrades()
    {
        System.out.println("Showing all grades for " + this.subject.SubjectName() + " " + this.name);
        for(SingleGrade grade: this.grades)
        {
            double value = grade.GradeValue();
            String name = grade.StudentName();
            System.out.println(name + ": " + value);
        }
    }

    public double TestAverage() throws ArithmeticException
    {
        double sum=0;
        double result=0;

        if(grades.size()==0) throw new ArithmeticException("Zero grades - cannot calculate average");
        
        for(int i=0; i<grades.size(); i++) 
        {
            double grade = grades.get(i).GradeValue();
            sum+=grade;
        }
        result=sum/grades.size();
        return result;
    }

    public void DisplayTestAverage()
    {
        try
        {
            double result = this.TestAverage();
            System.out.print("Grade average for " + this.subject + " " + this.name + ": ");
            System.out.printf("%.2f\n",result);
        }
        catch(ArithmeticException e)
        {
            System.out.println(e);
        }
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
