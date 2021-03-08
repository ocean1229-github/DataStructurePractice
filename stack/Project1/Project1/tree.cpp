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
    seletedeleteNode(&head, 20);
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
    if (!*head) {
        *head = getNode();
        (*head)->data = data;
        return;
    }
    Node* tmp = *head;
    while (tmp->next) {
        tmp = tmp->next;
    }
    tmp->next = getNode();
    tmp->next->data = data;
}
void seletedeleteNode(Node** head, int data)
{
    if (!*head) {
        return;
    }
    else if ((*head)->data == data) {
        Node* del = *head;
        *head = (*head)->next;
        free(del);
        return;
    }
    Node* tmp = *head;
    while (tmp->next) {
        if (tmp->next->data == data) {
            Node* del = tmp->next;
            tmp->next = del->next;
            free(del);
            break;
        }
        tmp = tmp->next;
    }
}
void addNode(Node** head, int data, int adddata) //10ã�� 15 �߰�
{
    Node* tmp = getSearchNode(&(*head), data);
    if (!tmp) {
        //insertNode(&(*head), adddata);
        return;
    }
    Node* add = getNode();
    add->data = adddata;
    add->next = tmp->next;
    tmp->next = add;
}
Node* getSearchNode(Node** head, int data)
{
    Node* tmp = *head;
    while (tmp) {
        if (tmp->data == data) {
            break;
        }
        tmp = tmp->next;
    }

    return tmp;
}
void print(Node** head)//������ ��ü ���
{
    Node* tmp = *head;
    while (tmp) {
        if (tmp->next) {
            printf("%d -> ", tmp->data);
        }
        else {
            printf("%d\n", tmp->data);
        }
        tmp = tmp->next;
    }
}
void AllDeleteNode(Node** head)
{
    while (*head) {
        Node* tmp = *head;
        *head = (*head)->next;
        free(tmp);
    }
}