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

