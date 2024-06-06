#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

//Linked List Driver with all the functions taught in this course
//Will update it with questions ideas moving forward

typedef int elemtype;

class linkedList
{
    struct node; //Strucutre Prototype
    typedef node* link;
    struct node //Structure Definition
    {
        elemtype elem;
        link next;
    };

    link head, current, tail;

    public:
        linkedList();
        ~linkedList();
        void insert(const elemtype &e);
        bool first(elemtype &e);
        bool next(elemtype &e);
        void print_list();
        int search(const elemtype &e);
        link search_link(const elemtype &e);
        int count_node();
        bool remove(const elemtype &e);
        void insert_before(const elemtype &e, int);
        void display();
};

int search_list(linkedList, elemtype &e);
int search_ext(linkedList, elemtype &e);

#endif // LINKEDLIST_H_INCLUDED
