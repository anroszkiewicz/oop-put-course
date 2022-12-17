package FinalGradeCalculator;

public class Subject
{
    private String name;
    Student[] students;

    public Subject(String inputName, Student[] students)
    {
        this.name = inputName;
        this.students = students;
    }

    public void StudentList()
    {
        for(Student student: this.students)
        {
            System.out.println(student.FullName());
        }
    }

    public int classSize()
    {
        return this.students.length;
    }
}