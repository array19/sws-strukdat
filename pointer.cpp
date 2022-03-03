#include <iostream>

using namespace std;

int main()
{
//   pointer introduction
  int cek = 1; //declare var
  int *cekPtr = &cek; //declare pointer
  cout << "nilai dari var: " << cek << endl; //isi dari var
  cout << "alamat dari var: " << &cek << endl; //alamat dari var
  cout << "alamat ptr: " << cekPtr << endl; //(only pointer) = alamat dari pointer 
  cout << "nilai ptr: " << *cekPtr << endl; // *pointer = isi dari alamat pointer 

  // manipulasi alamat pointer
  *cekPtr += 2;
  cout << "nilai dari var: " << cek << endl;
  cout << "nilai pointer skrg: " << *cekPtr << endl; /* ptr mengubah nilai ptr dan var */
  
  cout << "nilai dari var: " << cek << endl;
  *cekPtr += 2;
  cout << "nilai pointer skrg: " << *cekPtr << endl; 
  /* ptr mengubah nilai dari alamat pointer 
  	tanpa mngubah isi variabel */

	//increment||decrement:
	(*cekPtr)++; //masukan pointer kekurung dulu
	cout << "nilai dari var: " << cek << endl;
	(*cekPtr)++; //akan beda satu skrg
  	cout << "nilai pointer skrg: " << *cekPtr << endl; 
  return 0;
}
