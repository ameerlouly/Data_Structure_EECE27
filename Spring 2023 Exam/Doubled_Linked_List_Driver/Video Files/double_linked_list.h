#ifndef DOUBLELINKED_H_INCLUDED
#define DOUBLELINKED_H_INCLUDED

typedef int elemtype;

class double_linked
{
    private:

        struct node; //Structure Protype
        typedef node* link;
        struct node //Structure Definition
        {
            elemtype elem;
            link next, prev;
        };

        link head, current;

    public:

    //Function Prototypes
    double_linked();
    bool first(elemtype &e);
    bool next(elemtype &e);
    bool prev(elemtype &e);
    void insert(const elemtype &e);
    void insert_end(const elemtype &e);
    void insert_after(const elemtype &e, int n);

};

#endif // DOUBLELINKED_H_INCLUDED