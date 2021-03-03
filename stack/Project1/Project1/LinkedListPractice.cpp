#include<stdio.h>
#include<malloc.h>

typedef struct node
{
	int data;
	struct node* next;
}Node;

Node* getNode(); //��� �Ҵ� �Լ�
void insertNode(Node** head, int data); //������ �߰�
void seletedeleteNode(Node** head, int data); //������ ���� ����
void addNode(Node** head, int data, int adddata); // ������ �߰�����
Node* getSearchNode(Node** head, int data); // ������ �˻�
void print(Node** head); // ������ ��ü ���
void AllDeleteNode(Node** head); // ������ ��ü ����

int main(void)
{
	Node* head = NULL;

	insertNode(&head, 10);
	insertNode(&head, 20);
	insertNode(&head, 30);
	print(&head);
	addNode(&head, 10, 15);
	addNode(&head, 20, 25);
	addNode(&head, 40, 25);
	seletedeleteNode(&head, 20);
	print(&head);
	seletedeleteNode(&head, 25);
	print(&head);
	AllDeleteNode(&head);
	return 0;
}

Node* getNode()
{
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp->next = NULL;
	return tmp;
}
void insertNode(Node** head, int data)
{
	if ((*head) == NULL) {
		*head = getNode();
		(*head)->data = data;
		return;
	}
	Node *tmp= getNode();
	while (tmp->next)
	{
		tmp = tmp->next;
	}
}
void seletedeleteNode(Node** head, int data)
{

}
void addNode(Node** head, int data, int adddata)
{

}
Node* getSearchNode(Node** head, int data)
{

}
void print(Node** head)
{

}
void AllDeleteNode(Node** head)
{

}