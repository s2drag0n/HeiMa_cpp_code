

/*
* set/multiset����ʽ�������ײ��Ƕ�����ʵ��
* 
* ����Ԫ�ز���ʱ���Զ���������
* 
* set��multiset����
*   set����������ظ���Ԫ�أ�����multiset����
*   set�������ݵ�ͬʱ�᷵�ؽ������ʾ�Ƿ�ɹ���
*   ����ֵΪpair<set<type>::iterator, bool> ret = s.insert(elem);
*   ret.secondδ�����Ƿ�ɹ��ı�ʶ
*   multiset����������
* 
* ���캯����Ĭ�Ϲ��졢��������
* 
* ��ֵ������=ֱ�Ӹ�ֵ
* 
* ��������ֻ��insert()
* 
* size()
* empty()
* swap()
* 
* insert(0
* clear()
* erase(pos)
* erase(beg, end)
* erase(elem)
* 
* ���Һ�ͳ��
* find(key)�����򷵻ص��������������򷵻�set.end();
* count(key)
* 
* pair���鴴�����ɶԳ��ֵ����ݣ�����ʹ�ö��鷵����������
* pair<type, type> p(value1, value2);
* pair<type, type> p = make_pair(value1, value2);
* p.first   p.second
* 
* set��������Ĭ�ϴ�С����(�����㣺���÷º���(����С���ţ�)
*   �����������������޸�������򣺴�������ʱ��Ҫ��������ʽ
*       set<int, myCompare> s1;
*       class myCompare{
*       public:
*           bool operator()(int v1, int v2) {
*               return v1 < v2;
*           }
*       }
*   �Զ���������������Ҫָ��Ĭ���������ʹ�÷º���
*/