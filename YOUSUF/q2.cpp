#include <iostream>
#include <vector>

using namespace std;

class Course
{
private:
    string name;
    string code;
    int creditHours;

public:
    Course(string courseName, string courseCode, int creditHrs)
    {
        name = courseName;
        code = courseCode;
        creditHours = creditHrs;
    }

    void setCourseInfo(string courseName, string courseCode, int creditHrs)
    {
        name = courseName;
        code = courseCode;
        creditHours = creditHrs;
    }

    string getCourseName()
    {
        return name;
    }

    void printCourseInfo()
    {
        cout << "Course Name: " << name << endl;
        cout << "Course Code: " << code << endl;
        cout << "Credit Hours: " << creditHours << endl;
    }

    int showCreditHours()
    {
        return creditHours;
    }

    string showCourseCode()
    {
        return code;
    }
};

class Student
{
private:
    int ID;
    string name;
    int numCourses;
    vector<string> courseNames;
    vector<double> grades;
    bool feesPaid;

public:
    Student(int studentID, string studentName, int coursesEnrolled, bool paidFees)
    {
        ID = studentID;
        name = studentName;
        numCourses = coursesEnrolled;
        feesPaid = paidFees;
    }

    void setStudentInfo(int studentID, string studentName, int coursesEnrolled, bool paidFees)
    {
        ID = studentID;
        name = studentName;
        numCourses = coursesEnrolled;
        feesPaid = paidFees;
    }

    void printStudentInfo()
    {
        cout << "Student ID: " << ID << endl;
        cout << "Student Name: " << name << endl;
        cout << "Number of Courses Enrolled: " << numCourses << endl;
        cout << "Courses Enrolled: " << endl;
        for (int i = 0; i < numCourses; i++)
        {
            cout << courseNames[i] << ": " << grades[i] << endl;
        }
        cout << "Fees Paid: " << feesPaid << endl;
    }

    int calculateCreditHours()
    {
        int creditHours = 0;
        for (int i = 0; i < numCourses; i++)
        {
            creditHours += 3;
        }
        return creditHours;
    }

    double calculateGPA()
    {
        double totalGrades = 0.0;
        for (int i = 0; i < numCourses; i++)
        {
            totalGrades += grades[i];
        }
        return totalGrades / numCourses;
    }

    double calculateGPAPercentage()
    {
        return calculateGPA() * 20;
    }

    double calculateSemesterFees(double creditHourFees)
    {
        double totalFees = creditHourFees * calculateCreditHours();
        if (!feesPaid)
        {
            totalFees *= 1.05; // Add 5% late payment penalty
        }
        return totalFees;
    }

    void enrollInCourse(Course course, double grade)
    {
        courseNames.push_back(course.getCourseName());
        grades.push_back(grade);
        numCourses++;
    }

    bool hasPaidFees()
    {
        return feesPaid;
    }

    string getName()
    {
        return name;
    }
};

void printGrades(Student student)
{
    if (!student.hasPaidFees())
    {
        cout << "LOCKED GRADES" << endl;
        cout << "Grades for " << student.getName() << " are being held for nonpayment of the Semester fees." << endl;
        double dueAmount = 1000.0;
        double penaltyCharges = 500.0;
        cout << "Due amount: $" << dueAmount << ", Penalty charges: $" << penaltyCharges << endl;
        return;
    }

    student.printStudentInfo();
    return;
}

int main()
{
    Course course1("Object Oriented Programming", "CSCI 1301", 3);
    Course course2("Data Structures and Algorithms", "CSCI 1302", 4);
    Course course3("Database Systems", "CSCI 2301", 3);

    Student student1(1234, "John Doe", 0, false);

    student1.enrollInCourse(course1, 85.5);
    student1.enrollInCourse(course2, 92.0);
    student1.enrollInCourse(course3, 78.5);

    student1.printStudentInfo();

    cout << "\n--------------------------------------------------\n"
         << endl;

    cout << "Credit Hours Taken: " << student1.calculateCreditHours() << endl;

    cout << "GPA: " << student1.calculateGPA() << endl;

    cout << "GPA Percentage: " << student1.calculateGPAPercentage() << "%" << endl;

    double creditHourFees = 500.0;
    double semesterFees = student1.calculateSemesterFees(creditHourFees);
    cout << "Semester Fees: $" << semesterFees << endl;

    printGrades(student1);

    return 0;
}