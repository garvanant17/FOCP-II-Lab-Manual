//Q4
#include <iostream>
using namespace std;
class Employee{
    protected:
string employee_name;

Employee(string employee_name){
this -> employee_name = employee_name;
}

};

class Department{
    protected:
string department_name;

Department(string dep){
    department_name = dep;
}
};
class Manager: public Employee, public Department{
    public:
    Manager(string emp, string dept):Employee(emp), Department(dept){}
    void display(){
        cout<<"employee name: "<<employee_name<<endl;
        cout<<"employee department: "<<department_name;
    }
};
