package FinalGradeCalculator;

public interface Grade 
{
    public void ChangeGrade(double newValue);
    public double GradeValue();
    public String StudentName();
    public String TestName();
    public Subject Subject();
    public int Weight();
}
