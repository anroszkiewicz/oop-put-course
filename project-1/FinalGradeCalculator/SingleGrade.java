package FinalGradeCalculator;

public class SingleGrade 
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
}
