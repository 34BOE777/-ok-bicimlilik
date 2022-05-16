#include<iostream>
using namespace std;


class dik{
private: 
	int alan;
public:
	dik(int alan):alan(alan){}
	int getalan(){
		return alan;
	}
};

class boya{
public:
	boya(){}
	int maliyet(int a){
		return a*70;
	}
};

class duvar:public dik,public boya{
public:
	duvar(int x):dik(x){}
	
	void yazdir(){
	cout<<"Toplam alan: "<<getalan()<<"\nBoyama maliyeti: "<<maliyet(getalan())<<endl;
	}
};

int main(int argc, char const *argv[])
{
	duvar d;//burada hata veriyor çünkü boş constuctor yok. Ama onu da tanımladığımda hata veriyor. Bunun sebebi nedir bilen var mı?
	duvar d1(35);
	d1.yazdir();
	return 0;
}






