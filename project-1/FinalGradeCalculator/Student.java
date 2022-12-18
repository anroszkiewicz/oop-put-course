package FinalGradeCalculator;
import java.util.ArrayList;

public class Student 
{
    private String name,surname;
    ArrayList <SingleGrade> grades;
    ArrayList <Integer> finalGrades;

    public Student(String inputName, String inputSurname)
    {
        this.name=inputName;
        this.surname=inputSurname;
        this.grades = new ArrayList <SingleGrade>();
        this.finalGrades = new ArrayList <Integer>();
    }

    public String FullName()
    {
        return this.name+" "+this.surname;
    }

    public void DisplayGrades()
    {
        System.out.println("Showing all grades for " + this.FullName());
        for(int i=0; i<this.grades.size(); i++)
        {
            System.out.println(grades.get(i).TestName() + ": " + grades.get(i).GradeValue());
        }
    }

    public double SubjectAverage(Subject subject) throws ArithmeticException
    {
        double gradeSum=0;
        double weightSum=0;
        double result=0;

        if(grades.size()==0) throw new ArithmeticException("Zero grades - cannot calculate average");

        for(int i=0; i<this.grades.size(); i++)
        {
            if(grades.get(i).Subject()==subject)
            {
                gradeSum += grades.get(i).GradeValue()*grades.get(i).Weight();
                weightSum += grades.get(i).Weight();
            }
        }
        result = gradeSum/weightSum;
        return result;
    }

    public void DisplayFinalGrades()
    {
        System.out.println("Showing final grades for " + this.FullName());
        for(int i=0; i<this.finalGrades.size(); i++)
        {
            System.out.println(finalGrades.get(i));
        }
    }

    public double FinalGradeAverage() throws ArithmeticException
    {
        double sum=0;

        if(finalGrades.size()==0) throw new ArithmeticException("Zero grades - cannot calculate average");

        for(double grade: this.finalGrades) sum+=grade;
        double result = sum/this.finalGrades.size();
        return result;
    }

    public void DisplayFinalGradeAverage()
    {
        try
        {
            double result = this.FinalGradeAverage();
            System.out.print("Final grade average for " + this.FullName() + ": ");
            System.out.printf("%.2f\n",result);
        }
        catch(ArithmeticException e)
        {
            System.out.println(e);
        }
    }
}
