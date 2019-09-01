#include "Array.h"


//Ĭ�Ϲ���  ��ʼ������Ϊ100
MyArray::MyArray()
{

	//�����ʹ�С��ֵ
	this->m_Capacity = 100;
	this->m_Size = 0;

	//���ٶ����ռ�
	this->pAddress = new int[100];
}


//�вι���  ����Ϊ��ʼ������
MyArray::MyArray(int capacity)
{

	//�����ʹ�С��ֵ
	this->m_Size = 0;
	this->m_Capacity = capacity;

	//���ٶ����ռ�
	this->pAddress = new int[capacity];

}

//��������  ���
MyArray::MyArray(const MyArray & array)
{

	//�����ʹ�С��ֵ
	this->m_Capacity = array.m_Capacity;
	this->m_Size = array.m_Size;

	//memcpy(this->pAddress, array.pAddress, array.m_Size * sizeof(int));

	//���ٶ����ռ�  ���
	this->pAddress = new int[this->m_Capacity];

	//�����ݿ������¿ռ���
	for (int i = 0;i < this->m_Size;i++)
	{
		this->pAddress[i] = array.pAddress[i];
	}
}

//β��
void MyArray::pushBack(int val)
{
	if (this->m_Size == this->m_Capacity)
	{
		cout << "ջ������" << endl;
		return;
	}

	//��Ԫ�ط��뵽���һ��λ��  �����С+1
	this->pAddress[this->m_Size++] = val;

}

//����λ����������
void MyArray::setDateByPos(int pos, int val)
{
	if (pos < 0 || pos > this->m_Capacity)
	{
		cout << "�������ݵ�λ������" << endl;
		return;
	}
	if (this->pAddress[pos] == NULL)
	{
		//�����λ��ԭ��Ϊ��  �����С+1
		this->m_Size++;
	}
	this->pAddress[pos] = val;
}


//����λ�ò�������
void MyArray::insertDateByPos(int pos, int val)
{
	if (pos < 0 || pos > this->m_Capacity)
	{
		cout << "����λ������" << endl;
		return;
	}

	if (this->m_Size == this->m_Capacity)
	{
		cout << "ջ������" << endl;
		return;
	}

	//������Ԫ�غ���
	for (int i = this->m_Size - 1; i >= pos; i--)
	{
		this->pAddress[i + 1] = this->pAddress[i];
	}

	//�� pos λ���ϲ�������
	this->pAddress[pos] = val;

	//�����С+1
	this->m_Size++;
}


//����λ�û�ȡ����
int  MyArray::getDate(int pos)
{
	if (pos < 0 || pos > this->m_Capacity)
	{
		cout << "Ԫ��λ�����󣡷��� -1" << endl;
		return -1;
	}

	return this->pAddress[pos];
}

//������������
int  MyArray::getCapacity()
{
	return this->m_Capacity;
}

//���������С
int  MyArray::getSize()
{
	return this->m_Size;
}

//����[] �����
int &  MyArray::operator[](int pos)
{
	if (pos < 0 || pos > this->m_Size)
	{

	}
	return this->pAddress[pos];
}

//���� == �����
bool  MyArray::operator==(MyArray & arr)
{
	if (arr.pAddress == NULL)
	{
		return false;
	}

	//�Ƚ������ʹ�С
	if (this->m_Capacity != arr.m_Capacity || this->m_Size != arr.m_Size)
	{
		return false;
	}

	//�Ƚ������е�Ԫ��
	for (int i = 0; i < this->m_Size; i++)
	{
		if (this->pAddress[i] != arr.pAddress[i])
			return false;
	}

	return true;

}

// ���� ��ֵ = ����� ���  
// ǳ��������ֱ��ָ�븳ֵ ���׳��ֶ��������ͷŴ���
void  MyArray::operator=(MyArray & arr)
{
	//����������Ϊ�� ��ֱ�ӷ���
	if (arr.pAddress == NULL)
	{
		cout << "��������Ϊ��" << endl;
		return;
	}

	//��ԭ�����鲻Ϊ�� �����ͷ�ԭ��������
	if (this->pAddress != NULL)
	{
		delete[]this->pAddress;
		this->pAddress = NULL;
	}

	//���������С������
	this->m_Capacity = arr.m_Capacity;
	this->m_Size = arr.m_Size;


	//���ٶ����ռ� Ȼ��������
	this->pAddress = new int[arr.m_Capacity];
	for (int i = 0;i < this->m_Size;i++)
	{
		this->pAddress[i] = arr.pAddress[i];
	}
}

//��������
MyArray::~MyArray()
{
	if (this->pAddress != NULL)
	{
		delete[]this->pAddress;
		this->pAddress = NULL;
	}
}
