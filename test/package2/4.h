//
// Created by 牛京 on 17/2/15.
//

#ifndef CPP_3_H
#define CPP_3_H

#endif //CPP_3_H

class Array{
public:
    Array(int count);
    Array(const Array& arr);
    ~Array();
    void setCount(int count);
    int getCount();
    void printAddr();
    void printArr();

private:
    int m_iCount;
    int *m_pArr;
};
