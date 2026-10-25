using System;
class Student
{
    public int RollNo { get; set; }
    public string Name { get; set; }
    public Student(int r, string n)
    {
        RollNo = r;
        Name = n;
    }
    public void Display()
    {
        Console.WriteLine("Roll No: " + RollNo + ", Name: " + Name);
    }
}
class Program
{
    static void Main()
    {
        Student s1 = new Student(178, "Praveen");
        Student s2 = new Student(226, "Anil");
        s1.Display();
        s2.Display();
    }
}