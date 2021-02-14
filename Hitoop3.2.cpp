#include<iostream>
#include<iomanip>

using namespace std;
class XeHoi;

class NhaSanXuat{
	private:
		string mansx;
		string tennsx;
		string dcnsx;
	friend class XeHoi;	
	friend void in2(XeHoi *arr);
};
class XeHoi{
	private:
		string nhanhieu;
		NhaSanXuat nhasanxuat;
		string mauson;
		string xuatxu;
		int giaban;
	public:
		void nhap();
		void xuat();
		friend void in1(XeHoi *arr);
		friend void in2(XeHoi *arr);
};

void XeHoi :: nhap(){
	cout<<"Nhap nhan hieu:";
	getline(cin,this->nhanhieu);
	cout<<"Nhap ma nha san xuat:";
	getline(cin,nhasanxuat.mansx);
	cout<<"Nhap ten nha san xuat:";
	getline(cin,nhasanxuat.tennsx);
	cout<<"Nhap dia chi nha san xuat:";
	getline(cin,nhasanxuat.dcnsx);
	cout<<"Nhap mau son:";
	getline(cin,this->mauson);
	cout<<"Nhap xuat xu:";
	getline(cin,this->xuatxu);
	cout<<"Nhap gia ban:";
	cin>>giaban;
	cin.ignore();
} 
void XeHoi :: xuat(){
	cout<<setw(20)<<this->nhanhieu<<setw(20)<<nhasanxuat.mansx<<setw(20)<<nhasanxuat.tennsx<<setw(20)<<nhasanxuat.dcnsx<<setw(20)<<this->mauson<<setw(20)<<this->xuatxu<<setw(20)<<this->giaban<<endl;
}
void in1(XeHoi *arr){
	for(int i=0;i<2;i++){
		if(arr[i].nhanhieu=="toyota"){
			arr[i].xuat();
		}
	}
}
void in2(XeHoi *arr){
	for(int i=0;i<2;i++){
		if(arr[i].mauson=="green" && arr[i].nhasanxuat.dcnsx=="nhat ban"){
			arr[i].xuat();
		}
	}
}
int main(){
	XeHoi *arr = new XeHoi[100];
	for(int i=0;i<2;i++){
		arr[i].nhap();
	}
	for(int i=0;i<2;i++){
		arr[i].xuat();
	}
	in1(arr);
	in2(arr);
    return 0;
}

