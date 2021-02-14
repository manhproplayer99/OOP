#include<iostream>
#include<iomanip>
using namespace std;

class vehicle{
	private:
		string nhanHieu;
		int namsx;
		string hang;
	public:
		void nhap();
		void xuat();	
};
class oto : public vehicle{
	private:
		int soChoNgoi;
		double dungTich;
	public:
		void nhap();
		void xuat();
		void sua();	
};
class moto : public vehicle{
	private:
		int phanKhoi;
	public:
		void nhap();
		void xuat();	

		
};
void vehicle::nhap(){
	cout<<"Nhap nhan hieu:";
	fflush(stdin);
	getline(cin,this->nhanHieu);
	cout<<"Nhap nam sx:";
	cin>>this->namsx;
	cout<<"Nhap hang:";
	fflush(stdin);
	getline(cin,this->hang);
}
void vehicle::xuat(){
	cout<<setw(10)<<this->nhanHieu<<setw(10)<<this->namsx<<setw(10)<<this->hang;
}
void oto::nhap(){
	vehicle::nhap();
	cout<<"Nhap so cho ngoi:";
	cin>>this->soChoNgoi;
	cout<<"Nhap dung tich:";
	cin>>this->dungTich;
}
void oto::xuat(){
	vehicle::xuat();
	cout<<setw(10)<<this->soChoNgoi<<setw(10)<<this->dungTich<<endl;
}
void moto::nhap(){
	vehicle::nhap();
	cout<<"Nhap phan khoi:";
	cin>>this->phanKhoi;
}
void moto::xuat(){
	vehicle::xuat();
	cout<<setw(10)<<this->phanKhoi<<endl;
}
void oto::sua(){
	this->dungTich=3.0;
}
int main(){
	oto o1;
	moto m1;
	o1.nhap();
	m1.nhap();
	o1.xuat();
	m1.xuat();
	cout<<"sua:";
	o1.sua();
	o1.xuat();
    return 0;
}

