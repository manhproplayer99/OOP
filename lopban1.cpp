#include<iostream>

using namespace std;

class NSX{
	private:
		string maNSX;
		string tenNSX;
		string dcNSX;
		friend class Hang;
};
class Hang{
	private:
		string mahang;
		string tenhang;
		int dongia;
		int trongluong;
		NSX x;
	public:	
		void nhap();
		void xuat();
};
void Hang::nhap(){
	cout<<"Nhap ma hang:";
			getline(cin,this->mahang);
			cout<<"Nhap ten hang:";
			getline(cin,this->tenhang);
			cout<<"Nhap don gia:";
			cin>>this->dongia;
			cout<<"Nhap trong luong:";
			cin>>this->trongluong;
			cout<<"Nhap ma NSX:";
			cin.ignore();
			getline(cin,x.maNSX);
}
void Hang::xuat(){
	cout<<"Ma hang:"<<this->mahang<<endl;
			cout<<"Ten hang:"<<this->tenhang<<endl;
			cout<<"don gia:"<<this->dongia<<endl;
			cout<<"trong luong:"<<this->trongluong<<endl;
			cout<<"Ma NSX:"<<x.maNSX<<endl;
}
int main(){
	Hang h1;
	h1.nhap();
	h1.xuat();
    return 0;
}

