#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

vector<string> v = { "人事","安保","保洁","营销","后勤" };

//员工类
class Employee {
public:
    string name;
    int salary;
    int department;
    Employee(string name, int salary, int department) {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }
};

class myCompare {
public:
    bool operator()(const string& d1, const string& d2) const{
        return d1 < d2;
    }
};

void printMultimap(multimap<string, Employee, myCompare>& employeeMap) {
    for (int i = 0; i < 5; ++i) {
        cout << v[i] << "部门的人员信息为：" << endl;
        size_t num = employeeMap.count(v[i]);
        if (num == 0)  cout << "该部门暂无工作人员。" << endl;
        else{
            multimap<string, Employee, myCompare>::iterator iter = employeeMap.find(v[i]);
            for (size_t j = 0; j < num; j++) {
                cout << "\tname=" << iter->second.name << "\tsalary=" << iter->second.salary << endl;
                iter++;
            }
        }
        
    }
}

void test01() {

    

    Employee e0("宋子龙", 50000, 0);
    Employee e1("丁彦化", 5500, 1);
    Employee e2("李世辰", 3000, 2);
    Employee e3("李汪才", 1200, 2);
    Employee e4("黄腾", 3002, 2);
    Employee e5("张恒熙", 900, 3);
    Employee e6("徐一杰", 6555, 4);
    Employee e7("李宇轩", 3666, 3);
    Employee e8("yyy", 5555, 4);
    Employee e9("骆栋辉", 1265, 1);
    Employee e10("王传智", 5653, 1);

    vector<Employee> employees;
    employees.push_back(e0);
    employees.push_back(e1);
    employees.push_back(e2);
    employees.push_back(e3);
    employees.push_back(e4);
    employees.push_back(e5);
    employees.push_back(e6);
    employees.push_back(e7);
    employees.push_back(e8);
    employees.push_back(e9);
    employees.push_back(e10);

    multimap<string, Employee, myCompare> employeeMap;

    for (vector<Employee>::iterator it = employees.begin(); it != employees.end(); ++it) {
        pair< string, Employee> p(v[it->department], *it);
        employeeMap.insert(p);
    }

    printMultimap(employeeMap);
    
}

int main() {
    test01();
    return 0;
}