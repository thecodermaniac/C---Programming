#include <iostream>
using namespace std;

class node
{
public:
    int data;
    class node *next;
};
class node *create_list(int n)
{
    class node *head = new node;

    class node *temp = new node;
    head->next = head;
    for (int i = 0; i < n; i++)
    {
        class node *ptr = new node;
        cin >> ptr->data;
        if (head->next == head)
        {
            head->next = ptr;
            ptr->next = head;
            temp = ptr;
        }
        else
        {
            temp->next = ptr;
            ptr->next = head;
            temp = ptr;
        }
    }
    return head;
}
void insert_beg(class node *front, int new_data)
{
    class node *new_ptr = new node;
    new_ptr->next = front->next;
    front->next = new_ptr;
    new_ptr->data = new_data;
}
void insert_end(class node *front, int new_data)
{
    class node *ptr = new node;
    ptr = front;
    do
    {
        ptr = ptr->next;
    } while (ptr->next != front);
    class node *new_node = new node;
    ptr->next = new_node;
    new_node->data = new_data;
    new_node->next = front;
}
void insert_at_pos(class node *front, int pos, int new_data)
{
    class node *ptr = new node;
    class node *ptr_next;
    ptr = front;

    for (int i = 0; i < pos; i++)
    {
        ptr = ptr->next;
        ptr_next = ptr->next;
    }
    class node *new_node = new node;
    new_node->next = ptr_next;
    ptr->next = new_node;
    new_node->data = new_data;
}
void delete_beg(class node *front)
{
    class node *ptr = front->next;
    front->next = ptr->next;
    delete ptr;
}
void delete_end(class node *front)
{
    class node *ptr, *ptr_next;
    ptr = front;
    do
    {
        ptr = ptr->next;
        ptr_next = ptr->next;
    } while (ptr_next->next != front);
    ptr->next = front;
    delete ptr_next;
}
void delete_at_pos(class node *front, int pos)
{
    class node *ptr;
    class node *ptr_next;
    ptr = front;

    for (int i = 0; i < pos - 1; i++)
    {
        ptr = ptr->next;
        ptr_next = ptr->next;
    }
    ptr->next = ptr_next->next;
    delete ptr_next;
}
class node *reverse_list(class node *front)
{
    class node *curr, *last, *fst;
    curr = front->next;
    last = curr->next;
    fst = front;
    do
    {
        if (fst == front)
        {
            fst = curr;
            curr = last;
            last = last->next;
        }
        else
        {
            curr->next = fst;
            fst = curr;
            curr = last;
            last = last->next;
        }

    } while (last != front);
    curr->next = fst;
    fst = last->next;
    last->next = curr;
    fst->next = last;
    return last;
}
class node *break_list(class node *front, int pos)
{
    class node *ptr;
    class node *ptr_next;
    class node *head;
    ptr = front;

    for (int i = 0; i < pos; i++)
    {
        ptr = ptr->next;
        ptr_next = ptr->next;
    }
    ptr->next = front;
    head->next = ptr_next;
    do
    {
        ptr_next = ptr_next->next;
    } while (ptr_next->next != front);
    ptr_next->next = head;
    return head;
}
void print_list(class node *front)
{
    class node *ptr;
    ptr = front;
    do
    {
        ptr = ptr->next;
        cout << ptr->data << endl;
    } while (ptr->next != front);
}
int main(int argc, char const *argv[])
{
    class node *head = new node;
    head->data = 0;
    head->next = head;
    class node *head2 = new node;
    head = create_list(6);
    insert_beg(head, 18);
    insert_end(head, 20);
    insert_at_pos(head, 2, 100);
    delete_beg(head);
    delete_end(head);
    delete_at_pos(head, 2);
    // reverse_list(head);
    head2 = break_list(head, 2);
    cout << "The 1st list is :" << endl;
    print_list(head);
    cout << "The 2nd list is :" << endl;
    reverse_list(head2);
    print_list(head2);
    return 0;
}
