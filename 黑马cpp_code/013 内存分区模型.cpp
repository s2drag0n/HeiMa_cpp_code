#include <iostream>
using namespace std;

/*
* 内存分区模型
	* 代码区：存放二进制指令，由操作系统管理
	* 全局区：存放全局变量和静态变量以及常量
	* 栈区：编译器自动分配释放，存放函数参数值，局部变量
	* 堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收
* 代码区：在程序执行之后，生成了exe可执行文件，未执行该程序前分为两个区域
	* 代码区：
		* 存放cpu执行的机器指令；
		* 代码区是共享的，意义在于对于频繁执行的程序，只需要在内存中有一份代码即可；
		* 代码区是只读的，原因是防止程序意外的修改其指令
	* 全局区：
		* 全局变量和静态变量（包括局部）
		* 常量区：字符串常量和带const的全局常量（局部常量不在全局区）
		* 该区域的数据在程序结束后由操作系统释放
	* 栈区：不要返回局部变量的地址，因为自动销毁掉了；形参数据也在栈区
	* 堆区：在C++中使用new在堆区开辟数据delete删除
*/

int main() {

	cout << "HelloWorld" << endl;

	return 0;
}