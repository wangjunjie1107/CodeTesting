//初始化链表
//函数返回值 创建好的链表的头结点
struct LinkNode * init_LinkList();


//遍历链表
void foreach_LinkList(struct LinkNode * pHeader);

//插入结点功能
void insert_LinkList(struct LinkNode * pHeader, int oldVal,int newVal);

//删除节点功能
void delete_LinkList(struct LinkNode * pHeader, int delVal);

//清空链表
void clear_LinkList(struct LinkNode * pHeader);

//销毁链表
void destroy_LinkList(struct LinkNode * pHeader);

//按位置删除结点
void deleteSite_LinkList(struct LinkNode * pHeader, int site);

//按位置查找结点  会打印结点的值 
void researchSite_LinkList(struct LinkNode * pHeader, int site);

//获取链表长度 
int strlen_LinkList(struct LinkNode * pHeader);

//反转链表 只将结果值反转打印， 并不实际将链表相反链接 
void reverseValue_LinkList(struct LinkNode * pHeader);

//反转链表  实际将链表相反链接  
void reverseLink_LinkList(struct LinkNode * pHeader);













 
