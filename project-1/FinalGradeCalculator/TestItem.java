package FinalGradeCalculator;

public class TestItem 
{
    private String name;
    private Subject subject;
    private int weight;
    private SingleGrade[] grades;

    public TestItem(String inputName, Subject inputSubject, int inputWeight)
    {
        this.name=inputName;
        this.subject=inputSubject;
        this.weight=inputWeight;
    }

    /*public double TestAverage()
    {
        double sum=0;
        for(int i=0; i<grades.length(); i++) sum+=grades.value[i];
        double result=sum/grades.length(); //throw exception if grades is empty!
        return result;
    }*/
}
