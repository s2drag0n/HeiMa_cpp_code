#include <iostream>
#include <string>
using namespace std;

/*
* deque������˫�����飬������ͷ�˽��в����ɾ��
* 
* deque��vector������
*   1.vector����ͷ����ɾ���������Ч�ʺܵ�
*   2.vector����Ԫ�������deque����
* 
* deque�ڲ�����ԭ��
* deque�ڲ��и��п�����ά����ÿ�λ������е����ݣ��������д����ʵ����
* �п�����ά������ÿ�λ������ĵ�ַ��ʹ��ʹ��dequeʱ��ʹ��һ�������Ŀռ�
* 
* deque֧���������
* 
* deque���캯��ͬvector
*   �޲ι���
*	���乹��deque<int> d2(d1.begin(0, d1.end());
*	n��elem����
*	��������
* 
* deque��ֵ����ͬvector
*   1.ʹ�����ص�=
*	2.ʹ��assign(beg, end)��[beg,end)�����е����ݸ�ֵ������
*	3.assign(n, elem��
* 
* deque��С����
*   empty()
*   size()
*   resize(num)         �����Ĭ��ֵ���
*   resize(num, elem)   �����elem���
* 
* deque�����ɾ��
*   push_back(elem)
*   push_front(elem)
*   pop_back()
*   pop_front()
*   insert(pos, elem)
*   insert(pos, n, elem)
*   insert(pos, beg, end) ������һ��deque��[beg, end)������
*   clear()
*   erase(beg, end)         ������һ�����ݵ�λ��
*   erase(pos)              ������һ�����ݵ�λ��
* 
* deque���ݴ�ȡ
*   at(int idx)
*   []
*   front()
*   back()
* 
* �������
* sort(iterator beg, iterator end)
* �����㷨����������deque���ڲ�������Ĭ�ϴ�С����
* ����֧��������ʵĵ�������������ʹ��sort()������vector
*/