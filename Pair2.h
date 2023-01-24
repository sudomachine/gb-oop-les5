#ifndef PAIR2_H
#define PAIR2_H

template <typename T, typename N>
class Pair2
{
public:
    Pair2(T first, N second):
        first_(first), second_(second)
    {

    }

    T first() const
    {
        return first;
    }

    N second() const
    {
        return second_;
    }

private:
    T first_;
    N second_;
};

#endif // PAIR2_H
