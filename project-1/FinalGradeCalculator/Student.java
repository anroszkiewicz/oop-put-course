package FinalGradeCalculator;

public class Student 
{
    private String name,surname;
    private int id;

    public Student(String inputName, String inputSurname, int inputId)
    {
        this.name=inputName;
        this.surname=inputSurname;
        this.id=inputId;
    }

    public String FullName()
    {
        return this.name+" "+this.surname;
    }
}
