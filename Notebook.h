#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

#include<iostream>
#include<string>

class Notebook
{

private:
    string model;
    int memory;
    int cpu;

public:
    Notebook();
    Notebook(string model, int memory, int cpu);
    Notebook (const Notebook &notebook);

    void setModel(string stroka);
    void setMemory(int qwe);
    void setCPU(int qwe);
    string getModel();
    int getMemory();
    int getCPU();
    void print();
     ~Notebook();
    Notebook& operator ++ (int);
    Notebook& operator -- (int);
    friend bool operator ==( Notebook& value1, Notebook& value2);
    friend bool operator !=( Notebook& value1, Notebook& value2);
    friend bool operator >( Notebook& value1, Notebook& value2);
    friend bool operator <( Notebook& value1, Notebook& value2);
    friend bool operator >=( Notebook& value1, Notebook& value2);
    friend bool operator <=( Notebook& value1, Notebook& value2);
    friend ostream& operator << (ostream &a, const Notebook &notebook123);
    friend istream& operator >> (istream &b, Notebook &notebook123);
    Notebook& operator = (const Notebook &notebook_1);
};

#endif // PRODUCT_H_INCLUDED
