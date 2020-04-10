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


bool operator ==(Notebook &value1,  Notebook &value2)
{
    if ((value1.model==value2.model) && (value1.memory==value2.memory) && (value1.cpu==value2.cpu))
    return 1;
}

bool operator !=(Notebook &value1, Notebook &value2)
{
    if ((value1.model==value2.model) && (value1.memory == value2.memory) && (value1.cpu == value2.cpu))
    return 1;
       }

bool operator > ( Notebook& value1, Notebook& value2){
return ((value1.memory > value2.memory) && (value1.cpu > value2.cpu));
}
bool operator < ( Notebook& value1, Notebook& value2){
return ((value1.memory < value2.memory) && (value1.cpu < value2.cpu));
       }
bool operator >=( Notebook& value1, Notebook& value2){
return ((value1.memory >= value2.memory) && (value1.cpu >= value2.cpu));
       }
bool operator <=(Notebook& value1, Notebook& value2){
return ((value1.memory <= value2.memory) && (value1.cpu <= value2.cpu));
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

Notebook& Notebook::operator = (const Notebook &notebook_1)
{
    this -> model=notebook_1.model;
    this -> memory=notebook_1.memory;
    this -> cpu = notebook_1.cpu;
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



