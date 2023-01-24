#ifndef PAIR1_H
#define PAIR1_H

template <typename T>
class Pair1
{
public:
    Pair1(T first, T second):
        first_(first), second_(second)
    {

    }

    T first() const
    {
        return first_;
    }

    T second() const
    {
        return second_;
    }

private:
    T first_;
    T second_;
};

#endif // PAIR1_H
