#include <string>
using namespace std;
class studentADT
{
    private:
    string studentId, firstName, lastName;
    int years, points;
    double salary;
    double deductions;
    public:
    double getPay();
    double getSalary();
    double setSalary(double);
    double getStudentId();
    double setStudentId(string);
    studentADT();
    ~studentADT();
};