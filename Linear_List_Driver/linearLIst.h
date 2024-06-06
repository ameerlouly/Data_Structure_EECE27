#ifndef LINEARLIST_H
#define LINEARLIST_H

typedef int elemtype;

#define max_size 1000

class linearList
{
    private:
        elemtype listarray[max_size];
        int number, current;

    public:
        linearList();
        void insert(const elemtype &e);
        bool first(elemtype &e);
        bool next(elemtype &e);
};

#endif  //LINEARLIST_H