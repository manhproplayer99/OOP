#include<iostream>
#include<iomanip>

using namespace std;

class Person{
	public:
		string hoTen;
		string ngaySinh;
		string queQuan;
};
class Kysu : public Person{
	private:
		string nganh;
		int namTN;
	public:
		void nhap();
		void xuat();
			
};
void Kysu :: nhap(){
	cout<<"Nhap ho ten:";
	fflush(stdin);
	getline(cin,this->hoTen);
	cout<<"Nhap ngay sinh:";
	getline(cin,this->ngaySinh);
	cout<<"Nhap que quan :";
	getline(cin,this->queQuan);
	cout<<"Nhap nganh:";
	getline(cin,this->nganh);
	cout<<"Nhap nam tn:";
	cin>>this->namTN;
}
void Kysu :: xuat(){
	cout<<setw(10)<<this->hoTen<<setw(10)<<this->ngaySinh<<setw(10)<<this->queQuan<<setw(10)<<this->nganh<<setw(10)<<this->namTN<<endl;
}
int main(){
	Kysu *a = new Kysu[100];
	int n;
	cout<<"Nhap n:";
	cin>>n;
	for(int i=0;i<n;i++){
		a[i].nhap();	
	}
	for(int i=0;i<n;i++){
		a[i].xuat();	
	}

    return 0;
}

