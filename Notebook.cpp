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

void Notebook::setModel(string model_1)
    {
    this -> model = model_1;
    }

void Notebook::setMemory(int memory_1)
    {
    if(memory_1>=0)
    memory=memory_1;
    }
void Notebook::setCPU(int cpu_1)
    {
    if(cpu_1>=0)
    cpu=cpu_1;
    }
string Notebook::getModel() const
    {
    return (this->model);
    }
int Notebook::getMemory() const
    {
    return (this -> memory);
    }
int Notebook::getCPU() const
    {
    return (this -> cpu);
    }
void Notebook::print() const
    {
    cout<<"Model: "<<model<<endl
    <<"Memory: "<<memory<<endl
    <<"CPU: "<<cpu<<endl;
    }

Notebook::Notebook (const Notebook &notebook)
{
    this -> setModel(notebook.model);
    this -> setMemory(notebook.memory);
    this -> setCPU(notebook.cpu);
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

    ostream& operator << (ostream &a, const Notebook &notebook_1)
{
    a << "("<< notebook_1.model << ", " << notebook_1.memory << ", " << notebook_1.cpu << ")\n\n";
    return a;
}
istream& operator >> (istream &b, Notebook &notebook_1)
{
    b >> notebook_1.model;
    b >> notebook_1.memory;
    b >> notebook_1.cpu;
    return b;
}



