#include <stdio.h>
#include <stdlib.h>

void fun()
{
	printf("fun\n");
	//return;   ���Ӻ����е���returnֻ�Ǵ����Ӻ�����ֹ�� 
	exit(0);	//���Ӻ����е���exit����ô������ֹ�� 
}

int main()
{
	fun();
	printf("fun\n");

	return 0;//main�����е���exit��return�����һ����
}
