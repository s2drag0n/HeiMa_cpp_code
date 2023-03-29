#include <iostream>
using namespace std;
#include <string>
/*
* 1�����ϵ�ˣ��������Ա����䡢��ϵ�绰����ͥסַ
* 2��ʾ��ϵ��
* 3ɾ����ϵ��
* 4������ϵ��
* 5�޸���ϵ��
* 6�����ϵ��
* 0�˳�ͨѶ¼
*/

struct Person {
	string name;
	bool gender = -1;// Ů0��1
	int age = -1;
	string phonenum;
	string address;
};

struct AddressBook {
	struct Person persons[1000];
	int person_num = 0;
};

void add_person(struct AddressBook* book);
void show_person(const struct AddressBook* book);
void delete_person(struct AddressBook* book);
void search_person(const struct AddressBook* book);
void modify_person(struct AddressBook* book);
void empty_person(struct AddressBook* book);
void set_person(struct Person* person, string name, bool gender, int age, string phonenum, string address);

int main() {

	struct AddressBook book;

	int demand = -1;
	cout << "���ù���" << endl
		<< "==========   1 �����ϵ��   ==========" << endl
		<< "==========   2 ��ʾ��ϵ��   ==========" << endl
		<< "==========   3 ɾ����ϵ��   ==========" << endl
		<< "==========   4 ������ϵ��   ==========" << endl
		<< "==========   5 �޸���ϵ��   ==========" << endl
		<< "==========   6 �����ϵ��   ==========" << endl
		<< "==========   0 �˳�ͨѶ¼   ==========" << endl;
	while (demand != 0) {
		
		cout << "��������Ҫѡ��Ĺ��ܣ����֣���" << endl;

		cin >> demand;
		switch (demand){
			case 1:add_person(&book); break;
			case 2:show_person(&book); break;
			case 3:delete_person(&book); break;
			case 4:search_person(&book); break;
			case 5:modify_person(&book); break;
			case 6:empty_person(&book); break;
			default: break;
		}
	}
	cout << "�����˳�ͨѶ¼" << endl;
	return 0;
}

void add_person(struct AddressBook* book) {
	if (book->person_num == 1000) cout << "��Ǹ��ͨѶ¼����������" << endl;
	else {
		string name;
		bool gender;// Ů0��1
		int age;
		string phonenum;
		string address;

		cout << "������������" << endl;
		cin >> name;
		cout << "�������Ա�Ů0��1����" << endl;
		cin >> gender;
		cout << "���������䣺" << endl;
		cin >> age;
		cout << "��������ϵ��ʽ��" << endl;
		cin >> phonenum;
		cout << "������סַ��" << endl;
		cin >> address;

		set_person(&(book->persons[book->person_num]), name, gender, age, phonenum, address);
		book->person_num++;
	}

}

void show_person(const struct AddressBook* book) {
	cout << "��ǰ����ϵ���У�" << endl;
	cout << "id\t����\t�Ա�\t����\t��ϵ��ʽ\tסַ" << endl;
	for (int i = 0; i < book->person_num; i++) cout << i
		<< "\t" << book->persons[i].name
		<< "\t" << book->persons[i].gender
		<< "\t" << book->persons[i].age
		<< "\t" << book->persons[i].phonenum
		<< "\t" << book->persons[i].address
		<< endl;
}

void delete_person(struct AddressBook* book) {
	show_person(book);
	cout << "����������ɾ����ϵ�˵�id:" << endl;
	int id = -1;
	cin >> id;
	if (id < 0 || id >= book->person_num) cout << "��id�����ڣ���������ȷ��id������" << endl;
	else {
		for (int i = id; i < book->person_num - 1; i++) {
			set_person(&book->persons[i],
				book->persons[i + 1].name,
				book->persons[i + 1].gender,
				book->persons[i + 1].age,
				book->persons[i + 1].phonenum,
				book->persons[i + 1].address);
		}
	}
	book->person_num--;

}

void search_person(const struct AddressBook* book) {
	cout << "��������Ҫ��ѯ��ϵ�˵�������" << endl;
	string name;
	cin >> name;
	for (int i = 0; i < book->person_num; i++) {
		if (book->persons[i].name == name) {
			cout << i
				<< "\t" << book->persons[i].name
				<< "\t" << book->persons[i].gender
				<< "\t" << book->persons[i].age
				<< "\t" << book->persons[i].phonenum
				<< "\t" << book->persons[i].address
				<< endl;
			return;
		}
	}
	cout << "This name is not recorded in this telephone book������" << endl;
}

void modify_person(struct AddressBook* book) {
	cout << "��������Ҫ�޸ĵ���ϵ�˵�����" << endl;
	string name;
	cin >> name;
	for (int i = 0; i < book->person_num; i++) {
		if (book->persons[i].name == name) {
			string name;
			bool gender;// Ů0��1
			int age;
			string phonenum;
			string address;
			cout << "������������" << endl;
			cin >> name;
			cout << "�������Ա�Ů0��1����" << endl;
			cin >> gender;
			cout << "���������䣺" << endl;
			cin >> age;
			cout << "��������ϵ��ʽ��" << endl;
			cin >> phonenum;
			cout << "������סַ��" << endl;
			cin >> address;
			set_person(&(book->persons[i]), name, gender, age, phonenum, address);
			return;
		}
	}
	cout << "This name is not recorded in this telephone book������" << endl;
}
void empty_person(struct AddressBook* book) {
	book->person_num = 0;
}

void set_person(struct Person* person, string name, bool gender, int age, string phonenum, string address) {
	person->name = name;
	person->gender = gender;
	person->age = age;
	person->phonenum = phonenum;
	person->address = address;
}