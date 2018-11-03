# UTS_Algoritma

1. SOAL 1

=>> Alur algoritma :

A

1. Memulai program
2. membaca proses X = A dan Y = B
3. kemudian diinput A = 2 dan B = 4
4. jika X tidak sama dengan Y maka jawabannya adalah benar
5. jika X lebih kecil dari Y maka jawabannya adalah benar
6. maka X = X + A = Yaitu (x = 2 + 2 = 4)
7. jika X tidak sama dengan Y maka jawabannya salah
8. mencetak hasil "4",
9. selesai

B

1. Mulai program
2. membaca proses X = A dan Y = B
3. kemudian diinput A = 4 dan B = 7
4. jika X tidak sama dengan Y maka jawabannya adalah benar
5. jika x lebih kecil dari Y maka jawabannya adalah benar
6. maka X = X + A = (x = 4 + 4 = 8)
7. jika x tidak sama dengan Y maka jawabannya salah
8. mencetak hasil "28"
9. selesai


=>> kode C++ program :

#include<iostream>
using namespace std;

int main()
{
    int a,b,x,y;
    cout<<"Program Hitungan"<<endl<<endl;
    cout<<"Input A : ";
    cin>>a;
    cout<<"Input B : ";
    cin>>b;
    x=a;
    y=b;

    while(x!=y){
        if (x<y){
            x=x+a;
        }else{
            y=y+b;
        }
    }
    cout<<"Nilai x = "<<x;
}

=>> Hasil Program :


![hasil_a](https://user-images.githubusercontent.com/43899109/47947600-5fa8a400-df52-11e8-85a7-cb07f7f41af7.png)


![hasil_b](https://user-images.githubusercontent.com/43899109/47947601-620afe00-df52-11e8-866f-1b5d2b4fba56.png)


2. SOAL 2

=>> Alur algoritma :

1. mendeklrasikan int T,X,N,Batas
2. mendeklrasikan variabel T,X sebagai penyimpan nilai
3. mendelrasikan variabel N sebagai inputan
4. menginisialisasi nilai variable batas.
5. Membuat perulangan while dengan kondisi t kurang dari atau sama dengan batas.
6. Membuat statement perulangan jika kondisi bernilai true maka T = N+X dan X=X+10.
7. Jika kondisi false maka keluar dari perulangan dan menampilkan nilai T


=>> kode C++ program :


#include <iostream>

using namespace std;

int main()
{
    int N,X,T,Batas;
    cout<< " Masukan Nilai N :" ;
    cin>> N;
    cout<< endl;

    Batas = N + 100;
    X=20;
    T=N;

    while ( T <= Batas)
    {
        T=T+X;
        X=X+10;
    }
    cout << "Hasilnya Adalah :" << T;
}


=>> hasil screenshoot program :


![hasil_ss](https://user-images.githubusercontent.com/43899109/47947683-8915ff80-df53-11e8-9aa1-6f91964954d4.png)
