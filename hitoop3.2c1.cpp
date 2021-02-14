#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class NhaSanXuat{
	private:
		string ma;
		string ten;
		string diachi;
	public:
		void set()
		{
			cout<<"Nhap ma nha san xuat:";
			fflush(stdin);
			getline(cin,this->ma);
			cout<<"Nhap ten nha san xuat:";
			getline(cin,this->ten);
			cout<<"Nhap dia chi nha san xuat:";
			getline(cin,this->diachi);
		}
		void get()
		{
			cout<<setw(15)<<this->ma<<setw(15)<<this->ten<<setw(15)<<this->diachi<<endl;
		}
				
};
class XeHoi : public NhaSanXuat{
	private:
		
		string nhanhieu;
		string mauson;
		string xuatxu;
		int gia;
	public:
		void nhap()
		{
			cout<<"Nhap nhan hieu:";
			cin.ignore();
			getline(cin,this->nhanhieu);
			cout<<"Nhap mau son:";
			getline(cin,this->mauson);
			cout<<"Nhap xuat xu:";
			getline(cin,this->xuatxu);
			cout<<"Nhap gia ban:";
			cin>>this->gia;
			NhaSanXuat::set();
		}	
		void xuat()
		{
			cout<<setw(15)<<this->nhanhieu<<setw(15)<<this->xuatxu<<setw(15)<<this->mauson<<setw(15)<<this->gia;
			NhaSanXuat::get();	
		}
};
void display(){
    cout << setw(15) << "Nhan Hieu" << setw(15) << "Xuat xu" << setw(15) << "Mau Son"<< setw(15) << "Gia" << setw(15) << "ma NSX" << setw(15) << "ten NSX" << setw(15) << "dia chi NSX"<<endl;
}

int main(){
	XeHoi *arr = new XeHoi[100];
	int n;
	cout <<"Nhap so xe hoi:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		arr[i].nhap();
	}
	display();
	for(int i=0;i<n;i++)
	{
		arr[i].xuat();	
	}
    return 0;
}

