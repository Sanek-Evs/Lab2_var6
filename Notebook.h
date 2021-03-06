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

    void setModel(string model_1);
    void setMemory(int memory_1);
    void setCPU(int cpu_1);
    string getModel() const;
    int getMemory() const;
    int getCPU()const;
    void print()const;
     ~Notebook();
    Notebook& operator ++ (int);
    Notebook& operator -- (int);
    bool operator ==(const Notebook& value)const;
    bool operator !=(const Notebook& value)const;
    bool operator >(const Notebook& value)const;
    bool operator <(const Notebook& value)const;
    bool operator >=(const Notebook& value)const;
    bool operator <=(const Notebook& value)const;
    friend ostream& operator << (ostream &a, const Notebook &notebook_1);
    friend istream& operator >> (istream &b, Notebook &notebook_1);
    Notebook& operator = (const Notebook &value);
};

#endif // PRODUCT_H_INCLUDED
