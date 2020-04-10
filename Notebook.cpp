#include <cstring>
using namespace std;

#include"Notebook.h"

Notebook::Notebook()
    {
    setModel("-");
    setMemory(4000);
    setCPU(1333);
    }
    Notebook::Notebook(string model, int memory, int cpu)
    {
    setModel(model);
    memory=4000;
    setMemory(memory);
    cpu=1333;
    setCPU(cpu);
    }

void Notebook::setModel(string stroka)
    {
    this -> model = stroka;
    }

void Notebook::setMemory(int qwerty)
    {
    if(qwerty>=0)
    memory=qwerty;
    }
void Notebook::setCPU(int qwerty)
    {
    if(qwerty>=0)
    cpu=qwerty;
    }
string Notebook::getModel()
    {
    return (this->model);
    }
int Notebook::getMemory()
    {
    return (this -> memory);
    }
int Notebook::getCPU()
    {
    return (this -> cpu);
    }
void Notebook::print()
    {
    cout<<"Model: "<<model<<endl
    <<"Memory: "<<memory<<endl
    <<"CPU: "<<cpu<<endl;
    }

Notebook::Notebook (const Notebook &qweqwe)
{
    this -> setModel(qweqwe.model);
    this -> setMemory(qweqwe.memory);
    this -> setCPU(qweqwe.cpu);
}

 Notebook :: ~Notebook()
    {

    }


bool Notebook :: operator ==(const Notebook& value)const
{
    if ((this->model==value.model) && (this->memory==value.memory) && (this->cpu==value.cpu))
    return 1;
}

bool Notebook :: operator !=(const Notebook& value)const
{
    if ((this->model==value.model) && (this->memory == value.memory) && (this->cpu == value.cpu))
    return 1;
       }

bool Notebook :: operator > (const Notebook& value)const{
return ((this->memory > value.memory) && (this->cpu > value.cpu));
}
bool Notebook :: operator < (const Notebook& value)const{
return ((this->memory < value.memory) && (this->cpu < value.cpu));
       }
bool Notebook :: operator >=(const Notebook& value)const{
return ((this->memory >= value.memory) && (this->cpu >= value.cpu));
       }
bool Notebook :: operator <=(const Notebook& value)const{
return ((this->memory <= value.memory) && (this->cpu <= value.cpu));
       }

        Notebook& Notebook :: operator ++(int)
    {
        if (this->model == "Lenovo") this->model = "Apple";
        if (this->model == "Hp") this->model = "Lenovo";
        if (this->model == "Aser") this->model = "Hp";
        if (this->model == "Dexp") this->model = "Aser";
        this->memory += 1024;
        this->cpu += 512;
        return *this;
    }

    Notebook& Notebook :: operator --(int)
    {
        if (this->model == "Aser") this->model = "Dexp";
        if (this->model == "HP") this->model = "Aser";
        if (this->model == "Lenovo") this->model = "Hp";
        if (this->model == "Apple") this->model = "Lenovo";
        if (this->memory > 2048) this->memory -= 1024;
        if (this->cpu > 1024) this->cpu -= 512;
        return *this;
    }

Notebook& Notebook::operator = (const Notebook &value)
{
    this -> model = value.model;
    this -> memory = value.memory;
    this -> cpu = value.cpu;
    return *this;
}

    ostream& operator << (ostream &a, const Notebook &notebook123)
{
    a << "("<< notebook123.model << ", " << notebook123.memory << ", " << notebook123.cpu << ")\n\n";
    return a;
}
istream& operator >> (istream &b, Notebook &notebook123)
{
    b >> notebook123.model;
    b >> notebook123.memory;
    b >> notebook123.cpu;
    return b;
}



