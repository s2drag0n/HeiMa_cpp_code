#include <iostream>
#include <string>
#include <list>
using namespace std;

class Person {
private:
    string name;
    int age;
    int height;
public:
    Person(string name, int age, int height) {
        this->name = name;
        this->age = age;
        this->height = height;
    }
    string getName() const {
        return this->name;
    }
    int getAge() const {
        return this->age;
    }
    int getHeight() const {
        return this->height;
    }
};

/*
bool ageCompare(Person& p1, Person& p2) {
    return p1.getAge() < p2.getAge();
}

bool heightCompare(Person& p1, Person& p2) {
    return p1.getHeight() > p2.getHeight();
}
*/

bool personCompare(Person& p1, Person& p2) {
    if (p1.getAge() == p2.getAge()) {
        return p1.getHeight() > p2.getHeight();
    }
    return p1.getAge() < p2.getAge();
}

void mySort(list<Person>& personList) {
    //personList.sort(heightCompare);
    //personList.sort(ageCompare);
    personList.sort(personCompare);
}

void myPrint(list<Person>& personList) {
    for (list<Person>::iterator it = personList.begin(); it != personList.end(); ++it) {
        cout << "name：" << it->getName() << "\t" <<
            "age：" << it->getAge() << "\t" <<
            "height：" << it->getHeight() << "\t" << endl;
    }
}

void test01() {

    Person p1("宋子龙", 22, 174);
    Person p2("丁彦化", 22, 175);
    Person p3("李世辰", 22, 169);
    Person p4("李汪才", 21, 183);
    Person p5("黄腾", 23, 186);

    list<Person> personList;
    personList.push_back(p1);
    personList.push_back(p2);
    personList.push_back(p3);
    personList.push_back(p4);
    personList.push_back(p5);

    mySort(personList);

    myPrint(personList);
}

int main() {

    test01();

    return 0;
}