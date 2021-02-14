#include<iostream>
#include<iomanip>

using namespace std;

class MayTinh{
	private:
		string maMay;
		string tenMay;
		float tocDoCPU;
		string hangSanXuat;
		string dcSanXuat;
	friend class PhongMay;
	
};
class PhongMay{
	private:
		string tenPhongMay;
		string nguoiQuanLy;
		MayTinh *x;
		int n;
	public:
		void nhap();
		void xuat();	
		void sapXep();
		void display();
		void hienThi1();
		void hienThi2();
		
};
void PhongMay :: nhap(){
	cout<<"Nhap ten phong may:";
	fflush(stdin);
	getline(cin,this->tenPhongMay);
	cout<<"Nhap nguoi quan ly:";
	getline(cin,this->nguoiQuanLy);
	cout<<"Nhap so may tinh:";
	cin>>this->n;
	x =new MayTinh[n];
	for(int i=0;i<n;i++){
		cout<<"\nNhap ma may:";
		fflush(stdin);
		getline(cin,this->x[i].maMay);
		cout<<"Nhap ten may:";
		getline(cin,this->x[i].tenMay);
		cout<<"Nhap toc so CPU:";
		cin>>this->x[i].tocDoCPU;
		cout<<"Nhap hang san xuat:";
		fflush(stdin);
		getline(cin,this->x[i].hangSanXuat);
		cout<<"Nhap dc san xuat:";
		getline(cin,this->x[i].dcSanXuat);
	}
}
void display(){
	cout<<setw(25)<<"Ma May"<<setw(25)<<"Ten May"<<setw(25)<<"Toc do CPU"<<setw(25)<<"Hang san xuat"<<setw(25)<<"Dia chi san xuat"<<endl;
	
}
void PhongMay :: xuat(){
	cout<<"Ten phong may:"<<this->tenPhongMay;
	cout<<setw(25);
	cout<<"Nguoi quan ly:"<<this->nguoiQuanLy;
	cout<<endl;
	cout<<setw(25)<<"Ma May"<<setw(25)<<"Ten May"<<setw(25)<<"Toc do CPU"<<setw(25)<<"Hang san xuat"<<setw(25)<<"Dia chi san xuat"<<endl;
	for(int i=0;i<n;i++){
		cout<<setw(25)<<this->x[i].maMay<<setw(25)<<this->x[i].tenMay<<setw(25)<<this->x[i].tocDoCPU<<setw(25)<<this->x[i].hangSanXuat<<setw(25)<<this->x[i].dcSanXuat<<endl;
	}
}
void PhongMay :: sapXep(){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(x[i].tenMay>x[j].tenMay){
				swap(x[i],x[j]);
			}
		}
		
	}
	for(int i=0;i<n;i++){
		cout<<setw(25)<<this->x[i].maMay<<setw(25)<<this->x[i].tenMay<<setw(25)<<this->x[i].tocDoCPU<<setw(25)<<this->x[i].hangSanXuat<<setw(25)<<this->x[i].dcSanXuat<<endl;
	}
}
void PhongMay :: hienThi1(){
	for(int i=0;i<n;i++){
		if(x[i].hangSanXuat=="Dell"&&x[i].dcSanXuat=="Ha Noi"){
			cout<<setw(25)<<x[i].maMay<<setw(25)<<x[i].tenMay<<setw(25)<<x[i].tocDoCPU<<setw(25)<<x[i].hangSanXuat<<setw(25)<<x[i].dcSanXuat<<endl;
		}
	}
}
void PhongMay :: hienThi2(){
	float max = x[0].tocDoCPU;
	for(int i=0;i<n;i++){
		if(x[i].tocDoCPU > max){
			max=x[i].tocDoCPU;
		}
	}
	for(int i=0;i<n;i++){
		if(x[i].tocDoCPU==max){
			cout<<setw(25)<<x[i].maMay<<setw(25)<<x[i].tenMay<<setw(25)<<x[i].tocDoCPU<<setw(25)<<x[i].hangSanXuat<<setw(25)<<x[i].dcSanXuat<<endl;
		}
	}
}
int main(){
	PhongMay p1;
	p1.nhap();
	p1.xuat();
	cout<<"SapXep"<<endl;
	display();
	p1.sapXep();
	cout<<"HienThi dell va Ha Noi:"<<endl;
	display();
	p1.hienThi1();
	cout<<"Hien Thi max:"<<endl;
	display();
	p1.hienThi2();
    return 0;
}

