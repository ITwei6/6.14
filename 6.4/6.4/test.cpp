#include <iostream>
using namespace std;

//int main()
//{
//	string s0;
//	string s1("hello world");
//	cout << s1 << endl;
//	//��α���string�����أ�
//	cout << s1.size() << endl;
//	for (int i = 0; i < s1.size(); i++)
//	{
//		s1[i]++;
//	}
//	
//	s1[0]--;//���Ը����±�һ�����޸�string����
//	//�±�+[]
//	for (int i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i] << endl;;
//	}
//	char s3[] = "hello world";
//	s3[1]++;//*(s3+1)
//	s1[1]++;//s1.operator[](1);
//
//	//������--->ָ��
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		//д
//		(*it)--;
//		++it;
//	}
//	while (it != s1.end())
//	{
//		//��
//		cout << *it << " ";
//		++it;
//	}
//
//	//��Χfor--�ײ�����õ��������ײ��滻Ϊ������
//	for (auto& ch : s1)
//		for(char& ch: s1)
//	{
//		ch++;
//	}
//	for (char ch : s1)
//	{
//		cout << ch << " ";
//	}
//	//�κ�������֧�ֵ������������÷������Ƶġ�
//	/*vector<int> v;
//	vector<int>::iterator vit = v.begin();
//	while (vit != v.end())
//	{
//		cout << *vit << endl;
//		++vit;
//	}
//	list<int> lit;
//	list<int>::iterator lit = lit.beign();
//	while (lit != lit.end())
//	{
//		cout << (*lit) << endl;
//		++lit;
//	}*/
//	//���������㷨�������
//	reverse(s1.begin(), s1.end());
//	sort(s1.beign(), s1.end());
//}
//
//void Func(const string& s)
//{
//	string::const_iterator it = s.begin();
//	while (it !=s.end())
//	{
//		cout << *it << endl;
//		++it;
//	}
//	string::const_reverse_iterator rit = s.rbegin();
//	auto rit = s.rbegin();
//	while (rit != s.rend())
//	{
//		cout << *rit << endl;
//		++rit;
//	}
//}
//int main()
//{
//	string s1("hello world");
//	string::const_reverse_iterator rit = s1.rbegin();
//	auto rit = s1.rbegin();
//	while (rit != s1.rend())
//	{
//		//(*rit) += 3;
//		cout << *rit << endl;
//		++rit;
//	}
//	cout << endl;
//	cout << s1 << endl;
//	Func(s1);
//}
//int main()
//{
//	string s1("hello woree");
//	cout << s1.size() << endl;
//	cout << s1.length() << endl;
//	cout << s1.max_size() << endl;
//	cout << s1.capacity() << endl;
//
//	size_t old = s1.capacity();
//	for (size_t i = 0; i < 100; i++)
//	{
//		s1 += 'x';
//		if (old != s1.capacity())
//		{
//			cout << "����" << s1.capacity() << endl;
//			old = s1.capacity();
//		}
//	}
//
//
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//	s1.clear();
//	//�������ݣ����ڴ�ռ仹��
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//}

//
//void TestPushBackReserve()
//{
//	string s;
//	s.reserve(100);//��ǰ����100��С�ռ�
//	size_t sz = s.capacity();
//	cout << "now capacity:" << sz << '\n';
//
//	cout << "making a grow:'\n";
//	for (int i = 0; i < 100; i++)
//	{
//		s.push_back('c');
//		if (sz != s.capacity())
//		cout << "capacity changed:" << sz << '\n';
//	}
//	
//	cout << "later capacity:" << sz << '\n';
//	s.reserve(10);
//	cout << s.capacity() << endl;
//}
//int main()
//{
//	TestPushBackReserve();
//}

int main()
{
	string s1("hello world");
	//���ռ�
	s1.reserve(100);
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;

	//���ռ�+��ֵ��ʼ��
	s1.resize(200);
	//s1.resize(200, 'x');
	cout << s1 << endl;
	//��resize�ڸı�Ԫ�ظ���ʱ�����Ԫ�صĸ������࣬���ܻ�ı�
	//�ײ������Ĵ�С������ǽ�Ԫ�ظ������١��ײ�ռ��ܴ�С����
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;

	s1.resize(20);
	cout << s1.size() << endl;//������ݴ�С�ı�
	cout << s1.capacity() << endl;//����������ı�
}

int main()
{
	try {
		string s1("hello world");
		s1.at(0) = 'x';//��ĳ��λ���޸�
		cout << s1 << endl;
		s1[0] = 'h';
		cout << s1 << endl;
		//s1[15];//���Խ��Ƿ������ˣ�������assert����ġ�
		///��������
		s1.at(15);//�º͵Ĵ�����
	}//�����쳣
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
}
int main()
{
	string s1("hello world");
	//s1.append("ssssss");//������׷���ַ���
	//cout << s1 << endl;
	////��ԭ�����ַ��ĳ����ڵ��ַ���
	//s1.assign("111111");
	//cout << s1 << endl;
	//��ͷ������10����x
	s1.insert(0, 10, 'x');
	cout << s1 << endl;
	//�ӵ����λ�ò���world
	s1.insert(5, "world");
	cout << s1 << endl;

	//insert(λ�ã��������ַ�)��
	//insert(λ�ã��ַ���)
	s1.insert(0, 10, 'x');
	//�ӵ�ʮ��λ�ò���10��y
	s1.insert(s1.begin() + 10, 10, 'y');
	cout << s1 << endl;
}
int main()
{
	string s1("hello world");
	s1.erase(5, 1);
	//�ӵڸ�λ��ɾ��1���ַ�
	cout << s1 << endl;
	//�ӵ����λ������ȫ��ɾ��
	//erase(λ�ã�n���ַ�=npsȱʡֵ�ܴ����

	s1.erase(5);
	cout << s1 << endl;

	string s2("hello world");
	//s2.erase(0, 1);//�൱��ͷɾ��
	//cout << s2 << endl;
	s2.erase(s2.begin());
	//ɾ�����������λ���ϵ��ַ�
	cout << s2 << endl;

  
}
//int main()
//{
//	//��world�滻��xxxxxxxxxxxx
//	string s1("hello world hello bit");
//	s1.replace(6, 5, "xxxxxxxxxxxxxxxxxxx");
//	//replace(λ�ã��滻�ĸ������滻�ɵ��ַ���)
//	s1.replace(6, 20, "666");
//	cout << s1 << endl;
//
//	//��s2�����Կո�ȫ���滻��20%
//	string s2 = "hello world hello bit";
//	string s3;
//	for (auto ch : s2)
//	{
//		if (ch != ' ')
//		{
//			s3 += ch;
//		}
//		else
//		{
//			s3 += "20%";
//		}
//	}
//	s2 = s3;
//	cout << s2 << endl;
//	cout << s2.c_str() << endl;
//
//	//������һЩC��һЩ�ӿں������
//	string filename = "test.cpp";
//	filename += ".zip";
//	FILE* fout = fopen(filename.c_str(), "r");//
//	//���������������ҪC���ַ�����
//}