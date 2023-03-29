#include <iostream>
using namespace std;
#include <string>
/*
* 1添加联系人：姓名、性别、年龄、联系电话、家庭住址
* 2显示联系人
* 3删除联系人
* 4查找联系人
* 5修改联系人
* 6清空联系人
* 0退出通讯录
*/

struct Person {
	string name;
	bool gender = -1;// 女0男1
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
	cout << "可用功能" << endl
		<< "==========   1 添加联系人   ==========" << endl
		<< "==========   2 显示联系人   ==========" << endl
		<< "==========   3 删除联系人   ==========" << endl
		<< "==========   4 查找联系人   ==========" << endl
		<< "==========   5 修改联系人   ==========" << endl
		<< "==========   6 清空联系人   ==========" << endl
		<< "==========   0 退出通讯录   ==========" << endl;
	while (demand != 0) {
		
		cout << "请输入您要选择的功能（数字）：" << endl;

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
	cout << "您已退出通讯录" << endl;
	return 0;
}

void add_person(struct AddressBook* book) {
	if (book->person_num == 1000) cout << "抱歉，通讯录已满！！！" << endl;
	else {
		string name;
		bool gender;// 女0男1
		int age;
		string phonenum;
		string address;

		cout << "请输入姓名：" << endl;
		cin >> name;
		cout << "请输入性别（女0男1）：" << endl;
		cin >> gender;
		cout << "请输入年龄：" << endl;
		cin >> age;
		cout << "请输入联系方式：" << endl;
		cin >> phonenum;
		cout << "请输入住址：" << endl;
		cin >> address;

		set_person(&(book->persons[book->person_num]), name, gender, age, phonenum, address);
		book->person_num++;
	}

}

void show_person(const struct AddressBook* book) {
	cout << "当前的联系人有：" << endl;
	cout << "id\t姓名\t性别\t年龄\t联系方式\t住址" << endl;
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
	cout << "请输入你想删除联系人的id:" << endl;
	int id = -1;
	cin >> id;
	if (id < 0 || id >= book->person_num) cout << "此id不存在，请输入正确的id！！！" << endl;
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
	cout << "请输入你要查询联系人的姓名：" << endl;
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
	cout << "This name is not recorded in this telephone book！！！" << endl;
}

void modify_person(struct AddressBook* book) {
	cout << "请输入你要修改的联系人的姓名" << endl;
	string name;
	cin >> name;
	for (int i = 0; i < book->person_num; i++) {
		if (book->persons[i].name == name) {
			string name;
			bool gender;// 女0男1
			int age;
			string phonenum;
			string address;
			cout << "请输入姓名：" << endl;
			cin >> name;
			cout << "请输入性别（女0男1）：" << endl;
			cin >> gender;
			cout << "请输入年龄：" << endl;
			cin >> age;
			cout << "请输入联系方式：" << endl;
			cin >> phonenum;
			cout << "请输入住址：" << endl;
			cin >> address;
			set_person(&(book->persons[i]), name, gender, age, phonenum, address);
			return;
		}
	}
	cout << "This name is not recorded in this telephone book！！！" << endl;
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