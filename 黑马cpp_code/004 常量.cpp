#include <iostream>
using namespace std;

/*
	���ã���¼�����в��ɸ��ĵ�����
	���ֶ��巽ʽ
	1��#define �곣����#define ������ ����ֵ	ͨ�����ļ��Ϸ�����
	2��const���εı�����const �������� ������ = ����ֵ	ͨ���ڱ�������֮ǰ�ӹؼ���const�����θñ���Ϊ����
*/

#define day_per_week 7

int main() {

	cout << "һ����" << day_per_week << "��" << endl;

	const int month_per_year = 12;

	cout << "һ����" << month_per_year << "��" << endl;

	system("pause");

	return 0;
}