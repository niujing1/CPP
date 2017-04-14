//
// Created by 牛京 on 17/2/16.
//

#ifndef CPP_7_H
#define CPP_7_H

#endif //CPP_7_H

class Array{
public:
    Array(int len);
    ~Array();
    //void setLen(int len);
    Array& setLen(int len);
    int getLen();
    Array& printfInfo();

private:
    //int m_iLen;
    int len;
};
