package FinalGradeCalculator;

public class Subject implements SchoolSubject
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
        System.out.println("Showing student list for " + this.name);
        for(Student student: this.students)
        {
            System.out.println(student.FullName());
        }
    }

    public void AssignFinalGrades()
    {
        for(Student student: this.students)
        {
            double gradeAverage = student.SubjectAverage(this);
            int finalGrade = 0;
            if(gradeAverage<1.70) finalGrade=1;
            else if(gradeAverage<2.60) finalGrade=2;
            else if(gradeAverage<3.60) finalGrade=3;
            else if(gradeAverage<4.60) finalGrade=4;
            else if(gradeAverage<5.40) finalGrade=5;
            else finalGrade=6;

            student.finalGrades.add(finalGrade);
        }
    }

    public int classSize()
    {
        return this.students.length;
    }

    public String SubjectName()
    {
        return this.name;
    }
}