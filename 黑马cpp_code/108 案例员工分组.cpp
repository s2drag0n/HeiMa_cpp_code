#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

vector<string> v = { "����","����","����","Ӫ��","����" };

//Ա����
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
        cout << v[i] << "���ŵ���Ա��ϢΪ��" << endl;
        size_t num = employeeMap.count(v[i]);
        if (num == 0)  cout << "�ò������޹�����Ա��" << endl;
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

    

    Employee e0("������", 50000, 0);
    Employee e1("���廯", 5500, 1);
    Employee e2("������", 3000, 2);
    Employee e3("������", 1200, 2);
    Employee e4("����", 3002, 2);
    Employee e5("�ź���", 900, 3);
    Employee e6("��һ��", 6555, 4);
    Employee e7("������", 3666, 3);
    Employee e8("yyy", 5555, 4);
    Employee e9("�涰��", 1265, 1);
    Employee e10("������", 5653, 1);

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