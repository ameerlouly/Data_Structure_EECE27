#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

//Linked List Driver with all the functions taught in this course
//Will update it with questions ideas moving forward

typedef int elemtype;

class linkedList
{
    struct node;
    typedef node* link;
    struct node
    {
        elemtype elem;
        link next;
    };

    link head, current, tail;

    public:
        linkedList();
        void insert(const elemtype &e);
        bool first(elemtype &e);
        bool next(elemtype &e);
        void print_list();
        int search(const elemtype &e);
        link search_link(const elemtype &e)
        {
            elemtype x;
            int n = 0;

            current = head;
            while(current->elem != e && current->next)
                current = current->next;
            if(current->elem == e)
                return current;

            return 0;
        }
        int count_node();
        bool remove(const elemtype &e);
};

int search_list(linkedList, elemtype &e);
int search_ext(linkedList, elemtype &e);

#endif // LINKEDLIST_H_INCLUDED
