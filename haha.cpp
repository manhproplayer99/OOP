#include<iostream>
#include<iomanip>

using namespace std;

class Date{
	private:
		int day;
		int month;
		int year;
	friend class NhanVien;		
};
class PhongBan{
	private:
		int maPb;
		string tenPb;
		string truongPhong;
		int soNv;
	friend class NhanVien;	
};
class NhanVien{
	private:
		int maNv;
		string hoDem;
		string ten;
		Date ngaySinh;
		PhongBan phong;
	public:
	void nhap();
	void xuat();	
	friend void sapXep(NhanVien *a,int n);
	friend void chen(NhanVien *a,int &n,NhanVien x,int k);
	friend void xoa(NhanVien *a,int &n);
};
void NhanVien :: nhap(){
	cout<<"Nhap ma nv:";
	cin>>this->maNv;
	cout<<"Nhap ho dem:";
	cin.ignore();
	getline(cin,this->hoDem);
	cout<<"Nhap ten:";
	getline(cin,this->ten);
	cout<<"Nhap ngay sinh:";
	cin>>this->ngaySinh.day;
	cout<<"Nhap thang sinh:";
	cin>>this->ngaySinh.month;
	cout<<"Nhap nam sinh:";
	cin>>this->ngaySinh.year;
	cout<<"Nhap ma pb:";
	cin>>this->phong.maPb;
	cout<<"Nhap ten pb:";
	cin.ignore();
	getline(cin,this->phong.tenPb);
	cout<<"Nhap truong phong:";
	getline(cin,this->phong.truongPhong);
	cout<<"Nhap so nhan vien:";
	cin>>this->phong.soNv;
		
}
void NhanVien :: xuat(){
	cout<<setw(10)<<this->maNv<<setw(10)<<this->hoDem<<setw(10)<<this->ten<<setw(10)<<this->ngaySinh.day<<setw(10)<<this->ngaySinh.month<<setw(10)<<this->ngaySinh.year<<setw(10)<<this->phong.maPb<<setw(10)<<this->phong.tenPb<<setw(10)<<this->phong.truongPhong<<setw(10)<<this->phong.soNv<<endl;
}
void sapXep(NhanVien *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].ten > a[j].ten){
				swap(a[i],a[j]);
			}
		}
	}
}  
void chen(NhanVien *a,int &n,NhanVien x,int k){
	for(int i=n;i>k;i--){
		a[i]=a[i-1];
	}
	a[k]=x;
	n++;
}
void xoa(NhanVien *a,int &n){
	for(int i=0;i<n;i++){
		if(a[i].maNv==123){
			for(int j=i;j<n-1;j++){
				a[j]=a[j+1];
			}
			n--;
		}
	}
}
int main(){
	NhanVien *a = new NhanVien[100];
	NhanVien x;
	int n,k;
	cout<<"Nhap n:";
	cin>>n;
	for(int i=0;i<n;i++){
		a[i].nhap();
	}
	cout<<"DS"<<endl;
	for(int i=0;i<n;i++){
		a[i].xuat();
	}
	sapXep(a,n);
	cout<<"SX:"<<endl;
	for(int i=0;i<n;i++){
		a[i].xuat();
	}
	x.nhap();
	cout<<"Nhap vi tri chen:";
	cin>>k;
	chen(a,n,x,k);
	cout<<"chen:"<<endl;
	for(int i=0;i<n;i++){
		a[i].xuat();
	}
	xoa(a,n);
	cout<<"xoa:"<<endl;
	for(int i=0;i<n;i++){
		a[i].xuat();
	}
    return 0;
}

