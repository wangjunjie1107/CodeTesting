//��ʼ������
//��������ֵ �����õ������ͷ���
struct LinkNode * init_LinkList();


//��������
void foreach_LinkList(struct LinkNode * pHeader);

//�����㹦��
void insert_LinkList(struct LinkNode * pHeader, int oldVal,int newVal);

//ɾ���ڵ㹦��
void delete_LinkList(struct LinkNode * pHeader, int delVal);

//�������
void clear_LinkList(struct LinkNode * pHeader);

//��������
void destroy_LinkList(struct LinkNode * pHeader);

//��λ��ɾ�����
void deleteSite_LinkList(struct LinkNode * pHeader, int site);

//��λ�ò��ҽ��  ���ӡ����ֵ 
void researchSite_LinkList(struct LinkNode * pHeader, int site);

//��ȡ������ 
int strlen_LinkList(struct LinkNode * pHeader);

//��ת���� ֻ�����ֵ��ת��ӡ�� ����ʵ�ʽ������෴���� 
void reverseValue_LinkList(struct LinkNode * pHeader);

//��ת����  ʵ�ʽ������෴����  
void reverseLink_LinkList(struct LinkNode * pHeader);













 
