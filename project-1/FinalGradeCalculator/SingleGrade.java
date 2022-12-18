package FinalGradeCalculator;

public class SingleGrade implements Grade
{
    private TestItem test;
    private Student student;
    private double value;

    public SingleGrade(TestItem inputTest, Student inputStudent, double inputValue)
    {
        this.test = inputTest;
        this.student = inputStudent;
        this.value = inputValue;
    }

    public void ChangeGrade(double newValue)
    {
        this.value = newValue;
    }

    public double GradeValue()
    {
        return this.value;
    }

    public String StudentName()
    {
        return this.student.FullName();
    }

    public String TestName()
    {
        return this.test.Name();
    }

    public Subject Subject()
    {
        return this.test.TestSubject();
    }

    public int Weight()
    {
        return this.test.TestWeight();
    }
}
