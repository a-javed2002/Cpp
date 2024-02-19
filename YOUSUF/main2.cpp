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
    // Constructor
    Course(string courseName, string courseCode, int creditHrs)
    {
        name = courseName;
        code = courseCode;
        creditHours = creditHrs;
    }

    // Set the course information
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

    // Print the course information
    void printCourseInfo()
    {
        cout << "Course Name: " << name << endl;
        cout << "Course Code: " << code << endl;
        cout << "Credit Hours: " << creditHours << endl;
    }

    // Show the credit hours
    int showCreditHours()
    {
        return creditHours;
    }

    // Show the course code
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
    // Constructor
    Student(int studentID, string studentName, int coursesEnrolled, bool paidFees)
    {
        ID = studentID;
        name = studentName;
        numCourses = coursesEnrolled;
        feesPaid = paidFees;
    }

    // Set the student information
    void setStudentInfo(int studentID, string studentName, int coursesEnrolled, bool paidFees)
    {
        ID = studentID;
        name = studentName;
        numCourses = coursesEnrolled;
        feesPaid = paidFees;
    }

    // Print the student information
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

    // Calculate the number of credit hours taken
    int calculateCreditHours()
    {
        int creditHours = 0;
        for (int i = 0; i < numCourses; i++)
        {
            // Assuming each course has 3 credit hours
            creditHours += 3;
        }
        return creditHours;
    }

    // Calculate the GPA
    double calculateGPA()
    {
        double totalGrades = 0.0;
        for (int i = 0; i < numCourses; i++)
        {
            totalGrades += grades[i];
        }
        return totalGrades / numCourses;
    }

    // Calculate the GPA percentage
    double calculateGPAPercentage()
    {
        return calculateGPA() * 20;
    }

    // Calculate the semester fees
    double calculateSemesterFees(double creditHourFees)
    {
        double totalFees = creditHourFees * calculateCreditHours();
        if (!feesPaid)
        {
            totalFees *= 1.05; // Add 5% late payment penalty
        }
        return totalFees;
    }

    // Enroll in a course
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

// void printResult(bool isEnrolled, bool hasPaidFees, double grade1, double grade2, double grade3)
// {
//     if (!isEnrolled)
//     {
//         cout << "Student is not enrolled in this course.\n";
//         return;
//     }
//     if (hasPaidFees)
//     {
//         double totalGrade = grade1 + grade2 + grade3;
//         double GPA = totalGrade / 3.0;
//         cout << "Grades:\n";
//         cout << "Grade 1: " << grade1 << endl;
//         cout << "Grade 2: " << grade2 << endl;
//         cout << "Grade 3: " << grade3 << endl;
//         cout << "GPA: " << GPA << endl;
//     }
//     else
//     {
//         cout << "LOCKED GRADES\n";
//         double dueAmount = 5000.0; // amount due for semester fees
//         double penalty = 1000.0;   // penalty for late payment
//         cout << "Grades are being held for nonpayment of Semester fees.\n";
//         cout << "Due amount: " << dueAmount << endl;
//         cout << "Penalty charges: " << penalty << endl;
//         cout << "Total amount due: " << dueAmount + penalty << endl;
//     }
// }

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
    // Create some Course objects
    Course course1("Object Oriented Programming", "CSCI 1301", 3);
    Course course2("Data Structures and Algorithms", "CSCI 1302", 4);
    Course course3("Database Systems", "CSCI 2301", 3);

    // Create a Student object
    Student student1(1234, "John Doe", 0, false);

    // Enroll in courses
    student1.enrollInCourse(course1, 85.5);
    student1.enrollInCourse(course2, 92.0);
    student1.enrollInCourse(course3, 78.5);

    // Print the student information
    student1.printStudentInfo();

    cout << "\n--------------------------------------------------\n"
         << endl;

    // Calculate the number of credit hours taken
    cout << "Credit Hours Taken: " << student1.calculateCreditHours() << endl;

    // Calculate the GPA
    cout << "GPA: " << student1.calculateGPA() << endl;

    // Calculate the GPA percentage
    cout << "GPA Percentage: " << student1.calculateGPAPercentage() << "%" << endl;

    // Calculate the semester fees
    double creditHourFees = 500.0; // cost per credit hour
    double semesterFees = student1.calculateSemesterFees(creditHourFees);
    cout << "Semester Fees: $" << semesterFees << endl;

    printGrades(student1);

    return 0;
}