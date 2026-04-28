#include <iostream>
#include <cmath>
using namespace std;

// Forward declaration agar class BelahKetupat dikenali di dalam LayangLayang
class BelahKetupat;

class LayangLayang
{
private:
    double d1, d2, s1, s2;

public:
    // Method untuk input data
    void inputData()
     {
        cout << "--- Input Layang-Layang ---" << endl;
        cout << "Diagonal 1: ";
        cin >> d1;
        cout << "Diagonal 2: ";
        cin >> d2;
        cout << "Sisi Miring 1: ";
        cin >> s1;
        cout << "Sisi Miring 2: ";
        cin >> s2;
    }

    // Method untuk menghitung luas
    double hitungLuas()
    {
        return 0.5 * d1 * d2;
    }

    // Memberikan akses friend kepada class BelahKetupat
    friend class BelahKetupat;

    void outputData()
    {
        cout << "\n--- Hasil Layang-Layang ---" << endl;
        cout << "Luas: " << hitungLuas() << endl;
        // Keliling dihitung melalui object BelahKetupat (sesuai instruksi friend)
    }
};

class BelahKetupat
{
private:
    double d1, d2, sisi;

    public:
    void inputData()
     {
        cout << "\n--- Input Belah Ketupat ---" << endl;
        cout << "Diagonal 1: ";
        cin >> d1;
        cout << "Diagonal 2: ";
        cin >> d2;
        cout << "Sisi: ";
        cin >> sisi;
    }

    double hitungLuas()
    {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling()
    {
        return 4 * sisi;
    }

     // Method khusus untuk menghitung keliling Layang-Layang menggunakan akses friend
    double hitungKelilingLayang(LayangLayang &l)
    {
        return 2 * (l.s1 + l.s2);
    }

    void outputData(LayangLayang &l)
    {
        cout << "\n--- Hasil Belah Ketupat ---" << endl;
        cout << "Luas: " << hitungLuas() << endl;
        cout << "Keliling: " << hitungKeliling() << endl;

        cout << "\n--- Keliling Layang-Layang (via Friend Method) ---" << endl;
        cout << "Keliling: " << hitungKelilingLayang(l) << endl;
    }
};

int main()
{
    LayangLayang layang;
    BelahKetupat ketupat;

    layang.inputData();
    ketupat.inputData();

    layang.outputData();
    ketupat.outputData(layang);

    return 0;
}`