#include<iostream>

using namespace std;

class HinhChuNhat{
private:	
	float dai;
	float rong;
public:
	void nhap(){
		cout<<"Dai:";
		cin>>this->dai;
		cout<<"Rong:";
		cin>>this->rong;
	}	
	void ve(){
		for(int i=0;i<this->rong;i++){
			for(int j=0;j<this->dai;j++){
				cout<<"*";
			}
			cout<<endl;
		}
	}
	float DienTich(){
		return this->dai*this->rong;
	}
	float ChuVi(){
		return (this->dai+this->rong)*2;
	}
};
int main(){
	HinhChuNhat x;
	x.nhap();
	x.ve();
	cout<<"S="<<x.DienTich()<<endl;
	cout<<"P="<<x.ChuVi();
}

