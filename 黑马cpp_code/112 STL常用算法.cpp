

/*
* STL�����㷨
* �㷨��Ҫͷ�ļ�
*   <algorithm>     STL������ͷ�ļ����Ƚϡ����������ҡ����������ơ��޸ĵ�
*   <numeric>       �����С��ֻ��������������������м���ѧ�����ģ�庯��
*   <function>      ������һЩģ���࣬����������������
* 
* �����㷨
*   for_each        ��������        
*   for_each(iterator beg, iterator end, _fun)  ����_fun��һ����ͨ������ֻ��Ҫ�����������߷º��������������())
*   transform       ����Ԫ�ص���һ��������Ŀ��������Ҫ��ǰresize���ٿռ�
*   transform(iterator beg1, iterator end1, iterator beg2, _func)
* 
* �����㷨
*   find(beg, end, value)           �ҵ����ص��������Ҳ�������end
*   find_id(beg, end, _Pred)        _Pred��������ν��
*   adjacent_find(beg, end)         ���������ظ�Ԫ��,��������Ԫ�صĵ�һ��λ�õ�������û���򷵻�end
*   binary_search(beg, end, value)  ���ֲ��ң��鵽����true������false�������������в�����
*   count(beg, end, value)
*   count_if(beg, end, _Pred) 
* 
* �����㷨
*   sort(beg, end, _Pred)               ����Ĭ�ϴ�С�����������_Pred���˴�����ʹ��ν�ʣ����մ˹���
*   random_shuffle(beg, end)            ϴ��
*   merge(beg1, end1, beg2, end2, dest) �ϲ���������������������˳��һ�£����洢����һ��������
*                                       ����ȫ�����ǵ���������ǰ���������������ݺϲ����������Ŀ�ʼdestλ��
*                                       ��ǰ��Ŀ�����������ڴ�
*   reverse(beg, end)                   ��ת
* 
* �������滻�㷨
*   copy(beg, end, dest)
*   replace(beg, end, oldvalue, newvalue)   �������ھ�Ԫ���滻����Ԫ��
*   replace_if(beg, end, _Pred, newvalue)
*   swap(container c1, container c2)
* 
* ���������㷨������<numeric>
*   accumulate(beg, end, value)         ��������Ԫ���ۼ��ܺͣ�value�ǳ�ʼֵ
*   fill(beg, end, value)               �����������Ԫ�أ���ָ�������滻Ϊvalue
* 
* ���ü����㷨
*   set_intersection(beg1, end1, beg2, end2, dest)        ���������������Ͻ���
*   set_union(beg1, end1, beg2, end2, dest)               ����
*   set_difference(beg1, end1, beg2, end2, dest)          �
*   
*/