//#include <iostream>
//using namespace std;
//
////函数常见样式
////1、无参无返
//
//void test01()
//{
//	cout << "this is test01" << endl;
//}
//
////2、有参无返
//
//void test02(int a)
//{
//	cout << "this is test02" << endl;
//	cout << "a=" << a << endl;
//}
//
////3、无参有返
//
//int test03()
//{
//	cout << "this is test03" << endl;
//	return 10;
//}
//
////4、有参有返
//int test04(int a,int b)
//{
//	cout << "this is test04" << endl;
//	int sum = a + b;
//	return sum;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	//当我们做值传递的时候，函数形参发生改变，并不会影响实参
//	swap(a, b);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	system("pause");
//
//	return 0;
//}