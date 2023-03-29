#include <iostream>
using namespace std;

/*
* ���ú���ģ���װһ�����������ԶԲ�ͬ�������������������
* �Ӵ�С��ѡ������
* �ֱ�����char�����int������в���
*/

template <typename T>
void selectSort(T* array, int length) {
    if (array == NULL)	return;
    for (int i = 0; i < length - 1; i++) {
        int indexMax = i;
        for (int j = i + 1; j < length; j++) {
            if (array[j] > array[indexMax]) {
                indexMax = j;
            }
        }
        if (i != indexMax) {
            T temp = array[i];
            array[i] = array[indexMax];
            array[indexMax] = temp;
        }
    }
}

template <typename T>
void printArray(T* array, int length) {
    if (array == NULL)	return;
    cout << "����Ԫ�ص�ֵΪ��" << endl;
    for (int i = 0; i < length; i++) {
        cout << array[i] << "\t";
    }
    cout << endl;
}

void test01() {
    char chs[] = { 'a','b','c','g','t','s','a','v','c','j','k' };
    int length1 = sizeof(chs) / sizeof(chs[0]);
    int ints[] = { 1,2,5,3,7,432,453,123413,123,423,574,123,3,5 };
    int length2 = sizeof(ints) / sizeof(ints[0]);
    selectSort(chs, length1);
    printArray(chs, length1);
    selectSort(ints, length2);
    printArray(ints, length2);
}

int main() {

    test01();

    return 0;
}