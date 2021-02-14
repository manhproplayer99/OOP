#include<iostream>
#include<math.h>

using namespace std;

class PhuongTrinhBac2{
private:
	double a,b,c;
public:
	void nhap(){
		cout<<"Nhap a:";
		cin>>this->a;
		cout<<"Nhap b:";
		cin>>this->b;
		cout<<"Nhap c:";
		cin>>this->c;
	}
	void xuat(){
		cout<<this->a<<"x2+"<<this->b<<"x+"<<this->c<<"=0";
	}
	void giai(){
		double denta;
		denta=(this->b*this->b)-4*this->a*this->c;
		if(this->a==0){
			cout<<"phuong trinh co nghiem duy nhat:"<<-this->c/this->b;
		}else if(this->a!=0){
			
			if(denta>0){
				cout<<"\nx1="<<(-this->b-sqrt(denta))/(2*this->a)<<endl;
			cout<<"x2="<<(-this->b+sqrt(denta))/(2*this->a)<<endl;
			}else if(denta<0){
				cout<<"pt vo nghiem";
			}else if(denta==0){
				cout<<"x1=x2="<<-this->b/this->a;
			}
			
	    }
	}
	PhuongTrinhBac2(){
		this->a=0;
		this->b=0;
		this->c=0;
	}
	PhuongTrinhBac2(double a,double b,double c){
		this->a=a;
		this->b=b;
		this->c=c;
	}
};
int main(){
	PhuongTrinhBac2 P(1,-11,30),Q;
	P.xuat();
	P.giai();
	Q.nhap();
	Q.xuat();
	Q.giai();
}
