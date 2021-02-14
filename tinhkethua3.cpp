#include<iostream>
#include<iomanip>
using namespace std;

class People{
private:
	string name;
	int age;
	string address;
public:
	People(){
		this->name="";
		this->age=0;
		this->address="";
	}	
	~People(){
		this->name="";
		this->address="";
		this->age=0;
	}
	void set(){
		cout<<"Nhap name:";
		cin.ignore();
		getline(cin,this->name);
		cout<<"Age:";
		cin>>this->age;
		cout<<"Address:";
		cin.ignore();
		getline(cin,this->address);
	}
	void get(){
		cout<<setw(10)<<this->name<<setw(10)<<this->age<<setw(10)<<this->address;
	}
};
class Student : public People{
private:
	string id;
	float math,physical,chemistry;
public:
	Student()
    {
        this->id = "";
        this->math = this->physical = this->chemistry = 0;
    }
 
    ~Student()
    {
        this->id = "";
        this->math = this->physical = this->chemistry = 0;
    }	
	void set(){
		People :: set();
		 cout << "ID: ";
        cin >> this->id;
        cout << "Math: ";
        cin >> this->math;
        cout << "Physical: ";
        cin >> this->physical;
        cout << "Chemistry: ";
        cin >> this->chemistry;
	}
	void get(){
		People :: get();
		cout<<setw(10)<<this->id<<setw(10)<<this->math<<setw(10)<<this->physical<<setw(10)<<this->chemistry<<endl;
	}
	float GPA(){
		return (this->chemistry+this->physical+this->math)/3;
	}
};
void display(){
	cout<<setw(10)<<"Name:"<<setw(10)<<"Age:"<<setw(10)<<"Address:"<<setw(10)<<"id:"<<setw(10)<<"Math:"<<setw(10)<<"Physical:"<<setw(10)<<"Chemistry"<<endl;
}

int main(){
	Student s1,s2;
	s1.set();
	s2.set();
	display();
	s1.get();
	s2.get();
}
