#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
class Student;
class DiaChi{
	private:
		int sonha;
		int soduong;
		string tenthanhpho;
	friend class Student;
	friend void tim(Student *arr);
};
class Student{
	private:
		string masv;
		string hoten;
		DiaChi diachi;
	public:
		void nhap(){
			cout<<"Nhap msv:";
			getline(cin,this->masv);
			cout<<"Nhap ho ten:";
			getline(cin,this->hoten);
			cout<<"Nhap so nha:";
			cin>>diachi.sonha;
			cout<<"Nhap so duong:";
			cin>>diachi.soduong;
			cout<<"Nhap ten thanh pho:";
			cin.ignore();
			getline(cin,diachi.tenthanhpho);
		}
		void xuat(){
			cout<<setw(20)<<this->masv<<setw(20)<<this->hoten<<setw(20)<<diachi.sonha<<setw(20)<<diachi.soduong<<setw(20)<<diachi.tenthanhpho<<endl;
			
		}	
		friend void sx(Student *arr);
		friend void tim(Student *arr);
};
void display(){
    cout << setw(20) << "MSV" << setw(20) << "Hoten" << setw(20) << "So nha"<< setw(20) << "So Duong" << setw(20) << "Ten Thanh Pho" << endl;
}
void sx(Student *arr){
			for(int i=0;i<1;i++){
				for(int j=i+1;j<2;j++){
					if(arr[i].hoten > arr[j].hoten){
						swap(arr[i],arr[j]);
					}
				}
			}
			
		}
void tim(Student *arr){
	for(int i=0;i<2;i++)
	{
		if(arr[i].diachi.sonha < 100 || arr[i].diachi.soduong > 40 || arr[i].diachi.tenthanhpho == "Da Nang")
		{
			arr[i].xuat();
		}
	}
}
int main(){
	Student *arr = new Student[100];
	for(int i=0;i<2;i++){
		arr[i].nhap();
	}
	sx(arr);
	display();
	for(int i=0;i<2;i++){
		arr[i].xuat();
	}
	tim(arr);
    return 0;
}
