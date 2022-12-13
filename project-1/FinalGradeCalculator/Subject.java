package FinalGradeCalculator;
import java.util.Arrays;

public class Subject
{
    private String name;
    Student[] students;

    public Subject(String inputName, Student[] students)
    {
        this.name = inputName;
        this.students = students;
    }

    void StudentList()
    {
        for(Student s: this.students)
        {
            System.out.println(s.FullName());
        }
    }
}