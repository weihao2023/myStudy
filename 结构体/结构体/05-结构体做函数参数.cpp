//#include<iostream>
//using namespace std;
//#include <string>
//
////����ѧ���ṹ��
//struct student
//{
//	string name;	//����
//	int age;	//����
//	int score;	//����
//};
//
////��ӡѧ����Ϣ�ĺ���
////1��ֵ����		ʹ�� . ����
//void printStudent1(struct student s)
//{
//	cout << "�Ӻ����� ������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;
//}
//
////2����ַ����		ʹ��-> ����
//void printStudent2(struct student *p)	//��ָ����յ�ַ
//{
//	cout << "�Ӻ���2�� ������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
//}
//
//
//int main()
//{
//	//�ṹ������������
//	//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ
//
//	//�����ṹ�����
//	struct student s;
//	s.name = "����";
//	s.age = 18;
//	s.score = 85;
//
//	//printStudent1(s);
//	printStudent2(& s);	//��ַ����
//	cout << "main�����д�ӡ ������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;
//	
//	system("pause");
//	return 0;
//
//}