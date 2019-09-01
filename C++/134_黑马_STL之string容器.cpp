#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector> //�����ڵ������������
#include<algorithm>
using namespace std;

/*

3.1.2.1 string ���캯��
string();//����һ���յ��ַ��� ����: string str;
string(const string& str);//ʹ��һ��string�����ʼ����һ��string����
string(const char* s);//ʹ���ַ���s��ʼ��
string(int n, char c);//ʹ��n���ַ�c��ʼ��

3.1.2.2 string������ֵ����
string& operator=(const char* s);//char*�����ַ��� ��ֵ����ǰ���ַ���
string& operator=(const string &s);//���ַ���s������ǰ���ַ���
string& operator=(char c);//�ַ���ֵ����ǰ���ַ���
string& assign(const char *s);//���ַ���s������ǰ���ַ���
string& assign(const char *s, int n);//���ַ���s��ǰn���ַ�������ǰ���ַ���
string& assign(const string &s);//���ַ���s������ǰ�ַ���
string& assign(int n, char c);//��n���ַ�c������ǰ�ַ���
string& assign(const string &s, int start, int n);//��s��start��ʼn���ַ���ֵ���ַ���

*/

void test01()
{
	//����һ�����ַ���
	string str1("wang");

	//ʹ��һ��string�����ʼ����һ��string����
	string str2 = str1;

	//ʹ���ַ���s��ʼ��
	string str3 = "wangjunjie";

	//ʹ��n���ַ�c��ʼ��
	string str4(5, 'a');// �൱�� str4 = "aaaa";

	//char*�����ַ��� ��ֵ����ǰ���ַ���
	string  str5 = "wangjunjie";

	//���ַ���s������ǰ���ַ���
	string str6 = str5;

	//�ַ���ֵ����ǰ���ַ���
	//string& operator=(char c);
	char ch = 'a';
	string str7;  //����ֱ���ں��渳ֵ�����Ǵ����ַ������� �ǵ��ù��캯��
	str7 ='a';

	//���ַ���s������ǰ���ַ���
	string str8;
	str8.assign("wang");

	//���ַ���s��ǰn���ַ�������ǰ���ַ���
	string str9;
	str9.assign("wangjunjie", 4);

	//���ַ���s������ǰ�ַ���
	string str10;
	str10.assign(str9);

	//��n���ַ�c������ǰ�ַ���
	string str11;
	str11.assign(10, 'a');  //aaaaaaaaaa 10��a

							//��s��start��ʼn���ַ���ֵ���ַ���
	string str12;
	str12.assign(str11, 0, 5); //�൱�ڸ�str12��ֵstr11��ǰ5���ַ�

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "str3 = " << str3 << endl;
	cout << "str4 = " << str4 << endl;
	cout << "str5 = " << str5 << endl;
	cout << "str6 = " << str6 << endl;
	cout << "str7 = " << str7 << endl;
	cout << "str8 = " << str8 << endl;
	cout << "str9 = " << str9 << endl;
	cout << "str10 = " << str10 << endl;
	cout << "str11 = " << str11 << endl;
	cout << "str12 = " << str12 << endl;

}

/*
3.1.2.3 string��ȡ�ַ�����
char& operator[](int n);//ͨ��[]��ʽȡ�ַ�
char& at(int n);//ͨ��at������ȡ�ַ�
*/
void test02()
{
	string s = "Wnagjunjie";

	//[]��at����[]����Խ�� ֱ�ӹҵ���at����Խ�磬�׳��쳣 out_of_range

	try
	{
		//cout << s[100] << endl;//�����ж�
		cout << s.at(100) << endl; //�׳�out_of_range�쳣
	}
	catch (exception & e)   //exception & e   �� out_of_range �� ...
	{
		cout << e.what() << endl;
	}
}


