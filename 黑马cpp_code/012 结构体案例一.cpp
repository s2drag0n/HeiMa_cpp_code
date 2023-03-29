#include <iostream>
using namespace std;
#include <string>

/*
* 结构体案例1
* 学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下设计学生和老师的结构体，
* 在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员学生的成员有姓名、考试分数，
* 创建数组存放3名老师，通过函数给每个老师及所带的学生赋值最终打印出老师数据以及老师所带的学生数据。
*/

struct Student {
	string name;
	int score;
};

struct Teacher {
	string name;
	struct Student students[2];
};

void getTeachers( struct Teacher* p, int num_teacher, int num_students) {
	for (int i = 0; i < num_teacher; i++) {
		cout << "teacher " << i + 1 << " name: " << p->name << endl;
		for (int j = 0; j < num_students; j++) {
			cout << "student " << j + 1 << " name: " << p->students->name << endl;
			cout << "student " << j + 1 << " score: " << p->students->score << endl;
			struct Student* q = p->students;
			q++;
		}
		p++;
	}
}

void setTeachers( struct Teacher* p, int num_teacher, int num_students) {
	for (int i = 0; i < num_teacher; i++) {
		cout << "teacher " << i + 1 << " name: " << endl;
		cin >> p->name;
		for (int j = 0; j < num_students; j++) {
			cout << "student " << j + 1 << " name: " << endl;
			cin >> p->students->name;
			cout << "student " << j + 1 << " score: " << endl;
			cin >> p->students->score;
			struct Student* q = p->students;
			q++;
		}
		p++;
	}
}

int main() {

	struct Teacher Teachers[2];
	int num_teacher = sizeof(Teachers) / sizeof(Teachers[0]);
	int num_student = sizeof(Teachers[0].students) / sizeof(Teachers[0].students[0]);

	setTeachers(Teachers, num_teacher, num_student);
	getTeachers(Teachers, num_teacher, num_student);

	return 0;
}