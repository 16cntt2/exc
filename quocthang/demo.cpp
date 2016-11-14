#include <iostream>
#include <string>

// 1. Thêm thư viện fstream xử lý file vào
#include <fstream>

using namespace std;

int main()
{
	// 2. Mở file
	fstream f;
	f.open("output.txt", ios::in);

	// 3. Đọc dữ liệu từ file vào string data
	string bum;

	// *** Đọc từng dòng và nối vào data
	string line;
	while (!f.eof())
	{
		getline(f, line);
		bum += line;
	}

	// 4. Đóng file
	f.close();

	// Thể hiện data ra màn hình
	cout << bum;
}
