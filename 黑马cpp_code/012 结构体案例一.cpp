#include <iostream>
using namespace std;
#include <string>

/*
* �ṹ�尸��1
* ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ�������������ѧ������ʦ�Ľṹ�壬
* ����ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Աѧ���ĳ�Ա�����������Է�����
* ����������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�
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