#include <iostream>
#include<string>
#include<cmath>
using namespace std;
//Gioi thieu xam xam ve cac phep toan Casio co the thuc hien duoc
void MenuCasio()
{
	cout << "Cac phep tinh may tinh Casio co the thuc hien duoc:" << endl;
	cout << " (+): Tinh tong 2 so" << endl;
	cout << " (-): Tinh hieu 2 so" << endl;
	cout << " (*): Tinh tich 2 so" << endl;
	cout << " (/): Tinh thuong 2 so" << endl;
	cout << " (sin): Tinh sin cua 1 goc" << endl;
	cout << " (cos): Tinh cos cua 1 goc" << endl;
	cout << "Chuong trinh hien tai cua May Tinh Casio con hoi cui, mong quy khach thong cam va chon dung phep toan" << endl;
	cout << "Chung toi se co gang phat trien de nang cap cac tinh nang cho May Tinh Casio trong tuong lai" << endl;

}

string NhapPhepToan()
{
	 string pheptoan;
	cout << "Nhap phep toan ban muon thuc hien: ";
	cin >> pheptoan;
	return pheptoan;
}
//Doan nay de nguoi dung nhap phep toan vao roi so sanh phep toan do voi cac phep toan Casio co the thuc hien



int KiemTraPhepToan(string pheptoan)
{
string arr[] = { "+","-","*","/","sin","cos"};

for (int i = 0; i < 6; i++)
	{
		if (arr[i] == pheptoan)
		{
			return i;
		}
	}
	return -1;
}
//Nhap bien vao de tinh toan
float Nhapbien()
{
	cout << "Nhap bien de tinh: ";
	float x;
	cin >> x;
	return x;

}
// Ham tinh tong, tra ve gia tri tong 2 so x va y
float Tong(float x, float y)
{
	return x + y;
}
//Ham tinh hieu, tra ve gia tri x-y
float Hieu(float x, float y)
{
	return x - y;
}
//Ham tinh tich, tra ve tich cua x va y
float Tich(float x, float y)
{
	return x * y;
}
//Ham tinh thuong, tra ve thuong x/y
float Thuong(float x, float y)
{
	return (x / y);
}
//Ham tinh sin, tra ve gia tri sin(x)
float Sin(float x)
{
	return sin(x);
}
//Ham tinh cos, tra ve cos(x)
float Cos(float x)
{
	return cos(x);
}
//Ham nay tra ve gia tri ket qua
void Showketqua(float ketqua)
{
	cout << "Ket qua la: " << ketqua << endl;;
}
//(1): Tong dai chi Tho Ngoc
void ThoNgoc()
{
	cout << "Chao mung ca be da den voi tong dai chi Tho Ngoc!!!!!!" << endl;
	cout << "O day chang co cai dell gi dau hihi:)))))))" << endl;

}
//(2): Thuat toan, cai nay se phat trien sau
void Thuattoan()
{
	cout << "Tam thoi chuong trinh thuat toan khong su dung duoc, xin vui long su dung cac tinh nang khac" << endl;
	cout << "Nao roi lam sau nhe" << endl;
}
//(3): Chuong trinh may tinh Casio
void Calculator()
{
	cout << " Chao mung cac ban den voi voi Chuong Trinh Tinh Toan Co Ban Cua May Tinh Casio" << endl;
	cout << "********************************************************************************" << endl;
	MenuCasio();// goi ham MenuCasio
	string pheptoan=NhapPhepToan();//Khai bao phep toan can tinh
	float x, y, ketqua;// khai bao cac gia tri bien dau vao, bien ket qua
	//Kiem tra phep toan nhap voi cac phep toan cua may tinh Casio
	int bienkiemtra=KiemTraPhepToan(pheptoan);
	switch (bienkiemtra)
	{
	case 0:
		x = Nhapbien();
		y = Nhapbien();
		ketqua = Tong(x,y);
		break;
	case 1:
		x = Nhapbien();
		y = Nhapbien();
		ketqua = Hieu(x,y);
		break;
	case 2:
		x = Nhapbien();
		y = Nhapbien();
		ketqua = Tich(x,y);
		break;
	case 3:
		x = Nhapbien();
		y = Nhapbien();
		ketqua = Thuong(x,y);
		break;
	case 4:
		x = Nhapbien();
		ketqua = Sin(x);
		break;
	case 5:
		x = Nhapbien();
		ketqua = Cos(x);
		break;
	default:
		system("pause");
		break;
	}
	Showketqua(ketqua);//tra ve ket qua
	system("pause");
	
}
int main()
{
	int choice;// bien de lua chon chuong trinh
	cout << "Chao mung ban da den voi chuong trinh may tinh Casio" << endl;
	cout << "*********************************************************" << endl;
	cout << "Chuong trinh cua may tinh Casio the ki 2023: " << endl;
	cout << " (1): Gap Tong dai chi Tho NGoc." << endl;
	cout << " (2): Thu vien Thuat Toan nguoi dung." << endl;
	cout << " (3): Chuong trinh tinh toan co ban." << endl;
	cout << " (0): Thoat khoi chuong trinh." << endl;
	cout << "Chon chuong trinh cua ban" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		ThoNgoc();
		break;
	case 2:
		Thuattoan();
		break;
	case 3:
		Calculator();
		break;
	default:
		break;
	}
	return 0;
}