/*
3.1.2.4 stringƴ�Ӳ���
string& operator+=(const string& str);//����+=������
string& operator+=(const char* str);//����+=������
string& operator+=(const char c);//����+=������
string& append(const char *s);//���ַ���s���ӵ���ǰ�ַ�����β
string& append(const char *s, int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
string& append(const string &s);//ͬoperator+=()
string& append(const string &s, int pos, int n);//���ַ���s�д�pos��ʼ��n���ַ����ӵ���ǰ�ַ�����β
string& append(int n, char c);//�ڵ�ǰ�ַ�����β���n���ַ�c
*/
//ƴ��
void test03()
{
	string s1 = "wangjun";

	//��ӡ����
	cout << "s1: ";
	cout << s1 << endl;
	cout << "---------------------" << endl;

	//string& operator+=(const string& str);//����+=������
	s1 += "jie";

	cout << "s1: ";
	cout << s1 << endl;
	cout << "---------------------" << endl;


	

	//string& operator+=(const char* str);//����+=������
	string s2 = "wang";

	cout << "s2: ";
	cout << s2 << endl;
	cout << "---------------------" << endl;

	s2 += s1;
	cout << "s2: ";
	cout << s2 << endl;
	cout << "---------------------" << endl;



	//string& operator+=(const char c);//����+=������
	string s3;
	s3 = "wangjunji";
	s3 += "e";

	cout << "s3: ";
	cout << s3 << endl;
	cout << "---------------------" << endl;


	//string& append(const char *s);//���ַ���s���ӵ���ǰ�ַ�����β
	string s4 = "wang";
	s4.append("junjie");
	cout << "s4: ";
	cout << s4 << endl;
	cout << "---------------------" << endl;


	
	//string& append(const char *s, int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
	string s5 = "wang";
	s5.append("junjie1111",7);
	cout << "s5: ";
	cout << s5 << endl;
	cout << "---------------------" << endl;


	
	//string& append(const string &s);//ͬoperator+=()
	string s6 = "wang";
	string s7 = "junjie";
	s6.append(s7);
	cout << "s6: ";
	cout << s6 << endl;
	cout << "---------------------" << endl;

	//string& append(const string &s, int pos, int n);//���ַ���s�д�pos��ʼ��n���ַ����ӵ���ǰ�ַ�����β
	string s9 = "wangjun";
	string s10 = "jie";
	s9.append(s10, 1, 3);
	cout << "s9: ";
	cout << s9 << endl;
	cout << "---------------------" << endl;

	//string& append(int n, char c);//�ڵ�ǰ�ַ�����β���n���ַ�c
	string s11 = "wang";
	s11.append(10, 'a');
	cout << "s11: ";
	cout << s11 << endl;
	cout << "---------------------" << endl;

}



/*
3.1.2.5 string���Һ��滻
int find(const string& str, int pos = 0) const; //����str��һ�γ���λ��,��pos��ʼ����
int find(const char* s, int pos = 0) const;  //����s��һ�γ���λ��,��pos��ʼ����
int find(const char* s, int pos, int n) const;  //��posλ�ò���s��ǰn���ַ���һ��λ��
int find(const char c, int pos = 0) const;  //�����ַ�c��һ�γ���λ��
int rfind(const string& str, int pos = npos) const;//����str���һ��λ��,��pos��ʼ����
int rfind(const char* s, int pos = npos) const;//����s���һ�γ���λ��,��pos��ʼ����
int rfind(const char* s, int pos, int n) const;//��pos����s��ǰn���ַ����һ��λ��
int rfind(const char c, int pos = 0) const; //�����ַ�c���һ�γ���λ��
string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
string& replace(int pos, int n, const char* s); //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
*/

void test04()
{
	//int find(const string& str, int pos = 0) const; //����str��һ�γ���λ��,��pos��ʼ����
	string s1 = "wangjunjie";
	string s2 = "jie";
	int Pos1 = s1.find(s2, 0);//����2 ������ʼ����λ�ã�Ĭ����0
								//find���������
								//rfind ���������

	cout << "pos1 = " << Pos1 << endl;
	cout << "---------------------------\n";

	//int find(const char* s, int pos = 0) const;  //����s��һ�γ���λ��,��pos��ʼ����
	int Pos2 = s1.find("jie", 0);

	cout << "pos2 = " << Pos2 << endl;
	cout << "---------------------------\n";


	//int find(const char* s, int pos, int n) const;  //��posλ�ò���s��ǰn���ַ���һ��λ��
	int Pos3 = s1.find("jiehahahah", 0, 3);

	cout << "pos3 = " << Pos3 << endl;
	cout << "---------------------------\n";

	//int find(const char c, int pos = 0) const;  //�����ַ�c��һ�γ���λ��
	int Pos4 = s1.find('g', 0);

	cout << "pos4 = " << Pos4 << endl;
	cout << "---------------------------\n";

	//int rfind(const char* s, int pos = npos) const;//����s���һ�γ���λ��,��pos��ʼ����
	int Pos5 = s1.rfind("jun", 9); //���Ų���

	cout << "pos5 = " << Pos5 << endl;   
	cout << "---------------------------\n";

	//int rfind(const string& str, int pos = npos) const;//����str���һ��λ��,��pos��ʼ����
	string s3 = "wang";
	int Pos6 = s1.rfind(s3, 0);

	cout << "pos6 = " << Pos6 << endl;
	cout << "---------------------------\n";

	//int rfind(const char* s, int pos, int n) const;//��pos����s��ǰn���ַ����һ��λ��
	string s4 = "wangjunjiejunjie junjie";
	int Pos7 = s4.rfind("jun",22,3);

	cout << "pos7 = " << Pos7 << endl;
	cout << "---------------------------\n";

	//int rfind(const char c, int pos = 0) const; //�����ַ�c���һ�γ���λ��
	string s5 = "e";
	int Pos8 = s5.rfind('e', 0);

	cout << "pos8 = " << Pos8 << endl;
	cout << "---------------------------\n";

	//string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
	string s6 = "wangjun111";
	s6.replace(8, 3, "jie");
	cout << "s6 = " << s6 << endl;
	cout << "---------------------------\n";

	//string& replace(int pos, int n, const char* s); //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
	string s7 = "jie";
	string s8 = "wangjun111";
	s8.replace(8, 3, s7);
	cout << "s8 = " << s8 << endl;
	cout << "---------------------------\n";

}


