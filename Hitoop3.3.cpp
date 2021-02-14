#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class DoanhNghiep;
class Date{
	public:
		int date;
		int month;
		int year;
	public:
		void nhap();
		void xuat();	
		friend void in_tongdt(DoanhNghiep *a,int n);
		friend class DoanhNghiep;
};

class DiaChi{
	private:
		char dienThoai[20];
		char phuong[30];
		char quan[30];
		char thanhPho[30];
	friend class DoanhNghiep;
	friend void in_tp(DoanhNghiep *a,int n);	
};

class DoanhNghiep{
	private:
		int maDn;
		char tenDn[60];
		Date ngaytl;
		DiaChi diaChi;
		char giamDoc[30];
		long doanhThu;
	public:
		void nhap();
		void xuat();
		friend void in_tp(DoanhNghiep *a,int n);
		friend void in_tongdt(DoanhNghiep *a,int n);
		friend void in_Sua_ma(DoanhNghiep *a,int n,int m);
};

void Date :: nhap(){
	cout<<"Nhap ngay:";
	cin>>this->date;
	cout<<"Nhap thang:";
	cin>>this->month;
	cout<<"Nhap nam:";
	cin>>this->year;
}
void Date :: xuat(){
	cout<<setw(10)<<this->date<<"/"<<this->month<<"/"<<this->year;
}
void DoanhNghiep :: nhap(){
	cout<<"Nhap ma doanh nghiep:";
	cin>>this->maDn;
	cout<<"Nhap ten doanh nghiep:";
	fflush(stdin);
	gets(this->tenDn);
	ngaytl.nhap();
	cout<<"Nhap dien thoai:";
	fflush(stdin);
	gets(this->diaChi.dienThoai);
	cout<<"Nhap phuong:";
	gets(this->diaChi.phuong);
	cout<<"Nhap thanh pho:";
	gets(this->diaChi.thanhPho);
	cout<<"Nhap giam doc:";
	gets(this->giamDoc);
	cout<<"Nhap doanh thu:";
	cin>>this->doanhThu;
}
void DoanhNghiep :: xuat(){
	cout<<setw(10)<<this->maDn<<setw(10)<<this->tenDn;
	ngaytl.xuat();
	cout<<setw(10)<<this->diaChi.dienThoai<<setw(10)<<this->diaChi.phuong<<setw(10)<<this->diaChi.quan<<setw(10)<<this->diaChi.thanhPho;
	cout<<setw(10)<<this->giamDoc<<setw(10)<<this->doanhThu<<endl;
}
void in_tp(DoanhNghiep *a,int n){
	for(int i=0;i<n;i++){
		if(strcmp(a[i].diaChi.thanhPho,"Ha Noi")==0){
			a[i].xuat();
		}
	}
}
void in_tongdt(DoanhNghiep *a,int n){
	long t=0;
	for(int i=0;i<n;i++){
		if(a[i].ngaytl.year==2015){
			t=t+a[i].doanhThu;
		}
	}
	cout<<"\nTong doanh thu la:"<<t;
}
void in_Sua_ma(DoanhNghiep *a,int n,int m){
	
	for(int i=0;i<n;i++){
		if(a[i].maDn==m){
			a[i].nhap();
		}
	}
}
int main(){
	DoanhNghiep *a =new DoanhNghiep[100];
	int n;
	
	cout<<"nhap n:";
	cin>>n;
	for(int i=0;i<n;i++){
		a[i].nhap();
	}
	cout<<"DS:"<<endl;
	for(int i=0;i<n;i++){
		a[i].xuat();
	}
	cout<<"In Ha Noi:"<<endl;
	in_tp(a,n);
	in_tongdt(a,n);
	int m;
	cout<<"Nhap ma dn:";
	cin>>m;
	in_Sua_ma(a,n,m);
	for(int i=0;i<n;i++){
		a[i].xuat();
	}
    return 0;
}

