#ifndef STRINGVALUEPAIR_H
#define STRINGVALUEPAIR_H

#include <string>

// зачем тут какое-то наследование еще? непонятно
// и задания ущербные, никакого интереса совсем!!!

template <typename T>
class StringValuePair
{
public:
    StringValuePair(const char* first, const T& second):
        first_(first), second_(second)
    {

    }

    const char* first() const
    {
        return first_;
    }

    const T& second() const
    {
        return second_;
    }

protected:
    const char* first_;
    T second_;
};

#endif // STRINGVALUEPAIR_H