/*
3.1.2.6 string�Ƚϲ���
compare������ > ʱ���� 1��< ʱ���� -1��==ʱ���� 0��
�Ƚ����ִ�Сд���Ƚ�ʱ�ο��ֵ�˳����Խǰ���ԽС��
��д��A��Сд��aС��
int compare(const string &s) const;//���ַ���s�Ƚ�
int compare(const char *s) const;//���ַ���s�Ƚ�
*/
void test05()
{
	string s1 = "wangjunjie";
	string s2 = "wangjunjie";
	string s3 = "wangjunjiea";
	string s4 = "wangjunji";

	int val1 = s1.compare(s2);    // s1 == s2  ����0
	int val2 = s1.compare(s3);   // s1 < s3    ���� -1
	int val3 = s1.compare(s4);  //s1 > s4      ���� 1

	cout << "val1 = " << val1 << endl;
	cout << "val2 = " << val2 << endl;
	cout << "val3 = " << val3 << endl;
}


/*
3.1.2.7 string�Ӵ�
string substr(int pos = 0, int n = npos) const;//������pos��ʼ��n���ַ���ɵ��ַ���
*/
void test06()
{
	string s1 = "wangjunjie111";
	cout << s1.substr(0, 10) << endl;

	string s2 = "wangjunjie@qq,com";
	int pos = s2.find('@'); // pos = 10;
	cout << "pos = " << pos << endl;
	cout << s2.substr(0, pos) << endl;
}

//���
void Myprint(string s)
{
	cout << s;
}
void test07()
{
	string str = "www.itcast.com.cn";

	vector<string>v;

	// www.itcast.com.cn  ��ҪС�����ŵ�v��
	int pos = -1;
	int start = 0;
	while (true)
	{
		pos = str.find('.', start);
		if (pos == -1)
		{
			string subS = str.substr(start, str.size() - start);
			v.push_back(subS);
			break;
		}

		string subS = str.substr(start, pos - start);

		v.push_back(subS);

		start = pos + 1;
	}

	for_each(v.begin(), v.end(), Myprint);


}


/*
3.1.2.8 string�����ɾ������
string& insert(int pos, const char* s); //�����ַ���
string& insert(int pos, const string& str); //�����ַ���
string& insert(int pos, int n, char c);//��ָ��λ�ò���n���ַ�c
string& erase(int pos, int n = npos);//ɾ����Pos��ʼ��n���ַ�
*/

void test08()
{
	//string& insert(int pos, const char* s); //�����ַ���
	string s1 = "wang";
	s1.insert(4, "jun");
	cout << s1 << endl;
	cout << "-----------------------\n";


	//string& insert(int pos, const string& str); //�����ַ���
	string s2 = "jie";
	s1.insert(7, s2);
	cout << s1 << endl;
	cout << "-----------------------\n";


	//string& insert(int pos, int n, char c);//��ָ��λ�ò���n���ַ�c
	s1.insert(0, 5, 'M');
	cout << s1 << endl;
	cout << "-----------------------\n";

	//string& erase(int pos, int n = npos);//ɾ����Pos��ʼ��n���ַ�
	s1.erase(0, 5);
	cout << s1 << endl;
	cout << "-----------------------\n";

}

//string��c-style�ַ���ת��
void test09()
{
	const char * str = "hello";

	//const char * תstring
	string str2 = string(str);

	//string ת  const char * 
	const char * str3 = str2.c_str();

	//string ������ʽתΪ const char *
	//const char * ������ʽתΪ string

}

//�ַ������·����ڴ��
//��ʹ��ԭ�������ÿ��ܻᷢ������

void test10()
{
	string s = "wangjunjie";

	char &a = s[0];
	char &b = s[1];

	a = 'W';
	b = 'A';

	cout << s << endl;
	cout << (int*)s.c_str() << endl; //��ӡ��ַ

	s = "wwwwwwwwwwwwwwwwwwwwwwwww";

	//a��b��������ʹ����
	a = '1';
	b = '2';

	cout << s << endl;
	cout << (int*)s.c_str() << endl;  //��ֵһ���������ַ��� ��ַ������
}

/*
дһ�������������ڲ���string�ַ����е�����Сд��ĸ����Ϊ��д��ĸ��
*/
void test11()
{
	string s1 = "asfeAAfeFFF";

	for (int i = 0; i < s1.size();i++)
	{
		//Сдת��д
		s1[i] = toupper(s1[i]);

		//��дתСд
		//s1[i] = tolower(s1[i]);
	}
	cout << s1 << endl;

}
int main() 
{

	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	//test08();
	//test09();
	//test10();
	test11();

	system("pause");
	return EXIT_SUCCESS;
}
