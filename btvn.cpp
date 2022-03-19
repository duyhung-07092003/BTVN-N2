#include <iostream>
using namespace std;

void menu(){
	cout << "   BAI TAP ITC BUOI 1 " << endl;
	cout << " 1,Chuyen so thanh ten tieng anh  \n";
	cout << " 2,Tinh tien dien \n";
	cout << " 3,Tinh tich p = 2*4*6*....* 2n \n";
	cout << " 4,Ve tam giac có chieu cao n \n";	
}

// chuyên tu sô thu sang thanh tieng anh 
void thu(){
	int t;
	do{
	cout << "Nhap vao so ngay ban muon biet ten : ";
	cin >> t;
	if(t <= 0 || t > 7){
		system("cls");
		cout << "Khong ton tai ngay nay trong tuan \n";
		cout << "Vui long nhap lai !!! \n";
	}
}while(t <= 0 || t >7);
	if(t == 1){
		cout <<"Thu "<< t <<" la Sunday" << endl;
	}
	if(t == 2){
		cout <<"Thu "<< t <<" la Tuesday"<< endl;
	}
	if(t == 3){
		cout <<"Thu "<< t <<" la Wednesday"<< endl;
	}
	if(t == 4){
		cout <<"Thu "<< t <<" la Thursday"<< endl;
	}
	if(t == 5){
		cout <<"Thu "<< t <<" la Friday"<< endl;
	}
	if(t == 6){
		cout <<"Thu "<< t <<" la Friday"<< endl;
	}
	if(t == 7){
		cout <<"Thu "<< t <<" la Friday"<< endl;
	}
}

// Tinh tien dien
void tien_dien(){
	int td;

	do{
	cout << "Nhap vao so KW dien tieu thu : ";
	cin >> td;
	if(td <= 0){
		system("cls");
		cout << "Khong ton tai so KW dien tieu thu \n";
		cout << "Vui long nhap lai !!! \n";
	}
}while(td <= 0);
	if(td <= 100){
		cout << "Tien dien phai tra : " << td * 2000 << endl;
	}else if(td <= 200){
		cout << "Tien dien phai tra : " << 100 * 2000 + (td -100)*2500 << endl;	
	}else if(td <= 300){
		cout << "Tien dien phai tra : " << 100 * 2000 + 100 * 2500 + (td -200)*3000 << endl;	
	}else{
		cout << "Tien dien phai tra : " << 100 * 2000 + 100 * 2500 + 1000*3000 + (td - 300)*2500 << endl;	
	}
}

// tính tich  p = 2*4*6*....* 2n

void tinh_tich(){
	int n;
	int p = 1;
	cout << "Nhap vao n : ";
	cin >> n;
	for(int i = 2; i <= 2*n;i+=2){
		p *= i;
	}
	cout << "Tich p = " << p << endl;
}

// ve tam giac nguoc
void tam_giac(){
	int cc;
    cout << "Nhap chieu cao: ";
    cin >> cc;
    for(int i = cc; i >= 1; i--) {
        for(int j = i; j >= 1; j--) {
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
	back:
		menu();
	char lc;
	int a;
	cout << "Nhap vao lua chon cua ban : ";
	cin >> a;
	switch(a){
		case 1:{
			thu();
			cout << "Ban co muon tiep tuc khong [y/n] ";
			cin >> lc;
			if(lc == 'y' || lc == 'Y'){
				system("cls");
				goto back;
			}
			break;
		}
		case 2:{
			tien_dien();
			cout << "Ban co muon tiep tuc khong [y/n] ";
			cin >> lc;
			if(lc == 'y' || lc == 'Y'){
				system("cls");
				goto back;
			}
			break;
		}
		case 3:{
			tinh_tich();
			cout << "Ban co muon tiep tuc khong [y/n] ";
			cin >> lc;
			if(lc == 'y' || lc == 'Y'){
				system("cls");
				goto back;
			}
			break;
		}
		case 4:{
				tam_giac();
				cout << "Ban co muon tiep tuc khong [y/n] ";
				cin >> lc;
				if(lc == 'y' || lc == 'Y'){
				system("cls");
				goto back;
			}
			break;
		}	
	}
}