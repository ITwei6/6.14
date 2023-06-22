#include <iostream>
using namespace std;

//int main()
//{
//	string s0;
//	string s1("hello world");
//	cout << s1 << endl;
//	//如何遍历string对象呢？
//	cout << s1.size() << endl;
//	for (int i = 0; i < s1.size(); i++)
//	{
//		s1[i]++;
//	}
//	
//	s1[0]--;//可以根据下标一样来修改string对象
//	//下标+[]
//	for (int i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i] << endl;;
//	}
//	char s3[] = "hello world";
//	s3[1]++;//*(s3+1)
//	s1[1]++;//s1.operator[](1);
//
//	//迭代器--->指针
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		//写
//		(*it)--;
//		++it;
//	}
//	while (it != s1.end())
//	{
//		//读
//		cout << *it << " ";
//		++it;
//	}
//
//	//范围for--底层就是用迭代器，底层替换为迭代器
//	for (auto& ch : s1)
//		for(char& ch: s1)
//	{
//		ch++;
//	}
//	for (char ch : s1)
//	{
//		cout << ch << " ";
//	}
//	//任何容器都支持迭代器，并且用法是类似的。
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
//	//迭代器跟算法进行配合
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
//			cout << "扩容" << s1.capacity() << endl;
//			old = s1.capacity();
//		}
//	}
//
//
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//	s1.clear();
//	//清理数据，但内存空间还在
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//}

//
//void TestPushBackReserve()
//{
//	string s;
//	s.reserve(100);//提前开辟100大小空间
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
	//开空间
	s1.reserve(100);
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;

	//开空间+填值初始化
	s1.resize(200);
	//s1.resize(200, 'x');
	cout << s1 << endl;
	//当resize在改变元素个数时，如果元素的个数增多，可能会改变
	//底层容量的大小，如果是将元素个数减少。底层空间总大小不变
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;

	s1.resize(20);
	cout << s1.size() << endl;//这个数据大小改变
	cout << s1.capacity() << endl;//但容量不会改变
}

int main()
{
	try {
		string s1("hello world");
		s1.at(0) = 'x';//在某个位置修改
		cout << s1 << endl;
		s1[0] = 'h';
		cout << s1 << endl;
		//s1[15];//如果越界非法访问了，这样会assert警告的。
		///暴力处理
		s1.at(15);//温和的错误处理
	}//会抛异常
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
}
int main()
{
	string s1("hello world");
	//s1.append("ssssss");//往后面追加字符串
	//cout << s1 << endl;
	////将原来的字符改成现在的字符？
	//s1.assign("111111");
	//cout << s1 << endl;
	//往头部插入10个’x
	s1.insert(0, 10, 'x');
	cout << s1 << endl;
	//从第五个位置插入world
	s1.insert(5, "world");
	cout << s1 << endl;

	//insert(位置，个数，字符)；
	//insert(位置，字符串)
	s1.insert(0, 10, 'x');
	//从第十个位置插入10个y
	s1.insert(s1.begin() + 10, 10, 'y');
	cout << s1 << endl;
}
int main()
{
	string s1("hello world");
	s1.erase(5, 1);
	//从第个位置删除1个字符
	cout << s1 << endl;
	//从第五个位置往后全部删除
	//erase(位置，n个字符=nps缺省值很大的数

	s1.erase(5);
	cout << s1 << endl;

	string s2("hello world");
	//s2.erase(0, 1);//相当于头删了
	//cout << s2 << endl;
	s2.erase(s2.begin());
	//删除这个迭代器位置上的字符
	cout << s2 << endl;

  
}
//int main()
//{
//	//将world替换成xxxxxxxxxxxx
//	string s1("hello world hello bit");
//	s1.replace(6, 5, "xxxxxxxxxxxxxxxxxxx");
//	//replace(位置，替换的个数，替换成的字符串)
//	s1.replace(6, 20, "666");
//	cout << s1 << endl;
//
//	//将s2中所以空格全部替换成20%
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
//	//适用于一些C的一些接口函数配合
//	string filename = "test.cpp";
//	filename += ".zip";
//	FILE* fout = fopen(filename.c_str(), "r");//
//	//调用这个函数必须要C的字符类型
//}