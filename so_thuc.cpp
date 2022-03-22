#include<iostream>
using namespace std;
class so_phuc{
    private:
        double a,b;
	public:
        float thuc,ao;
        so_phuc();
        so_phuc(float a, float b);
        float geta();
        void seta(float thuc);
        float getb();
        void setb(float ao);
        void nhap();
        void in();
		so_phuc congsophuc(so_phuc);

       

};
so_phuc::so_phuc(){
    a = 0;
    b = 0;
}
so_phuc::so_phuc(float a,float b){
    a = thuc;
    b = ao;
}
float so_phuc::geta()
{
    return a;
}
float so_phuc::getb()
{
    return b;
}
void so_phuc::seta(float thuc){
    a = thuc;
}
void so_phuc::setb(float ao){
    b =ao;
}

void so_phuc::nhap(){
    cout << "Nhap vao phan thuc : ";cin >> a;
    cout << "Nhap vao phan ao : ";cin >> b;
}
void so_phuc::in(){
        cout << a << "+" << b << "*i" << endl;
}
so_phuc so_phuc::congsophuc(so_phuc s){
    so_phuc cong;
    cong.a = a + s.a;
    cong.b = b + s.b;
    return cong;
}
int main(){
    float thuc,ao;
	so_phuc sp1,sp2,tong;
	sp1.nhap();
	sp2.nhap();
    sp1.in();
    sp2.in();
    tong = sp1.congsophuc(sp2);
    cout << "Tong 2 so phuc vua nhap : ";
    tong.in();
	
}