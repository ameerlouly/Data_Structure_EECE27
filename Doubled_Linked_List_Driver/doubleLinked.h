#ifndef DOUBLELINKED_H_INCLUDED
#define DOUBLELINKED_H_INCLUDED

typedef int elemtype;

class doubleLinked
{
    struct node;
    typedef node* link;
    struct node
    {
        elemtype elem;
        link next, prev;
    };

    link head, current;

    public:
    doubleLinked();
    void insert(const elemtype &e);
    bool prev(elemtype &e);
    bool next(elemtype &e);
    void insert_end(const elemtype &e);
    void insert_after(const elemtype &e, int);
    void insert_before(const elemtype &e, int);
    bool remove(const elemtype &e);
    bool remove_index(const elemtype &e, int);
};

#endif // DOUBLELINKED_H_INCLUDED
