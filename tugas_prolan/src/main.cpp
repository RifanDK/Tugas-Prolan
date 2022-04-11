#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas X" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1: {

			string id, nama;
			int dd, mm, yy;
			string nrp, departemen;
			int tahunmasuk, semesterke, skslulus;
			float ipk;

			cout<<"anda memilih menu 1"<<endl;
			cout<<"silakan masukkan data mahasiswa :"<<endl;

			cout<< "nama : ";
			//cin>> nama;
			getline(cin, nama);

			cout<< "id mahasiswa : ";
			cin>> id;

			cout<< "isi tanggal lahir mahasiswa !"<<endl;

			cout<< "tanggal lahir(dd) : ";
			cin>> dd;

			cout<< "bulan lahir(mm) : ";
			cin>> mm;

			cout<< "tahun lahir: ";
			cin>> yy;

			cout<< "NRP : ";
			cin>> nrp;

			cout<< "departemen : ";
			//cin>> departemen;
			getline(cin, departemen);

			cout<< "tahun masuk : ";
			cin>> tahunmasuk;

			//cout<< "semester ke- ";		//digunakan jika dilakukan input semester (smester ditetapkan 1)
			//cin>> semesterke;

			//cout<< "sks telah lulus : ";		//digunakan jika input skslulus (sks lulus ditetapkan 0)
			//cin >> skslulus;

			mahasiswa mahasiswa(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
			recMhs.push_back(mahasiswa);
		}

				break;


			case 2: {

			string id, nama;
			int dd, mm, yy;
			string npp, departemen;
			int pendidikan;

			cout<< "anda memilih menu ke-2"<<endl;
			cout<< "silakan masukkan data dosen!"<<endl;

			cout<< "id dosen : ";
			cin>> id;

			cout<< "nama dosen : ";
			//cin>> nama;
			getline(cin, nama);

			cout<< "silakan masukkan tanggal lahir dosen!"<<endl;

			cout<< "tanggal lahir(dd) : ";
			cin>> dd;

			cout<< "bulan lahir(mm) : ";
			cin>> mm;

			cout<< "tahun lahir(yy) : ";
			cin>> yy;

			cout<< "masukkan NPP dosen : ";
			cin>> npp;

			cout<< "silakan masukkan departemen dosen : ";
			//cin>> departemen;
			getline(cin, departemen);

			cout<< "masukkan pendidikan dosen : S ";
			cin>> pendidikan;

			dosen dosen(id, nama, dd, mm, yy, npp, departemen, pendidikan);
			recDosen.push_back(dosen);
			}
				break;


			case 3: {

			string id, nama;
			int dd, mm, yy;
			string npp, unit;

			cout<< "anda memilih menu 3"<<endl;
			cout<< "silakan masukkan data tendik!"<<endl;

			cout<< "id tendik : ";
			cin>> id;

			cout<< "nama tendik : ";
			//cin>> nama;
			getline(cin, nama);

			cout<< "masukkan tanggal lahir tendik!";

			cout<< "tanggal lahir(dd) : ";
			cin>> dd;
			
			cout<< "bulan lahir(mm) : ";
			cin>> mm;

			cout<< "tahun lahir (yy) : ";
			cin>> yy;

			cout<< "masukkan NPP tendik : ";
			cin>> npp;

			cout<< "masukkan unit tendik : ";
			//cin>> unit;
			getline(cin, unit);

			tendik tendik(id, nama, dd, mm, yy, npp, unit);
			recTendik.push_back(tendik);
		}
				break;

			case 4: {
				
				for(int i=0; i<recMhs.size(); i++) {

						cout<< "Nama: "<< recMhs[i].getNama() << endl;
						cout<< "Tanggal lahir: "<< recMhs[i].getTglLahir()<<endl;
						cout<< "bulan lahir : "<< recMhs[i].getBulanLahir()<<endl;
						cout<< "tahun lahir : "<< recMhs[i].getTahunLahir() << endl;
						cout<< "NRP: "<< recMhs[i].getNRP()<< endl;
						cout<< "Departemen: "<< recMhs[i].getDepartemen()<< endl;
						cout<< "semester : "<<recMhs[i].getSemester()<<endl;

				}
			}

				break;

			case 5: {

				for(int i=0; i<recDosen.size(); i++) {

					cout<< "nama : "<<recDosen[i].getNama() <<endl;
					cout<< "tanggal lahir : "<<recDosen[i].getTglLahir()<<endl;
					cout<< "bulan lahir : "<<recDosen[i].getBulanLahir()<<endl;
					cout<< "tahun lahir : "<<recDosen[i].getTahunLahir()<<endl;
					cout<< " NPP : "<<recDosen[i].getNPP()<<endl;
					cout<< "pendidikan : "<<recDosen[i].getPendidikan()<<endl;
					cout<< "departemen : "<<recDosen[i].getDepartemen()<<endl;

				}
			}
				break;

			case 6: {

				for(int i=0; i<recTendik.size(); i++) {

					cout<< "nama : "<<recTendik[i].getNama() <<endl;
					cout<< "tanggal lahir : "<<recTendik[i].getTglLahir()<<endl;
					cout<< "bulan lahir : "<<recTendik[i].getBulanLahir()<<endl;
					cout<< "tahun lahir : "<<recTendik[i].getTahunLahir()<<endl;
					cout<< "NPP : "<<recTendik[i].getNPP()<<endl;
					cout<< "unit : "<<recTendik[i].getUnit()<<endl;
					
				}
			}
				break;
			
			default :
			
				cout<< "input tidak valid, jangan dilanjutkan";

				break;
		}
	}

	return 0;
}
