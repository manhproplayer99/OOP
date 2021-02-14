#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class HangHoa{
	private:
		string mahang;
		string tenhang;
		int dongia,soluong;
	public:
		void nhap(){
			cout<<"Nhap ma hang:";
			cin.ignore();
			getline(cin,this->mahang);
			cout<<"Nhap ten hang:";
			getline(cin,this->tenhang);
			cout<<"Nhap don gia:";
			cin>>this->dongia;
			cout<<"Nhap so luong:";
			cin>>this->soluong;
		}
		void xuat(){
			cout<<setw(15)<<this->mahang<<setw(15)<<this->tenhang<<setw(15)<<this->dongia<<setw(15)<<this->soluong<<setw(15)<<this->dongia*this->soluong<<endl;
		}
			
};
void display(){
	cout<<setw(15)<<"Ma hang"<<setw(15)<<"Ten hang"<<setw(15)<<"Don gia"<<setw(15)<<"So luong"<<setw(15)<<"Thanh tien"<<endl;
}
int main(){
	int n;
	cout<<"Nhap n:";
	cin>>n;
	HangHoa *arr =new HangHoa[100];
	for(int i=0;i<n;i++){
		arr[i].nhap();
	}  
	display();
	for(int i=0;i<n;i++){
		arr[i].xuat();
	}
    return 0;
}

