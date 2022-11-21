#include <iostream>
#include <windows.h>
#include <thread>
#include "stdafx.h"
#include <chrono>

using namespace std;


void function1()
{
    this_thread::sleep_for(chrono::milliseconds(100));
}
void Spaziovuoto(char matrix [100] [100], int i, char matrixa [39] [100], char matrixb [70] [100])
{
    if (i==0)
    {
        for (int i=0; i<100; i++)
    {
        for(int j=0; j<100; j++)
        {
            matrix [i] [j] = ' ';
        }
    }
    }else if(i==1)
    {
        for (int i=0; i<39; i++)
    {
        for(int j=0; j<100; j++)
        {
            matrixa [i] [j] = ' ';
        }
    }
    }
    if (i==2)
    {
        for (int i=0; i<70; i++)
    {
        for(int j=0; j<100; j++)
        {
            matrixb [i] [j] =' ';
        }
    }
    }


}
struct Song
{

};
void Canzone(Song santa)
{
    Beep(987,250);
    Beep(987,250);
    Beep(987,500);
    Beep(987,250);
    Beep(987,250);
    Beep(987,500);
    Beep(987,250);
    Beep(1174.66,250);
    Beep(783.99,250);
    Beep(880.00,250);
    Beep(987,750);
    Sleep(250);
    Beep(1174.66,250);
    Beep(1174.66,250);
    Beep(1174.66,250);
    Beep(1174.66,250);
    Beep(1174.66,250);
    Beep(987,250);
    Beep(987,250);
    Beep(987,125);
    Beep(987,125);
    Beep(987,250);
    Beep(880,250);
    Beep(880,250);
    Beep(987,250);
    Beep(880,500);
    Beep(1174.66,500);
    Beep(987,250);
    Beep(987,250);
    Beep(987,500);
    Beep(987,250);
    Beep(987,250);
    Beep(987,500);
    Beep(987,250);
    Beep(1174.66,250);
    Beep(783.99,250);
    Beep(880,250);
    Beep(987,750);
    Sleep(250);
    Beep(1046, 250);
    Beep(1046, 250);
    Beep(1046, 250);
    Beep(1046, 250);

    Beep(1046, 250);
    Beep(987, 250);

    Beep(987, 125);
    Beep(987, 125);

    Beep(1174.66,250);
    Beep(1174.66,250);
    Beep(1046, 250);
    Beep(880,250);

    Beep(784, 1000);

    Beep(587,250);
    Beep(987, 250);
    Beep(880,250);
    Beep(784, 1000);

    Beep(587,750);
    Beep(587,125);
    Beep(587,125);

    Beep(587,250);
    Beep(987, 250);
    Beep(880,250);
    Beep(784, 250);

    Beep(659, 750);
    Sleep(250);

    Beep(659, 250);
    Beep(1046, 250);
    Beep(988, 250);
    Beep(880, 250);

    Beep(740,750);
    Sleep(250);

    Beep(1175,250);
    Beep(1175,250);
    Beep(1046, 250);
    Beep(880, 250);

    Beep(988, 750);
    Sleep(250);

    Beep(587,250);
    Beep(988,250);
    Beep(880,250);
    Beep(784,250);

    Beep(587,750);
    Beep(587,125);
    Beep(587,125);

    Beep(587,250);
    Beep(988,250);
    Beep(880,250);
    Beep(784,250);

    Beep(659, 750);
    Beep(659, 250);

    Beep(659, 250);
    Beep(1046, 250);
    Beep(988, 250);
    Beep(880,250);

    Beep(1175,250);
    Beep(1175,250);
    Beep(1175,250);
    Beep(1175,250);

    Beep(1319,250);
    Beep(1175,250);
    Beep(1046,250);
    Beep(880,250);

    Beep(784,500);
    Beep(1175,500);
    Beep(987,250);
    Beep(987,250);
    Beep(987,500);
    Beep(987,250);
    Beep(987,250);
    Beep(987,500);
    Beep(987,250);
    Beep(1174.66,250);
    Beep(783.99,250);
    Beep(880.00,250);
    Beep(987,750);
    Sleep(250);
    Beep(1174.66,250);
    Beep(1174.66,250);
    Beep(1174.66,250);
    Beep(1174.66,250);
    Beep(1174.66,250);
    Beep(987,250);
    Beep(987,250);
    Beep(987,125);
    Beep(987,125);
    Beep(987,250);
    Beep(880,250);
    Beep(880,250);
    Beep(987,250);
    Beep(880,500);
    Beep(1174.66,500);
    Beep(987,250);
    Beep(987,250);
    Beep(987,500);
    Beep(987,250);
    Beep(987,250);
    Beep(987,500);
    Beep(987,250);
    Beep(1174.66,250);
    Beep(783.99,250);
    Beep(880,250);
    Beep(987,750);
    Sleep(250);
    Beep(1046, 250);
    Beep(1046, 250);
    Beep(1046, 250);
    Beep(1046, 250);

    Beep(1046, 250);
    Beep(987, 250);

    Beep(987, 125);
    Beep(987, 125);

    Beep(1174.66,250);
    Beep(1174.66,250);
    Beep(1046, 250);
    Beep(880,250);

    Beep(784, 1000);

    Beep(587,250);
    Beep(987, 250);
    Beep(880,250);
    Beep(784, 1000);

    Beep(587,750);
    Beep(587,125);
    Beep(587,125);

    Beep(587,250);
    Beep(987, 250);
    Beep(880,250);
    Beep(784, 250);

    Beep(659, 750);
    Sleep(250);

    Beep(659, 250);
    Beep(1046, 250);
    Beep(988, 250);
    Beep(880, 250);

    Beep(740,750);
    Sleep(250);

    Beep(1175,250);
    Beep(1175,250);
    Beep(1046, 250);
    Beep(880, 250);

    Beep(988, 750);
    Sleep(250);

    Beep(587,250);
    Beep(988,250);
    Beep(880,250);
    Beep(784,250);

    Beep(587,750);
    Beep(587,125);
    Beep(587,125);

    Beep(587,250);
    Beep(988,250);
    Beep(880,250);
    Beep(784,250);

    Beep(659, 750);
    Beep(659, 250);

    Beep(659, 250);
    Beep(1046, 250);
    Beep(988, 250);
    Beep(880,250);

    Beep(1175,250);
    Beep(1175,250);
    Beep(1175,250);
    Beep(1175,250);

    Beep(1319,250);
    Beep(1175,250);
    Beep(1046,250);
    Beep(880,250);

    Beep(784,500);
    Beep(1175,500);
}

void animazionebase1 (char matrix [100] [100])
{
    matrix[98] [0]='|';
    matrix[99] [0]='|';
    matrix[98] [99]='|';
    matrix[99] [99]='|';
    for (int i=97;i>83;i--)
    {
        matrix [i] [10]='|';
    }
    for (int i=97;i>83;i--)
    {
        matrix [i] [27]='|';
    }
    for (int i=27; i>=10; i--)
    {
        matrix [83] [i]='_';
    }
    matrix [85] [12]='#';
    matrix [85] [13]='#';
    matrix [85] [14]='#';
    matrix [86] [14]='#';
    matrix [87] [14]='#';
    matrix [87] [13]='#';
    matrix [87] [12]='#';
    matrix [88] [12]='#';
    matrix [89] [12]='#';
    matrix [90] [12]='#';
    matrix [90] [13]='#';
    matrix [90] [14]='#';
    matrix [85] [18]='#';
    matrix [86] [17]='#';
    matrix [87] [16]='#';
    matrix [88] [16]='#';
    matrix [88] [17]='#';
    matrix [88] [18]='#';
    matrix [87] [18]='#';
    matrix [89] [18]='#';
    matrix [90] [18]='#';

    matrix [91] [20]='#';
    matrix [92] [20]='#';
    matrix [92] [19]='#';
    matrix [93] [20]='#';
    matrix [94] [20]='#';
    matrix [95] [20]='#';
    matrix [96] [19]='#';
    matrix [96] [20]='#';
    matrix [96] [21]='#';
    matrix [91] [23]='#';
    matrix [91] [24]='#';
    matrix [91] [25]='#';
    matrix [92] [25]='#';
    matrix [93] [25]='#';
    matrix [93] [24]='#';
    matrix [93] [23]='#';
    matrix [94] [23]='#';
    matrix [95] [23]='#';
    matrix [96] [23]='#';
    matrix [96] [24]='#';
    matrix [96] [25]='#';


    for (int i=97;i>89;i--)
    {
        matrix [i] [78]='|';
    }
    for (int i=97;i>89;i--)
    {
        matrix [i] [98]='|';
    }
    for (int i=98; i>=78;i--)
    {
        matrix [89] [i]='_';
    }
    matrix [91] [80]='#';
    matrix [91] [81]='#';
    matrix [91] [82]='#';
    matrix [92] [82]='#';
    matrix [93] [82]='#';
    matrix [93] [81]='#';
    matrix [93] [80]='#';
    matrix [94] [80]='#';
    matrix [95] [80]='#';
    matrix [96] [80]='#';
    matrix [96] [81]='#';
    matrix [96] [82]='#';
    matrix [91] [84]='#';
    matrix [91] [85]='#';
    matrix [91] [86]='#';
    matrix [92] [86]='#';
    matrix [93] [86]='#';
    matrix [94] [86]='#';
    matrix [95] [86]='#';
    matrix [96] [86]='#';
    matrix [93] [85]='#';
    matrix [93] [84]='#';
    matrix [96] [85]='#';
    matrix [96] [84]='#';

    matrix [92] [88]='#';
    matrix [95] [88]='#';

    matrix [91] [90]='#';
    matrix [91] [91]='#';
    matrix [91] [92]='#';
    matrix [92] [90]='#';
    matrix [93] [90]='#';
    matrix [93] [91]='#';
    matrix [93] [92]='#';
    matrix [94] [92]='#';
    matrix [95] [92]='#';
    matrix [96] [92]='#';
    matrix [96] [91]='#';
    matrix [96] [90]='#';
    matrix [91] [94]='#';
    matrix [91] [95]='#';
    matrix [91] [96]='#';
    matrix [92] [94]='#';
    matrix [92] [96]='#';
    matrix [93] [94]='#';
    matrix [93] [96]='#';
    matrix [93] [95]='#';
    matrix [94] [96]='#';
    matrix [95] [96]='#';
    matrix [96] [96]='#';
    matrix [96] [95]='#';
    matrix [96] [94]='#';
    for (int i=94;i>=85;i--)
    {
        for (int j=57;j>=43;j--)
        {
            matrix [i] [j]='O';
        }
    }
    for (int i=56;i>=44;i--)
    {
        matrix [95] [i]='O';
    }
    for (int i=55;i>=45;i--)
    {
        matrix [96] [i]='O';
    }
    for (int i=55;i>=45;i--)
    {
        matrix [97] [i]='O';
    }
    for (int i=89;i>=85;i--)
    {
        matrix [i] [42]='O';
    }
    for (int i=88;i>=85;i--)
    {
        matrix [i] [41]='O';
    }
     for (int i=87;i>=85;i--)
    {
        matrix [i] [40]='O';
    }
     for (int i=87;i>=85;i--)
    {
        matrix [i] [39]='O';
    }

    for (int i=89;i>=85;i--)
    {
        matrix [i] [58]='O';
    }
    for (int i=88;i>=85;i--)
    {
        matrix [i] [59]='O';
    }
     for (int i=87;i>=85;i--)
    {
        matrix [i] [60]='O';
    }
     for (int i=87;i>=85;i--)
    {
        matrix [i] [61]='O';
    }
    for (int i=84;i>=78;i--)
    {
        matrix [i] [50]='|';
    }
    for (int i=84;i>=78;i--)
    {
        matrix [i] [51]='|';
    }
    matrix [81] [49]='/';
    matrix [80] [49]='/';
    matrix [81] [48]='/';
    matrix [80] [48]='/';
    matrix [80] [47]='/';
    matrix [79] [48]='/';
    matrix [79] [47]='/';

    matrix [82] [52]='/';
    matrix [82] [53]='/';
    matrix [81] [52]='/';
    matrix [81] [53]='/';
    matrix [81] [54]='/';
    matrix [80] [53]='/';
    matrix [80] [54]='/';

    matrix [73] [49]='+';
    matrix [72] [49]='+';
    matrix [71] [49]='+';
    matrix [70] [49]='+';

    matrix [73] [50]='+';
    matrix [72] [50]='+';
    matrix [71] [50]='+';
    matrix [70] [50]='+';

    matrix [73] [51]='+';
    matrix [72] [51]='+';
    matrix [71] [51]='+';
    matrix [70] [51]='+';

    matrix [73] [52]='+';
    matrix [72] [52]='+';
    matrix [71] [52]='+';
    matrix [70] [52]='+';

    matrix [69] [49]='+';
    matrix [69] [50]='+';
    matrix [69] [51]='+';
    matrix [69] [52]='+';

    matrix [74] [50]='/';
    matrix [74] [51]='\\';
    matrix [75] [49]='/';
    matrix [75] [52]='\\';
    matrix [76] [49]='|';
    matrix [76] [52]='|';
    matrix [77] [49]='\\';
    matrix [77] [52]='/';
    matrix [77] [50]='_';
    matrix [77] [51]='_';

    matrix [73] [53]='\\';
    matrix [74] [54]='\\';
    matrix [75] [55]='\\';
    matrix [76] [55]='|';
    matrix [76] [54]='_';
    matrix [76] [53]='\\';

    matrix [76] [48]='/';
    matrix [76] [47]='_';
    matrix [76] [46]='|';
    matrix [75] [46]='/';
    matrix [74] [47]='/';
    matrix [73] [48]='/';

    matrix [72] [48]='-';
    matrix [72] [47]='-';
    matrix [72] [46]='-';
    matrix [70] [48]='-';
    matrix [70] [47]='-';
    matrix [70] [46]='-';
    matrix [70] [45]='/';
    matrix [72] [45]='\\';
    matrix [71] [45]='|';

    matrix [72] [53]='-';
    matrix [72] [54]='-';
    matrix [72] [55]='-';
    matrix [70] [53]='-';
    matrix [70] [54]='-';
    matrix [70] [55]='-';
    matrix [70] [56]='\\';
    matrix [72] [56]='/';
    matrix [71] [56]='|';

    matrix [69] [48]='\\';
    matrix [68] [47]='\\';
    matrix [67] [46]='\\';
    matrix [66] [46]='|';
    matrix [66] [47]='-';
    matrix [66] [48]='\\';
    matrix [67] [49]='\\';
    matrix [68] [50]='\\';

    matrix [69] [53]='/';
    matrix [68] [54]='/';
    matrix [67] [55]='/';
    matrix [66] [55]='|';
    matrix [66] [54]='-';
    matrix [66] [53]='/';
    matrix [67] [52]='/';
    matrix [68] [51]='/';
    matrix [66] [52]='|';
    matrix [66] [49]='|';
    matrix [65] [49]='/';
    matrix [65] [50]='-';
    matrix [65] [51]='-';
    matrix [65] [52]='\\';
}

void change1(char matrix [100] [100])
{
    for (int i=96;i>=91;i--)
    {
        matrix [i] [80]='#';
    }
    for (int i=96;i>=91;i--)
    {
        matrix [i] [82]='#';
    }
    matrix [93] [81]=' ';
    for (int i=96;i>=91;i--)
    {
        matrix [i] [84]='#';
    }
    matrix [93] [85]=' ';
    for (int i=96;i>=91;i--)
    {
        matrix [i] [90]='#';
    }
    for (int i=96;i>=91;i--)
    {
        matrix [i] [92]='#';
    }
    matrix [93] [91]=' ';
    for (int i=96;i>=91;i--)
    {
        matrix [i] [94]='#';
    }
    matrix [93] [95]=' ';
    for(int i=85;i<=90;i++)
    {
        for (int j=16;j<=18;j++)
        {
            matrix [i] [j]=' ';
        }
    }
    matrix [85] [16]='#';
    matrix [85] [17]='#';
    matrix [85] [18]='#';
    matrix [86] [16]='#';
    matrix [87] [16]='#';
    matrix [87] [17]='#';
    matrix [87] [18]='#';
    matrix [88] [18]='#';
    matrix [89] [18]='#';
    matrix [90] [18]='#';
    matrix [90] [17]='#';
    matrix [90] [16]='#';


}

/*void clock(char matrix [100] [100]) Lampeggio dei due puntini
{
    matrix [95] [88]=' ';
    matrix [92] [88]=' ';
    system("cls");
    for (int i=0;i<100;i++)
    {
        for (int j=0;j<100;j++)
        {
            cout << matrix [i] [j];
        }
        cout << endl;
    }
    Sleep(1000);
    matrix [95] [88]='#';
    matrix [92] [88]='#';
    system("cls");
    for (int i=0;i<100;i++)
    {
        for (int j=0;j<100;j++)
        {
            cout << matrix [i] [j];
        }
        cout << endl;
    }
}*/



void animazione (char matrix [100] [100],int i, char matrixa [39] [100], char matrixb [70] [100])
{
    if (i==0)
    {
        for (int i=0;i<100;i++)
      {
        for (int j=0;j<100;j++)
        {
            cout << matrix [i] [j];
        }
        cout << endl;
      }
    }
    else if (i==1)
    {
        for (int i=0;i<39;i++)
      {
        for (int j=0;j<100;j++)
        {
            cout << matrixa [i] [j];
        }
        cout << endl;
      }
    }
    else{
        for (int i=0;i<70;i++)
      {
        for (int j=0;j<100;j++)
        {
            cout << matrixb [i] [j];
        }
        cout << endl;
      }
    }




}

void animazione2 (char matrixa [39] [100], char matrixb[70] [100])
{
    matrixa [9] [8] = '/';
matrixa [9] [9] = '-';
matrixa [9] [10] = '-';
matrixa [9] [11] = '-';
matrixa [9] [12] = '-'; //riga 9 slitta
matrixa [9] [12] = '-';
matrixa [9] [13] = '-';
matrixa [9] [14] = '-';
matrixa [9] [15] = '-';
matrixa [9] [46] = '/';
matrixa [9] [47] = '-';
matrixa [9] [48] = '-';
matrixa [9] [49] = '\\';

matrixa [10] [7] = '/';
matrixa [10] [8] = 'O';
matrixa [10] [9] = 'O';
matrixa [10] [10] = 'O';
matrixa [10] [11] = 'O';
matrixa [10] [12] = 'O'; //riga 10 slitta
matrixa [10] [13] = 'O';
matrixa [10] [14] = 'O';
matrixa [10] [15] = 'O';
matrixa [10] [16] = 'O';
matrixa [10] [17] = '\\';
matrixa [10] [45] = '/';
matrixa [10] [46] = 'O';
matrixa [10] [47] = 'O';
matrixa [10] [48] = 'O';
matrixa [10] [49] = '|';

matrixa [11] [7] = '\\';
matrixa [11] [8] = 'O';
matrixa [11] [9] = 'O';
matrixa [11] [10] = 'O';
matrixa [11] [11] = 'O';
matrixa [11] [12] = 'O'; //riga 11 slitta
matrixa [11] [13] = 'O';
matrixa [11] [14] = 'O';
matrixa [11] [15] = 'O';
matrixa [11] [16] = 'O';
matrixa [11] [17] = '|';
matrixa [11] [45] = '|';
matrixa [11] [46] = 'O';
matrixa [11] [47] = 'O';
matrixa [11] [48] = 'O';
matrixa [11] [49] = '/';

matrixa [12] [8] = '\\';
matrixa [12] [9] = '-';
matrixa [12] [10] = '-';
matrixa [12] [11] = '-';
matrixa [12] [12] = '-';
matrixa [12] [13] = '\\';
matrixa [12] [14] = 'O'; //riga 12 slitta
matrixa [12] [15] = 'O';
matrixa [12] [16] = 'O';
matrixa [12] [17] = '\\';
matrixa[12] [18] = '-';
matrixa [12] [19] = '\\';
matrixa [12] [43] = '-';
matrixa[12] [44] = '/';
matrixa [12] [45] = 'O';
matrixa [12] [46] = 'O';
matrixa [12] [47] = 'O';
matrixa [12] [48] = '/';


matrixa [13] [13] = '|';
matrixa [13] [14] = 'O';
matrixa [13] [15] = 'O';
matrixa[13] [16] = 'O'; //riga 13 slitta
matrixa [13] [17] = 'O';
matrixa [13] [18] = 'O';
matrixa [13] [19] = '|';
matrixa [13] [42] = '/';
matrixa [13] [43] = 'O';
matrixa [13] [44] = 'O';
matrixa [13] [45] = 'O';
matrixa [13] [46] = '-';
matrixa [13] [47] = '/';

matrixa [14] [13] = '|';
matrixa [14] [14] = 'O';
matrixa [14] [15] = 'O';
matrixa [14] [16] = 'O'; //riga 14 slitta
matrixa [14] [17] = 'O';
matrixa [14] [18] = 'O';
matrixa [14] [19] = '|';
matrixa [14] [41] = '-';
matrixa [14] [42] = '|';
matrixa [14] [43] = 'O';
matrixa [14] [44] = 'O';
matrixa [14] [45] = '/';

matrixa [15] [13] = '|';
matrixa [15] [14] = 'O';
matrixa [15] [15] = 'O';
matrixa [15] [16] = 'O'; //riga 15 slitta
matrixa [15] [17] = 'O';
matrixa [15] [18] = 'O';
matrixa [15] [19] = '|';
matrixa [15] [40] = '/';
matrixa [15] [41] = 'O';
matrixa [15] [42] = 'O';
matrixa [15] [43] = 'O';
matrixa [15] [44] = '/';

matrixa [16] [13] = '|';
matrixa [16] [14] = 'O';
matrixa [16] [15] = 'O';
matrixa [16] [16] = 'O'; //riga 16 slitta
matrixa [16] [17] = 'O';
matrixa [16] [18] = 'O';
matrixa [16] [19] = '\\';
matrixa [16] [20] = '-';
matrixa [16] [21] = '-';
matrixa [16] [22] = '-';
matrixa [16] [23] = '\\';
matrixa [16] [40] = '|';
matrixa [16] [41] = 'O';
matrixa [16] [42] = 'O';
matrixa [16] [43] = 'O';
matrixa [16] [44] = '|';

matrixa [17] [11] = '/';
matrixa [17] [12] = '_';
matrixa [17] [13] = '/';
matrixa [17] [14] = 'O';
matrixa [17] [15] = 'O';
matrixa [17] [16] = 'O'; //riga 17 slitta
matrixa [17] [17] = 'O';
matrixa [17] [18] = 'O';
matrixa [17] [19] = 'O';
matrixa [17] [20] = 'O';
matrixa [17] [21] = 'O';
matrixa [17] [22] = 'O';
matrixa [17] [23] = '|';
matrixa [17] [40] = '|';
matrixa [17] [41] = 'O';
matrixa [17] [42] = 'O';
matrixa [17] [43] = 'O';
matrixa [17] [44] = '|';

matrixa [18] [11] = '|';
matrixa [18] [12] = 'O';
matrixa [18] [13] = 'O';
matrixa [18] [14] = 'O';
matrixa [18] [15] = 'O';
matrixa [18] [16] = 'O'; //riga 18 slitta
matrixa [18] [17] = 'O';
matrixa [18] [18] = 'O';
matrixa [18] [19] = 'O';
matrixa [18] [20] = 'O';
matrixa [18] [21] = 'O';
matrixa [18] [22] = 'O';
matrixa [18] [23] = '|';
matrixa [18] [40] = '|';
matrixa [18] [41] = 'O';
matrixa [18] [42] = 'O';
matrixa [18] [43] = 'O';
matrixa [18] [44] = '\\';

matrixa [19] [11] = '|';
matrixa [19] [12] = 'O';
matrixa [19] [13] = 'O';
matrixa [19] [14] = 'O';
matrixa [19] [15] = 'O';
matrixa [19] [16] = 'O'; //riga 19 slitta
matrixa [19] [17] = 'O';
matrixa [19] [18] = 'O';
matrixa [19] [19] = 'O';
matrixa [19] [20] = 'O';
matrixa [19] [21] = 'O';
matrixa [19] [22] = 'O';
matrixa [19] [23] = '|';
matrixa [19] [40] = '|';
matrixa [19] [41] = 'O';
matrixa [19] [42] = 'O';
matrixa [19] [43] = 'O';
matrixa [19] [44] = 'O';
matrixa [19] [45] = '\\';

matrixa [20] [11] = '/';
matrixa [20] [12] = 'O';
matrixa [20] [13] = 'O';
matrixa [20] [14] = 'O';
matrixa [20] [15] = 'O';
matrixa [20] [16] = 'O'; //riga 20 slitta
matrixa [20] [17] = 'O';
matrixa [20] [18] = 'O';
matrixa [20] [19] = 'O';
matrixa [20] [20] = 'O';
matrixa [20] [21] = 'O';
matrixa [20] [22] = 'O';
matrixa [20] [23] = '\\';
matrixa [20] [24] = '-';
matrixa [20] [25] = '-';
matrixa [20] [26] = '-';
matrixa [20] [27] = '-';
matrixa [20] [28] = '-';
matrixa [20] [29] = '\\';
matrixa [20] [40] = '|';
matrixa [20] [41] = 'O';
matrixa [20] [42] = 'O';
matrixa [20] [43] = 'O';
matrixa [20] [44] = 'O';
matrixa [20] [45] = 'O';
matrixa [20] [46] = '\\';

matrixa [21] [10] = '/';
for (int i=28;i>=11;i--)
{
        matrixa [21] [i]='O';
}
matrixa [21] [29] = '|';
matrixa [21] [40] = '|';
matrixa [21] [41] = 'O';
matrixa [21] [42] = 'O';
matrixa [21] [43] = 'O';
matrixa [21] [44] = 'O';
matrixa [21] [45] = 'O';
matrixa [21] [46] = '|';

matrixa [22] [10] = '|';
for (int i=28;i>=11;i--)
{
        matrixa [22] [i]='O';
}
matrixa [22] [29] = '|';
matrixa [22] [40] = '|';
matrixa [22] [41] = 'O';
matrixa [22] [42] = 'O';
matrixa [22] [43] = 'O';
matrixa [22] [44] = 'O';
matrixa [22] [45] = 'O';
matrixa [22] [46] = '|';

matrixa [23] [10] = '|';
for (int i=28;i>=11;i--)
{
        matrixa [23] [i]='O';
}
matrixa [23] [29] = '|';
matrixa [23] [40] = '|';
matrixa [23] [41] = 'O';
matrixa [23] [42] = 'O';
matrixa [23] [43] = 'O';
matrixa [23] [44] = 'O';
matrixa [23] [45] = 'O';
matrixa [23] [46] = '|';

matrixa [24] [10] = '|';
for (int i=28;i>=11;i--)
{
        matrixa [24] [i]='O';
}

matrixa [24] [29] = '|';
matrixa [24] [40] = '|';
matrixa [24] [41] = 'O';
matrixa [24] [42] = 'O';
matrixa [24] [43] = 'O';
matrixa [24] [44] = 'O';
matrixa [24] [45] = 'O';
matrixa [24] [46] = '|';

matrixa [25] [10] = '|';
for (int i=28;i>=11;i--)
{
        matrixa [25] [i]='O';
}

matrixa [25] [29] = '|';
matrixa [25] [31] = '-';
matrixa [25] [32] = '-';
matrixa [25] [33] = '-';
matrixa [25] [34] = '-';
matrixa [25] [35] = '-';
matrixa [25] [36] = '-';
matrixa [25] [37] = '-';
matrixa [25] [38] = '-';
matrixa [25] [39] = '-';
matrixa [25] [40] = '|';
matrixa [25] [41] = 'O';
matrixa [25] [42] = 'O';
matrixa [25] [43] = 'O';
matrixa [25] [44] = 'O';
matrixa [25] [45] = 'O';
matrixa [25] [46] = '|';

matrixa [26] [10] = '|';
for (int i=44;i>=11;i--)
{
    if(i!=30)
    {
        matrixa [26] [i]='O';
    }
}
matrixa [26] [45] = '/';

matrixa [27] [11] = '\\';
matrixa [27] [12] = '_';
matrixa [27] [13] = '\\';
matrixa [27] [14] = 'O';
matrixa [27] [15] = 'O';
matrixa [27] [16] = 'O'; //riga 27 slitta
matrixa [27] [17] = 'O';
matrixa [27] [18] = 'O';
matrixa [27] [19] = 'O';
matrixa [27] [20] = 'O';
matrixa [27] [21] = 'O';
matrixa [27] [22] = 'O';
matrixa [27] [23] = 'O';
matrixa [27] [24] = 'O';
matrixa [27] [25] = 'O';
matrixa [27] [26] = 'O';
matrixa [27] [27] = 'O';
matrixa [27] [28] = 'O';
matrixa [27] [29] = 'O';

for (int i=43;i>=31;i--)
{
    matrixa[27] [i]='O';
}
matrixa [27] [44] = '/';

matrixa [28] [13] = '|';

for (int i=42;i>=14;i--)
{
    if(i!=30)
    {
        matrixa [28] [i]='O';
    }
}

matrixa [28] [43] = '/';

matrixa [29] [13] = '|';
for (int i=42;i>=14;i--)
{
    if(i!=30)
    {
        matrixa [29] [i]='O';
    }
}
matrixa [29] [43] = '|';

matrixa [30] [13] = '|';
for (int i=42;i>=14;i--)
{
    if(i!=30)
    {
        matrixa [30] [i]='O';
    }
}
matrixa [30] [43] = '/';

matrixa [31] [7] = '/';
matrixa [31] [8] = '-';
matrixa [31] [9] = '-';
matrixa [31] [10] = '-';
matrixa [31] [11] = '-';
matrixa [31] [12] = '-';
matrixa [31] [13] = '/';
matrixa [31] [14] = 'O';
matrixa [31] [15] = 'O';
matrixa [31] [16] = 'O'; //riga 31 slitta
matrixa [31] [17] = 'O';
matrixa [31] [18] = 'O';
matrixa [31] [19] = 'O';
matrixa [31] [20] = 'O';
matrixa [31] [21] = 'O';
matrixa [31] [22] = 'O';
matrixa [31] [23] = 'O';
matrixa [31] [24] = 'O';
matrixa [31] [25] = 'O';
matrixa [31] [26] = 'O';
matrixa [31] [27] = 'O';
matrixa [31] [28] = 'O';
matrixa [31] [29] = 'O';
matrixa [31] [31] = 'O';
matrixa [31] [32] = 'O';
matrixa [31] [33] = 'O';
matrixa [31] [34] = 'O';
matrixa [31] [35] = 'O';
matrixa [31] [36] = 'O';
matrixa [31] [37] = 'O';
matrixa [31] [38] = 'O';
matrixa [31] [39] = 'O';
matrixa [31] [40] = 'O';
matrixa [31] [41] = 'O';
matrixa [31] [42] = '/';

matrixa [32] [7] = '|';
matrixa [32] [8] = 'O';
matrixa [32] [9] = 'O';
matrixa [32] [10] = '0';
matrixa [32] [11] = '0';
matrixa [32] [12] = 'O';
matrixa [32] [13] = 'O';
matrixa [32] [14] = 'O';
matrixa [32] [15] = 'O';
matrixa [32] [16] = 'O'; //riga 32 slitta
matrixa [32] [17] = 'O';
matrixa [32] [18] = 'O';
matrixa [32] [19] = 'O';
matrixa [32] [20] = 'O';
matrixa [32] [21] = 'O';
matrixa [32] [22] = 'O';
matrixa [32] [23] = 'O';
matrixa [32] [24] = 'O';
matrixa [32] [25] = 'O';
matrixa [32] [26] = 'O';
matrixa [32] [27] = 'O';
matrixa [32] [28] = 'O';
matrixa [32] [29] = 'O';
matrixa [32] [31] = 'O';
matrixa [32] [32] = 'O';
matrixa [32] [33] = 'O';
matrixa [32] [34] = 'O';
matrixa [32] [35] = 'O';
matrixa [32] [36] = 'O';
matrixa [32] [37] = 'O';
matrixa [32] [38] = 'O';
matrixa [32] [39] = 'O';
matrixa [32] [40] = 'O';
matrixa [32] [41] = '/';

matrixa [33] [7] = '\\';
matrixa [33] [8] = '-';
matrixa [33] [9] = '-';
matrixa [33] [10] = '-';
matrixa [33] [11] = '-';
matrixa [33] [12] = '-';
matrixa [33] [13] = '-';
matrixa [33] [14] = '-';
matrixa [33] [15] = '-';
matrixa [33] [16] = '-'; //riga 33 slitta
matrixa [33] [17] = '-';
matrixa [33] [18] = '-';
matrixa [33] [19] = '-';
matrixa [33] [20] = '-';
matrixa [33] [21] = '-';
matrixa [33] [22] = '-';
matrixa [33] [23] = '-';
matrixa [33] [24] = '-';
matrixa [33] [25] = '-';
matrixa [33] [26] = '-';
matrixa [33] [27] = '-';
matrixa [33] [28] = '-';
matrixa [33] [29] = '-';
matrixa [33] [31] = '-';
matrixa [33] [32] = '-';
matrixa [33] [33] = '-';
matrixa [33] [34] = '-';
matrixa [33] [35] = '-';
matrixa [33] [36] = '-';
matrixa [33] [37] = '-';
matrixa [33] [38] = '-';
matrixa [33] [39] = '-';
matrixa [33] [40] = '/';

matrixa [34] [11] = '|';
matrixa [34] [12] = '|';
matrixa [34] [19] = '|';
matrixa [34] [20] = '|'; //riga 34 slitta
matrixa [34] [27] = '|';
matrixa [34] [28] = '|';
matrixa [34] [35] = '|';
matrixa [34] [36] = '|';

matrixa [35] [4] = '/';
matrixa [35] [5] = '-';
matrixa [35] [6] = '-';
matrixa [35] [7] = '-';
matrixa [35] [8] = '-';
matrixa [35] [9] = '-';
matrixa [35] [10] = '-';
matrixa [35] [11] = '-';
matrixa [35] [12] = '-';
matrixa [35] [13] = '-';
matrixa [35] [14] = '-';
matrixa [35] [15] = '-';
matrixa [35] [16] = '-'; //riga 35 slitta
matrixa [35] [17] = '-';
matrixa [35] [18] = '-';
matrixa [35] [19] = '-';
matrixa [35] [20] = '-';
matrixa [35] [21] = '-';
matrixa [35] [22] = '-';
matrixa [35] [23] = '-';
matrixa [35] [24] = '-';
matrixa [35] [25] = '-';
matrixa [35] [26] = '-';
matrixa [35] [27] = '-';
matrixa[35] [28] = '-';
matrixa [35] [29] = '-';
matrixa [35] [31] = '-';
matrixa [35] [32] = '-';
matrixa [35] [33] = '-';
matrixa [35] [34] = '-';
matrixa [35] [35] = '-';
matrixa [35] [36] = '-';
matrixa [35] [37] = '-';
matrixa [35] [38] = '-';
matrixa [35] [39] = '-';
matrixa [35] [40] = '-';
matrixa [35] [41] = '-';
matrixa [35] [42] = '-';
matrixa [35] [43] = '-';
matrixa [35] [44] = '-';
matrixa [35] [45] = '-';
matrixa [35] [46] = '-';
matrixa [35] [47] = '\\';

matrixa [36] [4] = '|'; //riga 36 slitta
matrixa [36] [47] = '|';

matrixa [37] [4] = '\\';
matrixa [37] [5] = '-';
matrixa [37] [6] = '-';
matrixa [37] [7] = '-';
matrixa [37] [8] = '-';
matrixa [37] [9] = '-';
matrixa [37] [10] = '-';
matrixa [37] [11] = '-';
matrixa [37] [12] = '-';
matrixa [37] [13] = '-';
matrixa [37] [14] = '-';
matrixa [37] [15] = '-';
matrixa [37] [16] = '-'; //riga 37 slitta
matrixa [37] [17] = '-';
matrixa [37] [18] = '-';
matrixa [37] [19] = '-';
matrixa [37] [20] = '-';
matrixa [37] [21] = '-';
matrixa [37] [22] = '-';
matrixa [37] [23] = '-';
matrixa [37] [24] = '-';
matrixa [37] [25] = '-';
matrixa [37] [26] = '-';
matrixa [37] [27] = '-';
matrixa [37] [28] = '-';
matrixa [37] [29] = '-';
matrixa [37] [31] = '-';
matrixa [37] [32] = '-';
matrixa [37] [33] = '-';
matrixa [37] [34] = '-';
matrixa [37] [35] = '-';
matrixa [37] [36] = '-';
matrixa [37] [37] = '-';
matrixa [37] [38] = '-';
matrixa [37] [39] = '-';
matrixa [37] [40] = '-';
matrixa [37] [41] = '-';
matrixa [37] [42] = '-';
matrixa [37] [43] = '-';
matrixa [37] [44] = '-';
matrixa [37] [45] = '-';
matrixa [37] [46] = '-';
matrixa [37] [47] = '/';

matrixa [7] [80] = '|';
matrixa [7] [81] = '\\'; //riga 7 renna
matrixa [7] [84] = '|';
matrixa [7] [85] = '\\';

matrixa [8] [80] = '|';
matrixa [8] [81] = 'O'; //riga 8 renna
matrixa [8] [82] = '\\';
matrixa [8] [84] = '|';
matrixa [8] [85] = 'O';
matrixa [8] [86] = '\\';

matrixa [9] [80] = '|';
matrixa [9] [81] = 'O'; //riga 9 renna
matrixa [9] [82] = 'O';
matrixa [9] [83] = '\\';
matrixa [9] [84] = '|';
matrixa [9] [85] = 'O';
matrixa [9] [86] = 'O';
matrixa [9] [87] = '\\';

matrixa [10] [80] = '|';
matrixa [10] [81] = 'O'; //riga 10 renna
matrixa [10] [82] = 'O';
matrixa [10] [83] = 'O';
matrixa [10] [84] = '\\';
matrixa [10] [85] = 'O';
matrixa [10] [86] = 'O';
matrixa [10] [87] = '|';

matrixa [11] [81] = '-';
matrixa [11] [82] = 'O';
matrixa [11] [83] = 'O'; //riga 11 renna
matrixa [11] [84] = 'O';
matrixa [11] [85] = 'O';
matrixa [11] [86] = 'O';
matrixa [11] [87] = '|';

matrixa [12] [82] = '\\';
matrixa [12] [83] = '_'; //riga 12 renna
matrixa [12] [84] = 'O';
matrixa [12] [85] = 'O';
matrixa [12] [86] = 'O';
matrixa [12] [87] = '|';
matrixa [12] [88] = '-';
matrixa [12] [89] = '-';
matrixa [12] [90] = '-';

matrixa [13] [84] = '\\';
matrixa [13] [85] = 'O';
matrixa [13] [86] = 'O'; //riga 13 renna
matrixa [13] [87] = 'O';
matrixa [13] [88] = 'O';
matrixa [13] [89] = 'O';
matrixa [13] [90] = 'O';
matrixa [13] [91] = '\\';
matrixa [13] [92] = '-';

matrixa [14] [85] = '\\';
matrixa [14] [86] = 'O';
matrixa [14] [87] = 'O';
matrixa [14] [88] = 'O';
matrixa [14] [89] = 'O'; //riga 14 renna
matrixa [14] [90] = 'O';
matrixa [14] [92] = 'O';
matrixa [14] [92] = 'O';
matrixa [14] [93] = '|';

matrixa [15] [85] = '|';
matrixa [15] [86] = 'O';
matrixa [15] [87] = 'O';
matrixa [15] [88] = 'O';
matrixa [15] [89] = 'O'; //riga 15 renna
matrixa [15] [90] = 'O';
matrixa [15] [91] = 'O';
matrixa [15] [92] = 'O';
matrixa [15] [93] = '|';

matrixa [16] [84] = '/';
matrixa [16] [85] = 'O';
matrixa [16] [86] = 'O';
matrixa [16] [87] = 'O';
matrixa [16] [88] = 'O';
matrixa [16] [89] = 'O'; //riga 16 renna
matrixa [16] [90] = 'O';
matrixa [16] [91] = 'O';
matrixa [16] [92] = '/';

matrixa [17] [82] = '-';
matrixa [17] [83] = '-';
matrixa [17] [84] = 'O';
matrixa [17] [85] = 'O'; //riga 17 renna
matrixa [17] [86] = 'O';
matrixa [17] [87] = 'O';
matrixa [17] [88] = 'O';
matrixa [17] [89] = 'O';
matrixa [17] [90] = 'O';
matrixa [17] [91] = '/';

matrixa [18] [81] = '/';
matrixa [18] [82] = 'O';
matrixa [18] [83] = 'O';
matrixa [18] [84] = 'O';
matrixa [18] [85] = 'O'; //riga 18 renna
matrixa [18] [86] = 'O';
matrixa [18] [87] = 'O';
matrixa [18] [88] = 'O';
matrixa [18] [89] = 'O';
matrixa [18] [90] = '/';

matrixa [19] [66] = '/';
matrixa [19] [67] = '-';
matrixa [19] [68] = '-';
matrixa [19] [69] = '-';
matrixa [19] [70] = '-';
matrixa [19] [71] = '-';
matrixa [19] [72] = '-';
matrixa [19] [73] = '-'; //riga 19 renna
matrixa [19] [74] = '-';
matrixa [19] [75] = '-';
matrixa [19] [76] = '-';
matrixa [19] [77] = '-';
matrixa [19] [78] = '-';
matrixa [19] [79] = '-';
matrixa [19] [80] = '/';
matrixa [19] [81] = 'O';
matrixa [19] [82] = 'O';
matrixa [19] [83] = 'O';
matrixa [19] [84] = 'O';
matrixa [19] [85] = 'O';
matrixa [19] [86] = 'O';
matrixa [19] [87] = 'O';
matrixa [19] [88] = 'O';
matrixa [19] [89] = 'O';
matrixa [19] [90] = '|';

matrixa [20] [65] = '/';
for (int i=89; i>=66;i--)
{
        matrixa [20] [i]='O';
}
matrixa [20] [90] = '|';


matrixa [21] [61] = '-';
matrixa [21] [62] = '-';
matrixa [21] [63] = '/';
for (int i=89; i>=64;i--)
{
        matrixa [21] [i]='O';
}
matrixa [21] [90] = '|';

matrixa [22] [60] = '/';
for (int i=88; i>=61;i--)
{
        matrixa [22] [i]='O';
}
matrixa [22] [89] = '/';

matrixa [23] [59] = '/';
for (int i=87; i>=60;i--)
{
        matrixa [23] [i]='O';
}
matrixa [23] [88] = '/';

matrixa [24] [58] = '/';
for (int i=87; i>=59;i--)
{
        matrixa [24] [i]='O';
}
matrixa [24] [88] = '|';

matrixa [25] [57] = '/';
for (int i=86; i>=58;i--)
{

        matrixa [25] [i]='O';
}

matrixa [25] [87] = '/';

matrixa [26] [56] = '/';
for (int i=86; i>=57;i--)
{
    if (i!=59)
    {
        matrixa [26] [i]='O';
    }
    else matrixa [26] [i]='/';
}
matrixa [26] [87] = '|';

matrixa [27] [55] = '|';
matrixa [27] [56] = 'O';
matrixa [27] [57] = 'O';
matrixa [27] [58] = '/';
matrixa [27] [60] = '\\';
matrixa [27] [61] = 'O';
matrixa [27] [62] = 'O';
matrixa [27] [63] = 'O';
matrixa [27] [64] = 'O';
matrixa [27] [65] = 'O';
matrixa [27] [66] = 'O';
matrixa [27] [67] = 'O';
matrixa [27] [68] = 'O';
matrixa [27] [69] = 'O';
matrixa [27] [70] = 'O';
matrixa [27] [71] = 'O';
matrixa [27] [72] = 'O';
matrixa [27] [73] = 'O'; //riga 27 renna
matrixa [27] [74] = 'O';
matrixa [27] [75] = 'O';
matrixa [27] [76] = 'O';
matrixa [27] [77] = 'O';
matrixa [27] [78] = 'O';
matrixa [27] [79] = 'O';
matrixa [27] [80] = 'O';
matrixa [27] [81] = 'O';
matrixa [27] [82] = 'O';
matrixa [27] [83] = 'O';
matrixa [27] [84] = 'O';
matrixa [27] [85] = 'O';
matrixa [27] [86] = 'O';
matrixa [27] [87] = '|';

matrixa [28] [56] = '\\';
matrixa [28] [57] = '-';
matrixa [28] [60] = '|';
matrixa [28] [61] = 'O';
matrixa [28] [62] = 'O';
matrixa [28] [63] = 'O';
matrixa [28] [64] = 'O';
matrixa [28] [65] = 'O';
matrixa [28] [66] = 'O';
matrixa [28] [67] = 'O';
matrixa [28] [68] = 'O';
matrixa [28] [69] = 'O';
matrixa [28] [70] = 'O';
matrixa [28] [71] = 'O';
matrixa [28] [72] = 'O';
matrixa [28] [73] = 'O'; //riga 28 renna
matrixa [28] [74] = 'O';
matrixa [28] [75] = 'O';
matrixa[28] [76] = 'O';
matrixa [28] [77] = 'O';
matrixa [28] [78] = 'O';
matrixa [28] [79] = 'O';
matrixa [28] [80] = 'O';
matrixa [28] [81] = 'O';
matrixa [28] [82] = 'O';
matrixa [28] [83] = 'O';
matrixa [28] [84] = 'O';
matrixa [28] [85] = 'O';
matrixa [28] [86] = 'O';
matrixa [28] [87] = '\\';

matrixa [29] [61] = '\\';
matrixa [29] [62] = 'O';
matrixa [29] [63] = 'O';
matrixa [29] [64] = 'O';
matrixa [29] [65] = 'O';
matrixa [29] [66] = 'O';
matrixa [29] [67] = 'O';
matrixa [29] [68] = 'O';
matrixa [29] [69] = 'O';
matrixa [29] [70] = 'O';
matrixa [29] [71] = 'O';
matrixa [29] [72] = 'O';
matrixa [29] [73] = 'O'; //riga 29 renna
matrixa [29] [74] = 'O';
matrixa [29] [75] = 'O';
matrixa [29] [76] = 'O';
matrixa [29] [77] = 'O';
matrixa [29] [78] = 'O';
matrixa [29] [79] = 'O';
matrixa [29] [80] = 'O';
matrixa [29] [81] = 'O';
matrixa [29] [82] = 'O';
matrixa [29] [83] = 'O';
matrixa [29] [84] = 'O';
matrixa [29] [85] = 'O';
matrixa [29] [86] = 'O';
matrixa [29] [87] = 'O';
matrixa [29] [88] = '\\';

matrixa [30] [61] = '|';
matrixa [30] [62] = 'O';
matrixa [30] [63] = 'O';
matrixa [30] [64] = 'O';
matrixa [30] [65] = 'O';
matrixa [30] [66] = 'O';
matrixa [30] [67] = 'O';
matrixa [30] [68] = 'O';
matrixa [30] [69] = 'O';
matrixa [30] [70] = '-';
matrixa [30] [71] = '-';
matrixa [30] [72] = '-';
matrixa [39] [73] = '-'; //riga 30 renna
matrixa [30] [74] = '-';
matrixa [30] [75] = '-';
matrixa [30] [76] = '-';
matrixa [30] [77] = '-';
matrixa [30] [78] = 'O';
matrixa [30] [79] = 'O';
matrixa [30] [80] = 'O';
matrixa [30] [81] = 'O';
matrixa [30] [82] = 'O';
matrixa [30] [83] = 'O';
matrixa [30] [84] = 'O';
matrixa [30] [85] = 'O';
matrixa [30] [86] = 'O';
matrixa [30] [87] = 'O';
matrixa [30] [88] = '|';

matrixa [31] [61] = '|';
matrixa [31] [62] = 'O';
matrixa [31] [63] = 'O';
matrixa [31] [64] = '/';
matrixa [31] [65] = '\\';
matrixa [31] [66] = 'O';
matrixa [31] [67] = 'O'; //riga 31 renna
matrixa [31] [68] = 'O';
matrixa [31] [69] = '/';
matrixa [31] [78] = '\\';
matrixa [31] [79] = 'O';
matrixa [31] [80] = 'O';
matrixa [31] [81] = 'O';
matrixa [31] [82] = 'O';
matrixa [31] [83] = '-';
matrixa [31] [84] = '-';
matrixa [31] [85] = 'O';
matrixa [31] [86] = 'O';
matrixa [31] [87] = 'O';
matrixa [31] [88] = '|';

matrixa [32] [61] = '|';
matrixa [32] [62] = 'O';
matrixa [32] [63] = 'O';
matrixa [32] [64] = '|';
matrixa [32] [65] = '|';
matrixa [32] [66] = 'O';
matrixa [32] [67] = 'O'; //riga 32 renna
matrixa [32] [68] = '/';
matrixa [32] [79] = '\\';
matrixa [32] [80] = 'O';
matrixa [32] [81] = 'O';
matrixa [32] [82] = '/';
matrixa [32] [85] = '\\';
matrixa [32] [86] = 'O';
matrixa [32] [87] = 'O';
matrixa [32] [88] = '|';

matrixa [33] [61] = '|';
matrixa [33] [62] = 'O';
matrixa [33] [63] = 'O';
matrixa [33] [64] = '|';
matrixa [33] [65] = '|';
matrixa [33] [66] = 'O';
matrixa [33] [67] = 'O'; //riga 33 renna
matrixa [33] [68] = '|';
matrixa [33] [79] = '|';
matrixa [33] [80] = 'O';
matrixa [33] [81] = 'O';
matrixa [33] [82] = '|';
matrixa [33] [85] = '|';
matrixa [33] [86] = 'O';
matrixa [33] [87] = 'O';
matrixa [33] [88] = '|';

matrixa [34] [61] = '/';
matrixa [34] [62] = 'O';
matrixa [34] [63] = 'O';
matrixa [34] [64] = '|';
matrixa [34] [65] = '|';
matrixa [34] [66] = 'O';
matrixa [34] [67] = 'O'; //riga 34 renna
matrixa [34] [68] = '|';
matrixa [34] [79] = '|';
matrixa [34] [80] = 'O';
matrixa [34] [81] = 'O';
matrixa [34] [82] = '|';
matrixa [34] [85] = '/';
matrixa [34] [86] = 'O';
matrixa [34] [87] = 'O';
matrixa [34] [88] = '|';

matrixa [35] [60] = '/';
matrixa [35] [61] = 'O';
matrixa [35] [62] = 'O';
matrixa [35] [63] = 'O';
matrixa [35] [64] = '/';
matrixa [35] [65] = '|';
matrixa [35] [66] = 'O';
matrixa [35] [67] = 'O'; //riga 35 renna
matrixa [35] [68] = '|';
matrixa [35] [79] = '|';
matrixa [35] [80] = 'O';
matrixa [35] [81] = 'O';
matrixa [35] [82] = '|';
matrixa [35] [84] = '/';
matrixa [35] [85] = 'O';
matrixa [35] [86] = 'O';
matrixa [35] [87] = 'O';
matrixa [35] [88] = '|';

matrixa [36] [60] = 'O';
matrixa [36] [61] = 'O';
matrixa [36] [62] = 'O';
matrixa [36] [63] = '/';
matrixa [36] [65] = '|';
matrixa [36] [66] = 'O';
matrixa [36] [67] = 'O'; //riga 36 renna
matrixa [36] [68] = '|';
matrixa [36] [79] = '|';
matrixa [36] [80] = 'O';
matrixa [36] [81] = 'O';
matrixa [36] [82] = '|';
matrixa [36] [84] = 'O';
matrixa [36] [85] = 'O';
matrixa [36] [86] = 'O';
matrixa [36] [87] = '/';

matrixa [37] [60] = '-';
matrixa [37] [61] = '-';
matrixa [37] [62] = '/';
matrixa [37] [65] = '|';
matrixa [37] [66] = 'O';
matrixa [37] [67] = 'O'; //riga 37 renna
matrixa [37] [68] = '|';
matrixa [37] [79] = '|';
matrixa [37] [80] = 'O';
matrixa [37] [81] = 'O';
matrixa [37] [82] = '|';
matrixa [37] [84] = '-';
matrixa [37] [85] = '-';
matrixa [37] [86] = '/';

matrixa [38] [65] = '|';
matrixa [38] [66] = 'O';
matrixa [38] [67] = 'O'; //riga 38 renna
matrixa [38] [68] = '|';
matrixa [38] [79] = '|';
matrixa [38] [80] = 'O';
matrixa [38] [81] = 'O';
matrixa [38] [82] = '|';

matrixa [12] [49] = '-'; //riga 13 laccio
matrixa [12] [50] = '-';
matrixa [12] [51] = '-';
matrixa [12] [52] = '-';
matrixa [12] [53] = '-';
matrixa [12] [54] = '-';
matrixa [12] [55] = '-';
matrixa [12] [56] = '-';
matrixa [12] [57] = '-';

matrixa [13] [48] = '-';
matrixa [13] [49] = '-'; //riga 13 laccio
matrixa [13] [50] = '-';
matrixa [13] [51] = '-';
matrixa [13] [52] = '-';
matrixa [13] [53] = '-';
matrixa [13] [54] = '-';
matrixa [13] [55] = '-';
matrixa [13] [56] = '-';
matrixa [13] [57] = '-';
matrixa [13] [58] = '-';
matrixa [13] [59] = '-';
matrixa [13] [60] = '-';
matrixa [13] [61] = '-';
matrixa [13] [62] = '-';
matrixa [13] [63] = '-';
matrixa [13] [64] = '-';
matrixa [13] [65] = '-';
matrixa [13] [66] = '-';
matrixa [13] [67] = '-';

matrixa [14] [46] = '-';
matrixa [14] [47] = '-';
matrixa [14] [48] = '-';
matrixa [14] [49] = '-'; //riga 14 laccio
matrixa [14] [50] = '-';
matrixa [14] [51] = '-';
matrixa [14] [52] = '-';
matrixa [14] [53] = '-';
matrixa [14] [54] = '-';
matrixa [14] [55] = '-';
matrixa [14] [56] = '-';
matrixa [14] [57] = '-';
matrixa [14] [58] = '-';
matrixa [14] [59] = '-';
matrixa [14] [60] = '-';
matrixa [14] [61] = '-';
matrixa [14] [62] = '-';
matrixa [14] [63] = '-';
matrixa [14] [64] = '-';
matrixa [14] [65] = '-';
matrixa [14] [66] = '-';
matrixa [14] [67] = '-';
matrixa [14] [68] = '-';
matrixa [14] [69] = '-';
matrixa [14] [70] = '-';
matrixa [14] [71] = '-';
matrixa [14] [72] = '-';
matrixa [14] [73] = '-';
matrixa [14] [74] = '-';
matrixa [14] [75] = '-';

matrixa [15] [57] = '-';
matrixa [15] [58] = '-'; //riga 14 laccio
matrixa [15] [59] = '-';
matrixa [15] [60] = '-';
matrixa [15] [61] = '-';
matrixa [15] [62] = '-';
matrixa [15] [63] = '-';
matrixa [15] [64] = '-';
matrixa [15] [65] = '-';
matrixa [15] [66] = '-';
matrixa [15] [67] = '-';
matrixa [15] [68] = '-';
matrixa [15] [69] = '-';
matrixa [15] [70] = '-';
matrixa [15] [71] = '-';
matrixa [15] [72] = '-';
matrixa [15] [73] = '-';
matrixa [15] [74] = '-';
matrixa [15] [75] = '-';
matrixa [15] [76] = '-';
matrixa [15] [77] = '-';
matrixa [15] [78] = '-';
matrixa [15] [79] = '-';
matrixa [15] [80] = '-';
matrixa [15] [81] = '-';
matrixa [15] [82] = '-';
matrixa [15] [83] = '-';
matrixa [15] [84] = '-';

matrixa [16] [67] = '-';
matrixa [16] [68] = '-'; //riga 14 laccio
matrixa [16] [69] = '-';
matrixa [16] [70] = '-';
matrixa [16] [71] = '-';
matrixa [16] [72] = '-';
matrixa [16] [73] = '-';
matrixa [16] [74] = '-';
matrixa [16] [75] = '-';
matrixa [16] [76] = '-';
matrixa [16] [77] = '-';
matrixa [16] [78] = '-';
matrixa [16] [79] = '-';
matrixa [16] [80] = '-';
matrixa [16] [81] = '-';
matrixa [16] [82] = '-';
matrixa [16] [83] = '-';

matrixa [17] [75] = '-';
matrixa [17] [76] = '-'; //riga 15 laccio
matrixa [17] [77] = '-';
matrixa [17] [78] = '-';
matrixa [17] [79] = '-';
matrixa [17] [80] = '-';
matrixa [17] [81] = '-';
matrixa [17] [82] = '-';
matrixa [17] [83] = '-';

matrixb [9][89]='|';
matrixb [8][89]='|';
matrixb [7][89]='|';
matrixb [6][89]='|';
matrixb [5][88]='/';
matrixb [4][89]='/';
matrixb [3][90]='/';
matrixb [2][91]='/';
matrixb [1][92]='_';
matrixb [1][93]='_';
matrixb [1][94]='_';
matrixb [9] [95]='|';
matrixb [8] [95]='|';
matrixb [7] [96]='_';
matrixb [9] [97]='|';
matrixb [8] [97]='|';
matrixb [9] [98] ='|';
matrixb [8] [98] ='|';
matrixb [7] [98] ='|';
matrixb [6] [98] ='|';
matrixb [5] [99] ='\\';
matrixb [4] [98] ='\\';
matrixb [3] [97] ='\\';
matrixb [2] [96] ='\\';
matrixb [1] [95] ='_';
for (int i=99; i>=0;i--)
{
    matrixb [10] [i]='_';
}
matrixb [10] [89]='-';
matrixb [10] [90]='-';
matrixb [10] [91]='-';
matrixb [10] [92]='-';
matrixb [10] [93]='-';
matrixb [10] [94]='-';
matrixb [10] [95]='-';
matrixb [10] [98]='-';
matrixb [10] [96]='-';
matrixb [10] [97]='-';

matrixb [10] [23]='|';
matrixb [10] [25]='|';
matrixb [9] [23]='|';
matrixb [9] [25]='|';
matrixb [8] [23]='|';
matrixb [8] [25]='|';
matrixb [7] [22]='O';
matrixb [7] [23]='O';
matrixb [7] [24]='O';
matrixb [7] [25]='O';
matrixb [7] [26]='O';
matrixb [6] [22]='O';
matrixb [6] [23]='O';
matrixb [6] [24]='O';
matrixb [6] [25]='O';
matrixb [6] [26]='O';
matrixb [5] [23]='O';
matrixb [5] [24]='O';
matrixb [5] [25]='O';
matrixb [4] [24]='O';

matrixb [10] [53]='|';
matrixb [10] [55]='|';
matrixb [9] [53]='|';
matrixb [9] [55]='|';
matrixb [8] [53]='|';
matrixb [8] [55]='|';
matrixb [7] [51]='O';
matrixb [7] [52]='O';
matrixb [7] [53]='O';
matrixb [7] [54]='O';
matrixb [7] [55]='O';
matrixb [7] [56]='O';
matrixb [7] [57]='O';
matrixb [6] [52]='O';
matrixb [6] [53]='O';
matrixb [6] [54]='O';
matrixb [6] [55]='O';
matrixb [6] [56]='O';
matrixb [5] [52]='O';
matrixb [5] [53]='O';
matrixb [5] [54]='O';
matrixb [5] [55]='O';
matrixb [5] [56]='O';
matrixb [4] [53]='O';
matrixb [4] [54]='O';
matrixb [4] [55]='O';

matrixb [10] [67]='O';
matrixb [10] [68]='O';
matrixb [10] [69]='O';
matrixb [10] [70]='O';
matrixb [10] [71]='O';
matrixb [9] [68]='O';
matrixb [9] [69]='O';
matrixb [9] [70]='O';

matrixb [10] [35]='O';
matrixb [10] [36]='O';
matrixb [10] [37]='O';
matrixb [10] [38]='O';
matrixb [10] [39]='O';
matrixb [9] [36]='O';
matrixb [9] [37]='O';
matrixb [9] [38]='O';

matrixb [10] [12]='O';
matrixb [10] [13]='O';
matrixb [10] [14]='O';
matrixb [10] [15]='O';
matrixb [10] [16]='O';
matrixb [9] [13]='O';
matrixb [9] [14]='O';
matrixb [9] [15]='O';
}

void animazione3(char matrixb [70] [100])
{
    matrixb [14] [29] = 'O';
matrixb [14] [30] = 'O';
matrixb [14] [31] = 'O'; //riga 14 b.n.
matrixb [14] [32] = 'O';
matrixb [14] [33] = '0';

matrixb [15] [27] = '0';
matrixb [15] [28] = '0';
matrixb [15] [29] = 'O';
matrixb [15] [30] = 'O';
matrixb [15] [31] = 'O'; //riga 15 b.n.
matrixb [15] [32] = 'O';
matrixb [15] [33] = '0';
matrixb [15] [34] = '0';

matrixb [16] [25] = '0';
matrixb [16] [26] = '0';
matrixb [16] [27] = '0';
matrixb [16] [28] = '0';
matrixb [16] [29] = 'O';
matrixb [16] [30] = 'O';
matrixb [16] [31] = 'O'; //riga 16 b.n.
matrixb [16] [32] = 'O';
matrixb [16] [33] = '0';
matrixb [16] [34] = '0';
matrixb [16] [35] = '0';
matrixb [16] [36] = '0';

matrixb [17] [24] = '0';
matrixb [17] [25] = '0';
matrixb [17] [26] = '0';
matrixb [17] [27] = '0';
matrixb [17] [28] = '0';
matrixb [17] [29] = 'O';
matrixb [17] [30] = 'O';
matrixb [17] [31] = 'O'; //riga 17 b.n.
matrixb [17] [32] = 'O';
matrixb [17] [33] = '0';
matrixb [17] [34] = '0';
matrixb [17] [35] = '0';
matrixb [17] [36] = '0';
matrixb [17] [37] = '0';

matrixb [18] [23] = '0';
matrixb [18] [24] = '0';
matrixb [18] [25] = '0';
matrixb [18] [26] = '0';
matrixb [18] [27] = '0';
matrixb [18] [28] = '0';
matrixb [18] [29] = 'O';
matrixb [18] [30] = 'O';
matrixb [18] [31] = 'O'; //riga 18 b.n.
matrixb [18] [32] = 'O';
matrixb [18] [33] = '0';
matrixb [18] [34] = '0';
matrixb [18] [35] = '0';
matrixb [18] [36] = '0';
matrixb [18] [37] = '0';

matrixb [19] [22] = '0';
matrixb [19] [23] = '0';
matrixb [19] [24] = '0';
matrixb [19] [25] = '0';
matrixb [19] [26] = '0';
matrixb [19] [27] = '0';
matrixb [19] [28] = '0';
matrixb [19] [29] = 'O';
matrixb [19] [30] = 'O';
matrixb [19] [31] = 'O'; //riga 19 b.n.
matrixb [19] [32] = 'O';
matrixb [19] [33] = '0';
matrixb [19] [35] = '0';
matrixb [19] [36] = '0';
matrixb [19] [37] = '0';
matrixb [19] [38] = '0';

matrixb [20] [20] = '|';
matrixb [20] [21] = '-';
matrixb [20] [22] = '-';
matrixb [20] [23] = '-';
matrixb [20] [24] = '-';
matrixb [20] [25] = '-'; //riga 20 b.n.
matrixb [20] [26] = '-';
matrixb [20] [27] = '-';
matrixb [20] [28] = '-';
matrixb [20] [29] = '-';
matrixb [20] [30] = '-';
matrixb [20] [31] = '-';
matrixb [20] [32] = '-';
matrixb [20] [33] = '|';
matrixb [20] [36] = '0';
matrixb [20] [37] = '0';
matrixb [20] [38] = '0';

matrixb [21] [20] = '|';
matrixb [21] [21] = '-';
matrixb [21] [22] = '-';
matrixb [21] [23] = '-';
matrixb [21] [24] = '-';
matrixb [21] [25] = '-'; //riga 21 b.n.
matrixb [21] [26] = '-';
matrixb [21] [27] = '-';
matrixb [21] [28] = '-';
matrixb [21] [29] = '-';
matrixb [21] [30] = '-';
matrixb [21] [31] = '-';
matrixb [21] [32] = '-';
matrixb [21] [33] = '|';
matrixb [21] [37] = '0';
matrixb [21] [38] = '0';

matrixb [22] [21] = '|';
matrixb [22] [22] = '0';
matrixb [22] [23] = '0';
matrixb [22] [24] = '0';
matrixb [22] [25] = '0'; //riga 22 b.n.
matrixb [22] [26] = '0';
matrixb [22] [27] = '0';
matrixb [22] [28] = '0';
matrixb [22] [29] = '0';
matrixb [22] [30] = '0';
matrixb [22] [31] = '0';
matrixb [22] [32] = '|';
matrixb [22] [37] = '0';
matrixb [22] [38] = '0';

matrixb [23] [21] = '|';
matrixb [23] [22] = '0';
matrixb [23] [23] = '-';
matrixb [23] [24] = '-';
matrixb [23] [25] = '-'; //riga 23 b.n.
matrixb [23] [26] = '0';
matrixb [23] [27] = '0';
matrixb [23] [28] = '-';
matrixb [23] [29] = '-';
matrixb [23] [30] = '-';
matrixb [23] [31] = '0';
matrixb [23] [32] = '|';
matrixb [23] [36] = '#';
matrixb [23] [37] = '#';
matrixb [23] [38] = '#';
matrixb [23] [39] = '#';

matrixb [24] [21] = '|';
matrixb [24] [22] = '0';
matrixb [24] [23] = '0';
matrixb [24] [24] = '0';
matrixb [24] [25] = '0'; //riga 54 b.n.
matrixb [24] [26] = '0';
matrixb [24] [27] = '0';
matrixb [24] [28] = '0';
matrixb [24] [29] = '0';
matrixb [24] [30] = '0';
matrixb [24] [31] = '0';
matrixb [24] [32] = '|';
matrixb [24] [36] = '#';
matrixb [24] [37] = '#';
matrixb [24] [38] = '#';
matrixb [24] [39] = '#';

matrixb [25] [21] = '|';
matrixb [25] [22] = '#';
matrixb [25] [23] = '0';
matrixb [25] [24] = '0';
matrixb [25] [25] = '0'; //riga 25 b.n.
matrixb [25] [26] = '-';
matrixb [25] [27] = '-';
matrixb [25] [28] = '0';
matrixb [25] [29] = '0';
matrixb [25] [30] = '0';
matrixb [25] [31] = '#';
matrixb [25] [32] = '|';
matrixb [25] [36] = '#';
matrixb [25] [37] = '#';
matrixb [25] [38] = '#';
matrixb [25] [39] = '#';

matrixb [26] [21] = '|';
matrixb [26] [22] = '#';
matrixb [26] [23] = '#';
matrixb [26] [24] = '#';
matrixb [26] [25] = '#'; //riga 26 b.n.
matrixb [26] [26] = '#';
matrixb [26] [27] = '#';
matrixb [26] [28] = '#';
matrixb [26] [29] = '#';
matrixb [26] [30] = '#';
matrixb [26] [31] = '#';
matrixb [26] [32] = '|';

matrixb [27] [21] = '|';
matrixb [27] [22] = '#';
matrixb [27] [23] = '#';
matrixb [27] [24] = '|';
matrixb [27] [25] = '#'; //riga 27 b.n.
matrixb [27] [26] = '#';
matrixb [27] [27] = '#';
matrixb [27] [28] = '#';
matrixb [27] [29] = '|';
matrixb [27] [30] = '#';
matrixb [27] [31] = '#';
matrixb [27] [32] = '|';

matrixb [28] [21] = '\\';
matrixb [28] [22] = '#';
matrixb [28] [23] = '#';
matrixb [28] [24] = '\\';
matrixb [28] [25] = '-'; //riga 28 b.n.
matrixb [28] [26] = '-';
matrixb [28] [27] = '-';
matrixb [28] [28] = '-';
matrixb [28] [29] = '/';
matrixb [28] [30] = '#';
matrixb [28] [31] = '#';
matrixb [28] [32] = '/';

matrixb [29] [22] = '\\';
matrixb [29] [23] = '#';
matrixb [29] [24] = '#';
matrixb [29] [25] = '#'; //riga 29 b.n.
matrixb [29] [26] = '#';
matrixb [29] [27] = '#';
matrixb [29] [28] = '#';
matrixb [29] [29] = '#';
matrixb [29] [30] = '#';
matrixb [29] [31] = '/';

matrixb [30] [23] = '\\';
matrixb [30] [24] = '#';
matrixb [30] [25] = '#'; //riga 30 b.n.
matrixb [30] [26] = '#';
matrixb [30] [27] = '#';
matrixb [30] [28] = '#';
matrixb [30] [29] = '#';
matrixb [30] [30] = '/';
matrixb [30] [6] = '/';
matrixb [30] [7] = '-';
matrixb [30] [8] = '-';
matrixb [30] [9] = '-';
matrixb [30] [43] = '-';
matrixb [30] [44] = '-';
matrixb [30] [45] = '-';
matrixb [30] [46] = '\\';

matrixb [31] [24] = '\\';
matrixb [31] [25] = '#'; //riga 31 b.n.
matrixb [31] [26] = '#';
matrixb [31] [27] = '#';
matrixb [31] [28] = '#';
matrixb [31] [29] = '/';
matrixb [31] [5] = '/';
matrixb [31] [6] = 'O';
matrixb [31] [7] = 'O';
matrixb [31] [8] = 'O';
matrixb [31] [9] = 'O';
matrixb [31] [10] = '\\';
matrixb [31] [42] = '/';
matrixb [31] [43] = 'O';
matrixb [31] [44] = 'O';
matrixb [31] [45] = 'O';
matrixb [31] [46] = 'O';
matrixb [31] [47] = '\\';


matrixb [32] [19] = '-';
matrixb [32] [20] = '-';
matrixb [32] [21] = '-';
matrixb [32] [22] = '-';
matrixb [32] [23] = '-';
matrixb [32] [24] = '/';
matrixb [32] [25] = 'O'; //riga 32 b.n.
matrixb [32] [26] = 'O';
matrixb [32] [27] = 'O';
matrixb [32] [28] = 'O';
matrixb [32] [29] = '\\';
matrixb [32] [30] = '-';
matrixb [32] [31] = '-';
matrixb [32] [32] = '-';
matrixb [32] [33] = '-';
matrixb [32] [5] = '|';
matrixb [32] [6] = 'O';
matrixb [32] [7] = 'O';
matrixb [32] [8] = 'O';
matrixb [32] [9] = '/';
matrixb [32] [10] = 'O';
matrixb [32] [11] = '\\';
matrixb [32] [41] = '/';
matrixb [32] [42] = 'O';
matrixb [32] [43] = '\\';
matrixb [32] [44] = 'O';
matrixb [32] [45] = 'O';
matrixb [32] [46] = 'O';
matrixb [32] [47] = '|';


matrixb [33] [17] = '-';
matrixb [33] [18] = '/';
matrixb [33] [19] = 'O';
matrixb [33] [20] = 'O';
matrixb [33] [21] = 'O';
matrixb [33] [22] = 'O';
matrixb [33] [23] = 'O';
matrixb [33] [24] = 'O';
matrixb [33] [25] = 'O'; //riga 33 b.n.
matrixb [33] [26] = 'O';
matrixb [33] [27] = 'O';
matrixb [33] [28] = 'O';
matrixb [33] [29] = 'O';
matrixb [33] [30] = 'O';
matrixb [33] [31] = 'O';
matrixb [33] [32] = 'O';
matrixb [33] [33] = 'O';
matrixb [33] [34] = '\\';
matrixb [33] [35] = '-';
matrixb [33] [5] = '|';
matrixb [33] [6] = 'O';
matrixb [33] [7] = 'O';
matrixb [33] [8] = '/';
matrixb [33] [9] = 'O';
matrixb [33] [10] = 'O';
matrixb [33] [11] = 'O';
matrixb [33] [12] = '\\';
matrixb [33] [40] = '/';
matrixb [33] [41] = 'O';
matrixb [33] [42] = 'O';
matrixb [33] [43] = '|';
matrixb [33] [44] = 'O';
matrixb [33] [45] = 'O';
matrixb [33] [46] = 'O';
matrixb [33] [47] = '|';


matrixb [34] [5] = '|';
matrixb [34] [6] = 'O';
matrixb [34] [7] = '/';
matrixb [34] [8] = 'O';
matrixb [34] [9] = 'O';
matrixb [34] [10] = 'O';
matrixb [34] [11] = 'O';
matrixb [34] [12] = 'O';
matrixb [34] [13] = '\\';
matrixb [34] [14] = '-';
matrixb [34] [15] = '-';
matrixb [34] [16] = '/';
matrixb [34] [17] = 'O';
matrixb [34] [18] = 'O';
matrixb [34] [19] = 'O';
matrixb [34] [20] = 'O';
matrixb [34] [21] = 'O';
matrixb [34] [22] = 'O';
matrixb [34] [23] = 'O';
matrixb [34] [24] = 'O';
matrixb [34] [25] = 'O'; //riga 34 b.n.
matrixb [34] [26] = 'O';
matrixb [34] [27] = 'O';
matrixb [34] [28] = 'O';
matrixb [34] [29] = 'O';
matrixb [34] [30] = 'O';
matrixb [34] [31] = 'O';
matrixb [34] [32] = 'O';
matrixb [34] [33] = 'O';
matrixb [34] [34] = 'O';
matrixb [34] [35] = 'O';
matrixb [34] [36] = '\\';
matrixb [34] [37] = '-';
matrixb [34] [38] = '-';
matrixb [34] [39] = '/';
matrixb [34] [40] = 'O';
matrixb [34] [41] = 'O';
matrixb [34] [42] = 'O';
matrixb [34] [43] = 'O';
matrixb [34] [44] = 'O';
matrixb [34] [45] = '\\';
matrixb [34] [46] = 'O';
matrixb [34] [47] = '|';

matrixb [35] [6] = '\\';
matrixb [35] [7] = 'O';
matrixb [35] [8] = 'O';
matrixb [35] [9] = 'O';
matrixb [35] [10] = 'O';
matrixb [35] [11] = 'O';
matrixb [35] [12] = 'O';
matrixb [35] [13] = 'O';
matrixb [35] [14] = 'O';
matrixb [35] [15] = 'O';
matrixb [35] [16] = 'O';
matrixb [35] [17] = 'O';
matrixb [35] [18] = 'O';
matrixb [35] [19] = 'O';
matrixb [35] [20] = 'O';
matrixb [35] [21] = 'O';
matrixb [35] [22] = 'O';
matrixb [35] [23] = 'O';
matrixb [35] [24] = 'O';
matrixb [35] [25] = 'O'; //riga 35 b.n.
matrixb [35] [26] = 'O';
matrixb [35] [27] = 'O';
matrixb [35] [28] = 'O';
matrixb [35] [29] = 'O';
matrixb [35] [30] = 'O';
matrixb [35] [31] = 'O';
matrixb [35] [32] = 'O';
matrixb [35] [33] = 'O';
matrixb [35] [34] = 'O';
matrixb [35] [35] = 'O';
matrixb [35] [36] = 'O';
matrixb [35] [37] = 'O';
matrixb [35] [38] = 'O';
matrixb [35] [39] = 'O';
matrixb [35] [40] = 'O';
matrixb [35] [41] = 'O';
matrixb [35] [42] = 'O';
matrixb [35] [43] = 'O';
matrixb [35] [44] = 'O';
matrixb [35] [45] = 'O';
matrixb [35] [46] = '/';

matrixb [36] [7] = '\\';
matrixb [36] [8] = 'O';
matrixb [36] [9] = 'O';
matrixb [36] [10] = 'O';
matrixb [36] [11] = 'O';
matrixb [36] [12] = 'O';
matrixb [36] [13] = 'O';
matrixb [36] [14] = 'O';
matrixb [36] [15] = 'O';
matrixb [36] [16] = 'O';
matrixb [36] [17] = 'O';
matrixb [36] [18] = 'O';
matrixb [36] [19] = 'O';
matrixb [36] [20] = 'O';
matrixb [36] [21] = 'O';
matrixb [36] [22] = 'O';
matrixb [36] [23] = 'O';
matrixb [36] [24] = 'O';
matrixb [36] [25] = 'O'; //riga 36 b.n.
matrixb [36] [26] = 'O';
matrixb [36] [27] = 'O';
matrixb [36] [28] = 'O';
matrixb [36] [29] = 'O';
matrixb [36] [30] = 'O';
matrixb [36] [31] = 'O';
matrixb [36] [32] = 'O';
matrixb [36] [33] = 'O';
matrixb [36] [34] = 'O';
matrixb [36] [35] = 'O';
matrixb [36] [36] = 'O';
matrixb [36] [37] = 'O';
matrixb [36] [38] = 'O';
matrixb [36] [39] = 'O';
matrixb [36] [40] = 'O';
matrixb [36] [41] = 'O';
matrixb [36] [42] = 'O';
matrixb [36] [43] = 'O';
matrixb [36] [44] = 'O';
matrixb [36] [45] = '/';

matrixb [37] [8] = '\\';
matrixb [37] [9] = 'O';
matrixb [37] [10] = 'O';
matrixb [37] [11] = 'O';
matrixb [37] [12] = 'O';
matrixb [37] [13] = 'O';
matrixb [37] [14] = 'O';
matrixb [37] [15] = 'O';
matrixb [37] [16] = 'O';
matrixb [37] [17] = 'O';
matrixb [37] [18] = 'O';
matrixb [37] [19] = 'O';
matrixb [37] [20] = 'O';
matrixb [37] [21] = 'O';
matrixb [37] [22] = 'O';
matrixb [37] [23] = 'O';
matrixb [37] [24] = 'O';
matrixb [37] [25] = 'O'; //riga 37 b.n.
matrixb [37] [26] = 'O';
matrixb [37] [27] = 'O';
matrixb [37] [28] = 'O';
matrixb [37] [29] = 'O';
matrixb [37] [30] = 'O';
matrixb [37] [31] = 'O';
matrixb [37] [32] = 'O';
matrixb [37] [33] = 'O';
matrixb [37] [34] = 'O';
matrixb [37] [35] = 'O';
matrixb [37] [36] = 'O';
matrixb [37] [37] = 'O';
matrixb [37] [38] = 'O';
matrixb [37] [39] = 'O';
matrixb [37] [40] = 'O';
matrixb [37] [41] = 'O';
matrixb [37] [42] = 'O';
matrixb [37] [43] = 'O';
matrixb [37] [44] = '/';

matrixb [38] [9] = '\\';
matrixb [38] [10] = 'O';
matrixb [38] [11] = 'O';
matrixb [38] [12] = 'O';
matrixb [38] [13] = 'O';
matrixb [38] [14] = 'O';
matrixb [38] [15] = 'O';
matrixb [38] [16] = 'O';
matrixb [38] [17] = 'O';
matrixb [38] [18] = 'O';
matrixb [38] [19] = 'O';
matrixb [38] [20] = 'O';
matrixb [38] [21] = 'O';
matrixb [38] [22] = 'O';
matrixb [38] [23] = 'O';
matrixb [38] [24] = 'O';
matrixb [38] [25] = 'O'; //riga 38 b.n.
matrixb [38] [26] = 'O';
matrixb [38] [27] = 'O';
matrixb [38] [28] = 'O';
matrixb [38] [29] = 'O';
matrixb [38] [30] = 'O';
matrixb [38] [31] = 'O';
matrixb [38] [32] = 'O';
matrixb [38] [33] = 'O';
matrixb [38] [34] = 'O';
matrixb [38] [35] = 'O';
matrixb [38] [36] = 'O';
matrixb [38] [37] = 'O';
matrixb [38] [38] = 'O';
matrixb [38] [39] = 'O';
matrixb [38] [40] = 'O';
matrixb [38] [41] = 'O';
matrixb [38] [42] = 'O';
matrixb [38] [43] = '/';

matrixb [39] [10] = '\\';
matrixb [39] [11] = 'O';
matrixb [39] [12] = 'O';
matrixb [39] [13] = 'O';
matrixb [39] [14] = 'O';
matrixb [39] [15] = 'O';
matrixb [39] [16] = 'O';
matrixb [39] [17] = 'O';
matrixb [39] [18] = 'O';
matrixb [39] [19] = 'O';
matrixb [39] [20] = 'O';
matrixb [39] [21] = 'O';
matrixb [39] [22] = 'O';
matrixb [39] [23] = 'O';
matrixb [39] [24] = 'O';
matrixb [39] [25] = 'O'; //riga 39 b.n.
matrixb [39] [26] = 'O';
matrixb [39] [27] = 'O';
matrixb [39] [28] = 'O';
matrixb [39] [29] = 'O';
matrixb [39] [30] = 'O';
matrixb [39] [31] = 'O';
matrixb [39] [32] = 'O';
matrixb [39] [33] = 'O';
matrixb [39] [34] = 'O';
matrixb [39] [35] = 'O';
matrixb [39] [36] = 'O';
matrixb [39] [37] = 'O';
matrixb [39] [38] = 'O';
matrixb [39] [39] = 'O';
matrixb [39] [40] = 'O';
matrixb [39] [41] = 'O';
matrixb [39] [42] = '/';

matrixb [40] [11] = '\\';
matrixb [40] [12] = 'O';
matrixb [40] [13] = 'O';
matrixb [40] [14] = 'O';
matrixb [40] [15] = 'O';
matrixb [40] [16] = 'O';
matrixb [40] [17] = 'O';
matrixb [40] [18] = 'O';
matrixb [40] [19] = 'O';
matrixb [40] [20] = 'O';
matrixb [40] [21] = 'O';
matrixb [40] [22] = 'O';
matrixb [40] [23] = 'O';
matrixb [40] [24] = 'O';
matrixb [40] [25] = 'O'; //riga 40 b.n.
matrixb [40] [26] = 'O';
matrixb [40] [27] = 'O';
matrixb [40] [28] = 'O';
matrixb [40] [29] = 'O';
matrixb [40] [30] = 'O';
matrixb [40] [31] = 'O';
matrixb [40] [32] = 'O';
matrixb [40] [33] = 'O';
matrixb [40] [34] = 'O';
matrixb [40] [35] = 'O';
matrixb [40] [36] = 'O';
matrixb [40] [37] = 'O';
matrixb [40] [38] = 'O';
matrixb [40] [39] = 'O';
matrixb [40] [40] = 'O';
matrixb [40] [41] = '/';

matrixb [41] [12] = '\\';
matrixb [41] [13] = 'O';
matrixb [41] [14] = 'O';
matrixb [41] [15] = 'O';
matrixb [41] [16] = 'O';
matrixb [41] [17] = 'O';
matrixb [41] [18] = 'O';
matrixb [41] [19] = 'O';
matrixb [41] [20] = 'O';
matrixb [41] [21] = 'O';
matrixb [41] [22] = 'O';
matrixb [41] [23] = 'O';
matrixb [41] [24] = 'O';
matrixb [41] [25] = 'O'; //riga 41 b.n.
matrixb [41] [26] = 'O';
matrixb [41] [27] = 'O';
matrixb [41] [28] = 'O';
matrixb [41] [29] = 'O';
matrixb [41] [30] = 'O';
matrixb [41] [31] = 'O';
matrixb [41] [32] = 'O';
matrixb [41] [33] = 'O';
matrixb [41] [34] = 'O';
matrixb [41] [35] = 'O';
matrixb [41] [36] = 'O';
matrixb [41] [37] = 'O';
matrixb [41] [38] = 'O';
matrixb [41] [39] = 'O';
matrixb [41] [40] = '/';

matrixb [42] [12] = '|';
matrixb [42] [13] = 'O';
matrixb [42] [14] = 'O';
matrixb [42] [15] = 'O';
matrixb [42] [16] = 'O';
matrixb [42] [17] = 'O';
matrixb [42] [18] = 'O';
matrixb [42] [19] = 'O';
matrixb [42] [20] = 'O';
matrixb [42] [21] = 'O';
matrixb [42] [22] = 'O';
matrixb [42] [23] = 'O';
matrixb [42] [24] = 'O';
matrixb [42] [25] = 'O'; //riga 42 b.n.
matrixb [42] [26] = 'O';
matrixb [42] [27] = 'O';
matrixb [42] [28] = 'O';
matrixb [42] [29] = 'O';
matrixb [42] [30] = 'O';
matrixb [42] [31] = 'O';
matrixb [42] [32] = 'O';
matrixb [42] [33] = 'O';
matrixb [42] [34] = 'O';
matrixb [42] [35] = 'O';
matrixb [42] [36] = 'O';
matrixb [42] [37] = 'O';
matrixb [42] [38] = 'O';
matrixb [42] [39] = 'O';
matrixb [42] [40] = '|';

matrixb [43] [12] = '|';
matrixb [43] [13] = 'O';
matrixb [43] [14] = 'O';
matrixb [43] [15] = 'O';
matrixb [43] [16] = 'O';
matrixb [43] [17] = 'O';
matrixb [43] [18] = 'O';
matrixb [43] [19] = 'O';
matrixb [43] [20] = 'O';
matrixb [43] [21] = 'O';
matrixb [43] [22] = 'O';
matrixb [43] [23] = 'O';
matrixb [43] [24] = 'O';
matrixb [43] [25] = 'O'; //riga 43 b.n.
matrixb [43] [26] = 'O';
matrixb [43] [27] = 'O';
matrixb [43] [28] = 'O';
matrixb [43] [29] = 'O';
matrixb [43] [30] = 'O';
matrixb [43] [31] = 'O';
matrixb [43] [32] = 'O';
matrixb [43] [33] = 'O';
matrixb [43] [34] = 'O';
matrixb [43] [35] = 'O';
matrixb [43] [36] = 'O';
matrixb [43] [37] = 'O';
matrixb [43] [38] = 'O';
matrixb [43] [39] = 'O';
matrixb [43] [40] = '|';

matrixb [44] [13] = '\\';
matrixb [44] [14] = 'O';
matrixb [44] [15] = 'O';
matrixb [44] [16] = 'O';
matrixb [44] [17] = 'O';
matrixb [44] [18] = 'O';
matrixb [44] [19] = 'O';
matrixb [44] [20] = 'O';
matrixb [44] [21] = 'O';
matrixb [44] [22] = 'O';
matrixb [44] [23] = 'O';
matrixb [44] [24] = 'O';
matrixb [44] [25] = 'O'; //riga 44 b.n.
matrixb [44] [26] = 'O';
matrixb [44] [27] = 'O';
matrixb [44] [28] = 'O';
matrixb [44] [29] = 'O';
matrixb [44] [30] = 'O';
matrixb [44] [31] = 'O';
matrixb [44] [32] = 'O';
matrixb [44] [33] = 'O';
matrixb [44] [34] = 'O';
matrixb [44] [35] = 'O';
matrixb [44] [36] = 'O';
matrixb [44] [37] = 'O';
matrixb [44] [38] = 'O';
matrixb [44] [39] = '/';

matrixb [45] [13] = '|';
matrixb [45] [14] = 'O';
matrixb [45] [15] = 'O';
matrixb [45] [16] = 'O';
matrixb [45] [17] = 'O';
matrixb [45] [18] = 'O';
matrixb [45] [19] = 'O';
matrixb [45] [20] = 'O';
matrixb [45] [21] = 'O';
matrixb [45] [22] = 'O';
matrixb [45] [23] = 'O';
matrixb [45] [24] = 'O';
matrixb [45] [25] = 'O'; //riga 45 b.n.
matrixb [45] [26] = 'O';
matrixb [45] [27] = 'O';
matrixb [45] [28] = 'O';
matrixb [45] [29] = 'O';
matrixb [45] [30] = 'O';
matrixb [45] [31] = 'O';
matrixb [45] [32] = 'O';
matrixb [45] [33] = 'O';
matrixb [45] [34] = 'O';
matrixb [45] [35] = 'O';
matrixb [45] [36] = 'O';
matrixb [45] [37] = 'O';
matrixb [45] [38] = 'O';
matrixb [45] [39] = '|';

matrixb [46] [13] = '|';
matrixb [46] [14] = 'O';
matrixb [46] [15] = 'O';
matrixb [46] [16] = 'O';
matrixb [46] [17] = 'O';
matrixb [46] [18] = 'O';
matrixb [46] [19] = 'O';
matrixb [46] [20] = 'O';
matrixb [46] [21] = 'O';
matrixb [46] [22] = 'O';
matrixb [46] [23] = 'O';
matrixb [46] [24] = 'O';
matrixb [46] [25] = 'O'; //riga 46 b.n.
matrixb [46] [26] = 'O';
matrixb [46] [27] = 'O';
matrixb [46] [28] = 'O';
matrixb [46] [29] = 'O';
matrixb [46] [30] = 'O';
matrixb [46] [31] = 'O';
matrixb [46] [32] = 'O';
matrixb [46] [33] = 'O';
matrixb [46] [34] = 'O';
matrixb [46] [35] = 'O';
matrixb [46] [36] = 'O';
matrixb [46] [37] = 'O';
matrixb [46] [38] = 'O';
matrixb [46] [39] = '|';

matrixb [47] [13] = '|';
matrixb [47] [14] = 'O';
matrixb [47] [15] = 'O';
matrixb [47] [16] = 'O';
matrixb [47] [17] = 'O';
matrixb [47] [18] = 'O';
matrixb [47] [19] = 'O';
matrixb [47] [20] = 'O';
matrixb [47] [21] = 'O';
matrixb [47] [22] = 'O';
matrixb [47] [23] = 'O';
matrixb [47] [24] = 'O';
matrixb [47] [25] = 'O'; //riga 47 b.n.
matrixb [47] [26] = 'O';
matrixb [47] [27] = 'O';
matrixb [47] [28] = 'O';
matrixb [47] [29] = 'O';
matrixb [47] [30] = 'O';
matrixb [47] [31] = 'O';
matrixb [47] [32] = 'O';
matrixb [47] [33] = 'O';
matrixb [47] [34] = 'O';
matrixb [47] [35] = 'O';
matrixb [47] [36] = 'O';
matrixb [47] [37] = 'O';
matrixb [47] [38] = 'O';
matrixb [47] [39] = '|';

matrixb [48] [14] = '\\';
matrixb [48] [15] = 'O';
matrixb [48] [16] = 'O';
matrixb [48] [17] = 'O';
matrixb [48] [18] = 'O';
matrixb [48] [19] = 'O';
matrixb [48] [20] = 'O';
matrixb [48] [21] = 'O';
matrixb [48] [22] = 'O';
matrixb [48] [23] = 'O';
matrixb [48] [24] = '#';
matrixb [48] [25] = '#'; //riga 48 b.n.
matrixb [48] [26] = '#';
matrixb [48] [27] = '#';
matrixb [48] [28] = '#';
matrixb [48] [29] = 'O';
matrixb [48] [30] = 'O';
matrixb [48] [31] = 'O';
matrixb [48] [32] = 'O';
matrixb [48] [33] = 'O';
matrixb [48] [34] = 'O';
matrixb [48] [35] = 'O';
matrixb [48] [36] = 'O';
matrixb [48] [37] = 'O';
matrixb [48] [38] = '/';

matrixb [49] [14] = '|';
matrixb [49] [15] = '-';
matrixb [49] [16] = '-';
matrixb [49] [17] = '-';
matrixb [49] [18] = '-';
matrixb [49] [19] = '-';
matrixb [49] [20] = '-';
matrixb [49] [21] = '-';
matrixb [49] [22] = '-';
matrixb [49] [23] = '-';
matrixb [49] [24] = '#';
matrixb [49] [25] = '#'; //riga 49 b.n.
matrixb [49] [26] = '#';
matrixb [49] [27] = '#';
matrixb [49] [28] = '#';
matrixb [49] [29] = '-';
matrixb [49] [30] = '-';
matrixb [49] [31] = '-';
matrixb [49] [32] = '-';
matrixb [49] [33] = '-';
matrixb [49] [34] = '-';
matrixb [49] [35] = '-';
matrixb [49] [36] = '-';
matrixb [49] [37] = '-';
matrixb [49] [38] = '|';

matrixb [50] [14] = '|';
matrixb [50] [15] = '-';
matrixb [50] [16] = '-';
matrixb [50] [17] = '-';
matrixb [50] [18] = '-';
matrixb [50] [19] = '-';
matrixb [50] [20] = '-';
matrixb [50] [21] = '-';
matrixb [50] [22] = '-';
matrixb [50] [23] = '-';
matrixb [50] [24] = '#';
matrixb [50] [25] = '#'; //riga 50 b.n.
matrixb [50] [26] = '#';
matrixb [50] [27] = '#';
matrixb [50] [28] = '#';
matrixb [50] [29] = '-';
matrixb [50] [30] = '-';
matrixb [50] [31] = '-';
matrixb [50] [32] = '-';
matrixb [50] [33] = '-';
matrixb [50] [34] = '-';
matrixb [50] [35] = '-';
matrixb [50] [36] = '-';
matrixb [50] [37] = '-';
matrixb [50] [38] = '|';

matrixb [51] [14] = '|';
matrixb [51] [15] = 'O';
matrixb [51] [16] = 'O';
matrixb [51] [17] = 'O';
matrixb [51] [18] = 'O';
matrixb [51] [19] = 'O';
matrixb [51] [20] = 'O';
matrixb [51] [21] = 'O';
matrixb [51] [22] = 'O';
matrixb [51] [23] = 'O';
matrixb [51] [24] = '#';
matrixb [51] [25] = '#'; //riga 51 b.n.
matrixb [51] [26] = '#';
matrixb [51] [27] = '#';
matrixb [51] [28] = '#';
matrixb [51] [29] = 'O';
matrixb [51] [30] = 'O';
matrixb [51] [31] = 'O';
matrixb [51] [32] = 'O';
matrixb [51] [33] = 'O';
matrixb [51] [34] = 'O';
matrixb [51] [35] = 'O';
matrixb [51] [36] = 'O';
matrixb [51] [37] = 'O';
matrixb [51] [38] = 'O';

matrixb [52] [15] = '\\';
matrixb [52] [16] = 'O';
matrixb [52] [17] = 'O';
matrixb [52] [18] = 'O';
matrixb [52] [19] = 'O';
matrixb [52] [20] = 'O';
matrixb [52] [21] = 'O';
matrixb [52] [22] = 'O';
matrixb [52] [23] = 'O';
matrixb [52] [24] = 'O';
matrixb [52] [25] = 'O'; //riga 52 b.n.
matrixb [52] [26] = 'O';
matrixb [52] [27] = 'O';
matrixb [52] [28] = 'O';
matrixb [52] [29] = 'O';
matrixb [52] [30] = 'O';
matrixb [52] [31] = 'O';
matrixb [52] [32] = 'O';
matrixb [52] [33] = 'O';
matrixb [52] [34] = 'O';
matrixb [52] [35] = 'O';
matrixb [52] [36] = 'O';
matrixb [52] [37] = 'O';

matrixb [53] [16] = '\\';
matrixb [53] [17] = 'O';
matrixb [53] [18] = 'O';
matrixb [53] [19] = 'O';
matrixb [53] [20] = 'O';
matrixb [53] [21] = 'O';
matrixb [53] [22] = 'O';
matrixb [53] [23] = 'O';
matrixb [53] [24] = 'O';
matrixb [53] [25] = 'O'; //riga 53 b.n.
matrixb [53] [26] = 'O';
matrixb [53] [27] = 'O';
matrixb [53] [28] = 'O';
matrixb [53] [29] = 'O';
matrixb [53] [30] = 'O';
matrixb [53] [31] = 'O';
matrixb [53] [32] = 'O';
matrixb [53] [33] = 'O';
matrixb [53] [34] = 'O';
matrixb [53] [35] = 'O';
matrixb [53] [36] = '/';

matrixb [54] [17] = '|';
matrixb [54] [18] = 'O';
matrixb [54] [19] = 'O';
matrixb [54] [20] = 'O';
matrixb [54] [21] = 'O';
matrixb [54] [22] = 'O';
matrixb [54] [23] = 'O';
matrixb [54] [24] = 'O';
matrixb [54] [25] = 'O'; //riga 54 b.n.
matrixb [54] [26] = 'O';
matrixb [54] [27] = 'O';
matrixb [54] [28] = 'O';
matrixb [54] [29] = 'O';
matrixb [54] [30] = 'O';
matrixb [54] [31] = 'O';
matrixb [54] [32] = 'O';
matrixb [54] [33] = 'O';
matrixb [54] [34] = 'O';
matrixb [54] [35] = '|';

matrixb [55] [17] = '\\';
matrixb [55] [18] = 'O';
matrixb [55] [19] = 'O';
matrixb [55] [20] = 'O';
matrixb [55] [21] = 'O';
matrixb [55] [22] = 'O';
matrixb [55] [23] = 'O';
matrixb [55] [24] = 'O';
matrixb [55] [25] = 'O'; //riga 55 b.n.
matrixb [55] [26] = 'O';
matrixb [55] [27] = 'O';
matrixb [55] [28] = 'O';
matrixb [55] [29] = 'O';
matrixb [55] [30] = 'O';
matrixb [55] [31] = 'O';
matrixb [55] [32] = 'O';
matrixb [55] [33] = 'O';
matrixb [55] [34] = 'O';
matrixb [55] [35] = '/';

matrixb [56] [18] = '\\';
matrixb [56] [19] = 'O';
matrixb [56] [20] = 'O';
matrixb [56] [21] = 'O';
matrixb [56] [22] = 'O';
matrixb [56] [23] = 'O';
matrixb [56] [24] = 'O';
matrixb [56] [25] = 'O'; //riga 56 b.n.
matrixb [56] [27] = 'O';
matrixb [56] [28] = 'O';
matrixb [56] [29] = 'O';
matrixb [56] [30] = 'O';
matrixb [56] [31] = 'O';
matrixb [56] [32] = 'O';
matrixb [56] [33] = 'O';
matrixb [56] [34] = '/';

matrixb [57] [18] = '\|';
matrixb [57] [19] = 'O';
matrixb [57] [20] = 'O';
matrixb [57] [21] = 'O';
matrixb [57] [22] = 'O';
matrixb [57] [23] = 'O';
matrixb [57] [24] = 'O';
matrixb [57] [25] = '/'; //riga 57 b.n.
matrixb [57] [26] = '-';
matrixb [57] [27] = '\\';
matrixb [57] [28] = 'O';
matrixb [57] [29] = 'O';
matrixb [57] [30] = 'O';
matrixb [57] [31] = 'O';
matrixb [57] [32] = 'O';
matrixb [57] [33] = 'O';
matrixb [57] [34] = '|';

matrixb [58] [18] = '|';
matrixb [58] [19] = 'O';
matrixb [58] [20] = 'O';
matrixb [58] [21] = 'O';
matrixb [58] [22] = 'O';
matrixb [58] [23] = 'O';
matrixb [58] [24] = 'O';
matrixb [58] [25] = '|'; //riga 58 b.n.
matrixb [58] [27] = '|';
matrixb [58] [28] = 'O';
matrixb [58] [29] = 'O';
matrixb [58] [30] = 'O';
matrixb [58] [31] = 'O';
matrixb [58] [32] = 'O';
matrixb [58] [33] = 'O';
matrixb [58] [34] = '|';

matrixb [59] [18] = '|';
matrixb [59] [19] = 'O';
matrixb [59] [20] = 'O';
matrixb [59] [21] = 'O';
matrixb [59] [22] = 'O';
matrixb [59] [23] = 'O';
matrixb [59] [24] = 'O';
matrixb [59] [25] = '|'; //riga 59 b.n.
matrixb [59] [27] = '|';
matrixb [59] [28] = 'O';
matrixb [59] [29] = 'O';
matrixb [59] [30] = 'O';
matrixb [59] [31] = 'O';
matrixb [59] [32] = 'O';
matrixb [59] [33] = 'O';
matrixb [59] [34] = '|';

matrixb [60] [18] = '|';
matrixb [60] [19] = 'O';
matrixb [60] [20] = 'O';
matrixb [60] [21] = 'O';
matrixb [60] [22] = 'O';
matrixb [60] [23] = 'O';
matrixb [60] [24] = 'O';
matrixb [60] [25] = '|'; //riga 60 b.n.
matrixb [60] [27] = '|';
matrixb [60] [28] = 'O';
matrixb [60] [29] = 'O';
matrixb [60] [30] = 'O';
matrixb [60] [31] = 'O';
matrixb [60] [32] = 'O';
matrixb [60] [33] = 'O';
matrixb [60] [34] = '|';

matrixb [61] [18] = '|';
matrixb [61] [19] = 'O';
matrixb [61] [20] = 'O';
matrixb [61] [21] = 'O';
matrixb [61] [22] = 'O';
matrixb [61] [23] = 'O';
matrixb [61] [24] = 'O';
matrixb [61] [25] = '|'; //riga 61 b.n.
matrixb [61] [27] = '|';
matrixb [61] [28] = 'O';
matrixb [61] [29] = 'O';
matrixb [61] [30] = 'O';
matrixb [61] [31] = 'O';
matrixb [61] [32] = 'O';
matrixb [61] [33] = 'O';
matrixb [61] [34] = '|';

matrixb [62] [18] = '|';
matrixb [62] [19] = 'O';
matrixb [62] [20] = 'O';
matrixb [62] [21] = 'O';
matrixb [62] [22] = 'O';
matrixb [62] [23] = 'O';
matrixb [62] [24] = 'O';
matrixb [62] [25] = '|'; //riga 62 b.n.
matrixb [62] [27] = '|';
matrixb [62] [28] = 'O';
matrixb [62] [29] = 'O';
matrixb [62] [30] = 'O';
matrixb [62] [31] = 'O';
matrixb [62] [32] = 'O';
matrixb [62] [33] = 'O';
matrixb [62] [34] = '|';

matrixb [63] [18] = '|';
matrixb [63] [19] = 'O';
matrixb [63] [20] = 'O';
matrixb [63] [21] = 'O';
matrixb [63] [22] = 'O';
matrixb [63] [23] = 'O';
matrixb [63] [24] = 'O';
matrixb [63] [25] = '|'; //riga 63 b.n.
matrixb [63] [27] = '|';
matrixb [63] [28] = 'O';
matrixb [63] [29] = 'O';
matrixb [63] [30] = 'O';
matrixb [63] [31] = 'O';
matrixb [63] [32] = 'O';
matrixb [63] [33] = 'O';
matrixb [63] [34] = '|';

matrixb [64] [18] = '|';
matrixb [64] [19] = '-';
matrixb [64] [20] = '-';
matrixb [64] [21] = '-';
matrixb [64] [22] = '-';
matrixb [64] [23] = '-';
matrixb [64] [24] = '-';
matrixb [64] [25] = '|'; //riga 64 b.n.
matrixb [64] [27] = '|';
matrixb [64] [28] = '-';
matrixb [64] [29] = '-';
matrixb [64] [30] = '-';
matrixb [64] [31] = '-';
matrixb [64] [32] = '-';
matrixb [64] [33] = '-';
matrixb [64] [34] = '|';

matrixb [65] [17] = '-';
matrixb [65] [18] = '/';
matrixb [65] [19] = 'O';
matrixb [65] [20] = 'O';
matrixb [65] [21] = 'O';
matrixb [65] [22] = 'O';
matrixb [65] [23] = 'O';
matrixb [65] [24] = 'O';
matrixb [65] [25] = '|'; //riga 65 b.n.
matrixb [65] [27] = '|';
matrixb [65] [28] = 'O';
matrixb [65] [29] = 'O';
matrixb [65] [30] = 'O';
matrixb [65] [31] = 'O';
matrixb [65] [32] = 'O';
matrixb [65] [33] = 'O';
matrixb [65] [34] = '\\';
matrixb [65] [35] = '-';

matrixb [66] [16] = '/';
matrixb [66] [17] = 'O';
matrixb [66] [18] = 'O';
matrixb [66] [19] = 'O';
matrixb [66] [20] = 'O';
matrixb [66] [21] = 'O';
matrixb [66] [22] = 'O';
matrixb [66] [23] = 'O';
matrixb [66] [24] = '/';  //riga 66 b.n.
matrixb [66] [28] = '\\';
matrixb [66] [29] = 'O';
matrixb [66] [30] = 'O';
matrixb [66] [31] = 'O';
matrixb [66] [32] = 'O';
matrixb [66] [33] = 'O';
matrixb [66] [34] = 'O';
matrixb [66] [35] = 'O';
matrixb [66] [36] = '\\';

matrixb [67] [16] = '|';
matrixb [67] [17] = 'O';
matrixb [67] [18] = 'O';
matrixb [67] [19] = 'O';
matrixb [67] [20] = 'O';
matrixb [67] [21] = 'O';
matrixb [67] [22] = 'O';
matrixb [67] [23] = 'O';
matrixb [67] [24] = '|';  //riga 67 b.n.
matrixb [67] [28] = '|';
matrixb [67] [29] = 'O';
matrixb [67] [30] = 'O';
matrixb [67] [31] = 'O';
matrixb [67] [32] = 'O';
matrixb [67] [33] = 'O';
matrixb [67] [34] = 'O';
matrixb [67] [35] = 'O';
matrixb [67] [36] = '|';

matrixb [68] [16] = '\\';
matrixb [68] [17] = 'O';
matrixb [68] [18] = 'O';
matrixb [68] [19] = 'O';
matrixb [68] [20] = 'O';
matrixb [68] [21] = 'O';
matrixb [68] [22] = 'O';
matrixb [68] [23] = '/';  //riga 68 b.n.
matrixb [68] [29] = '\\';
matrixb [68] [30] = 'O';
matrixb [68] [31] = 'O';
matrixb [68] [32] = 'O';
matrixb [68] [33] = 'O';
matrixb [68] [34] = 'O';
matrixb [68] [35] = 'O';
matrixb [68] [36] = '/';

matrixb [69] [17] = '-';
matrixb [69] [18] = '-';
matrixb [69] [19] = '-';
matrixb [69] [20] = '-';
matrixb [69] [21] = '-';
matrixb [69] [22] = '-';  //riga 69 b.n.
matrixb [69] [30] = '-';
matrixb [69] [31] = '-';
matrixb [69] [32] = '-';
matrixb [69] [33] = '-';
matrixb [69] [34] = '-';
matrixb [69] [35] = '-';

matrixb [26] [86] = '-';
matrixb [26] [87] = '-';
matrixb [26] [88] = '-'; //riga 56 casa
matrixb [26] [89] = '-';
matrixb [26] [90] = '-';
matrixb [26] [91] = '-';

matrixb [27] [75] = '_';
matrixb [27] [76] = '_';
matrixb [27] [77] = '/'; //riga 57 casa
matrixb [27] [78] = '\\';
matrixb [27] [79] = '_';
matrixb [27] [80] = '_';
matrixb [27] [87] = '|';
matrixb [27] [90] = '|';

matrixb [28] [74] = '/';
matrixb [28] [81] = '\\'; //riga 58 casa
matrixb [28] [87] = '|';
matrixb [28] [90] = '|';

matrixb [29] [73] = '_';
matrixb [29] [82] = '_'; //riga 59 casa
matrixb [29] [87] = '|';
matrixb [29] [90] = '|';

matrixb [30] [71] = '_';
matrixb [30] [72] = '/';
matrixb [30] [83] = '\\'; //riga 60 casa
matrixb [30] [84] = '_';
matrixb [30] [87] = '|';
matrixb [30] [90] = '|';

matrixb [31] [70] = '/'; //riga 61 casa
matrixb [31] [85] = '\\';
matrixb [31] [87] = '|';
matrixb [31] [90] = '|';

matrixb [32] [67] = '_';
matrixb [32] [68] = '_';
matrixb [32] [69] = '/'; //riga 62 casa
matrixb [32] [86] = '\\';
matrixb [32] [87] = '|';
matrixb [32] [88] = '_';
matrixb [32] [90] = '|';

matrixb [33] [65] = '_';
matrixb [33] [66] = '/'; //riga 63 casa
matrixb [33] [89] = '\\';
matrixb [33] [90] = '|';

matrixb [34] [63] = '_';
matrixb [34] [64] = '/'; //riga 64 casa
matrixb [34] [91] = '\\';
matrixb [34] [92] = '_';

matrixb [35] [59] = '_';
matrixb [35] [60] = '_';
matrixb [35] [61] = '_'; //riga 65 casa
matrixb [35] [62] = '/';
matrixb [35] [93] = '\\';
matrixb [35] [94] = '_';
matrixb [35] [95] = '_';
matrixb [35] [96] = '_';

matrixb [36] [57] = '_';
matrixb [36] [68] = '/'; //riga 66 casa
matrixb [36] [97] = '\\';
matrixb [36] [98] = '_';

matrixb [37] [56] = '/'; //riga 67 casa
matrixb [37] [99] = '\\';

matrixb [38] [56] = '|'; //riga 68 casa
matrixb [38] [99] = '|';

matrixb [39] [56] = '-'; //riga 69 casa
matrixb [39] [57] = '-';
matrixb [39] [58] = '-';
matrixb [39] [59] = '-';
matrixb [39] [60] = '-';
matrixb [39] [61] = '-';
matrixb [39] [62] = '-';
matrixb [39] [63] = '-';
matrixb [39] [64] = '-';
matrixb [39] [65] = '-';
matrixb [39] [66] = '-';
matrixb [39] [67] = '-';
matrixb [39] [68] = '-';
matrixb [39] [69] = '-';
matrixb [39] [70] = '-';
matrixb [39] [71] = '-';
matrixb [39] [72] = '-';
matrixb [39] [73] = '-';
matrixb [39] [74] = '-';
matrixb [39] [75] = '-';
matrixb [39] [76] = '-';
matrixb [39] [76] = '-';
matrixb [39] [77] = '-';
matrixb [39] [78] = '-';
matrixb [39] [79] = '-';
matrixb [39] [80] = '-';
matrixb [39] [81] = '-';
matrixb [39] [82] = '-';
matrixb [39] [82] = '-';
matrixb [39] [83] = '-';
matrixb [39] [84] = '-';
matrixb [39] [85] = '-';
matrixb [39] [86] = '-';
matrixb [39] [87] = '-';
matrixb [39] [88] = '-';
matrixb [39] [89] = '-';
matrixb [39] [90] = '-';
matrixb [39] [91] = '-';
matrixb [39] [92] = '-';
matrixb [39] [93] = '-';
matrixb [39] [94] = '-';
matrixb [39] [95] = '-';
matrixb [39] [96] = '-';
matrixb [39] [97] = '-';
matrixb [39] [98] = '-';
matrixb [39] [99] = '-';

matrixb [69] [56] = '-'; //riga 99 casa
matrixb [69] [57] = '-'; //PAVIMETO
matrixb [69] [58] = '-';
matrixb [69] [59] = '-';
matrixb [69] [60] = '-';
matrixb [69] [61] = '-';
matrixb [69] [62] = '-';
matrixb [69] [63] = '-';
matrixb [69] [64] = '-';
matrixb [69] [65] = '-';
matrixb [69] [66] = '-';
matrixb [69] [67] = '-';
matrixb [69] [68] = '-';
matrixb [69] [69] = '-';
matrixb [69] [70] = '-';
matrixb [69] [71] = '-';
matrixb [69] [72] = '-';
matrixb [69] [73] = '-';
matrixb [69] [74] = '-';
matrixb [69] [75] = '-';
matrixb [69] [76] = '-';
matrixb [69] [76] = '-';
matrixb [69] [77] = '-';
matrixb [69] [78] = '-';
matrixb [69] [79] = '-';
matrixb [69] [80] = '-';
matrixb [69] [81] = '-';
matrixb [69] [82] = '-';
matrixb [69] [82] = '-';
matrixb [69] [83] = '-';
matrixb [69] [84] = '-';
matrixb [69] [85] = '-';
matrixb [69] [86] = '-';
matrixb [69] [87] = '-';
matrixb [69] [88] = '-';
matrixb [69] [89] = '-';
matrixb [69] [90] = '-';
matrixb [69] [91] = '-';
matrixb [69] [92] = '-';
matrixb [69] [93] = '-';
matrixb [69] [94] = '-';
matrixb [69] [95] = '-';
matrixb [69] [96] = '-';
matrixb [69] [97] = '-';
matrixb [69] [98] = '-';
matrixb [69] [99] = '-';

matrixb [40] [56] = '|'; //colonna 56 casa
matrixb [41] [56] = '|'; //PARETE CASA SX
matrixb [42] [56] = '|';
matrixb [43] [56] = '|';
matrixb [44] [56] = '|';
matrixb [45] [56] = '|';
matrixb [46] [56] = '|';
matrixb [47] [56] = '|';
matrixb [48] [56] = '|';
matrixb [49] [56] = '|';
matrixb [50] [56] = '|';
matrixb [51] [56] = '|';
matrixb [52] [56] = '|';
matrixb [53] [56] = '|';
matrixb [54] [56] = '|';
matrixb [55] [56] = '|';
matrixb [56] [56] = '|';
matrixb [57] [56] = '|';
matrixb [58] [56] = '|';
matrixb [59] [56] = '|';
matrixb [60] [56] = '|';
matrixb [61] [56] = '|';
matrixb [62] [56] = '|';
matrixb [63] [56] = '|';
matrixb [64] [56] = '|';
matrixb [65] [56] = '|';
matrixb [66] [56] = '|';
matrixb [67] [56] = '|';
matrixb [68] [56] = '|';
matrixb [69] [56] = '|';

matrixb [40] [99] = '|'; //colonna 99 casa
matrixb [41] [99] = '|'; //PARETE CASA DX
matrixb [42] [99] = '|';
matrixb [43] [99] = '|';
matrixb [44] [99] = '|';
matrixb [45] [99] = '|';
matrixb [46] [99] = '|';
matrixb [47] [99] = '|';
matrixb [48] [99] = '|';
matrixb [49] [99] = '|';
matrixb [50] [99] = '|';
matrixb [51] [99] = '|';
matrixb [52] [99] = '|';
matrixb [53] [99] = '|';
matrixb [54] [99] = '|';
matrixb [55] [99] = '|';
matrixb [56] [99] = '|';
matrixb [57] [99] = '|';
matrixb [58] [99] = '|';
matrixb [59] [99] = '|';
matrixb [60] [99] = '|';
matrixb [61] [99] = '|';
matrixb [62] [99] = '|';
matrixb [63] [99] = '|';
matrixb [64] [99] = '|';
matrixb [65] [99] = '|';
matrixb [66] [99] = '|';
matrixb [67] [99] = '|';
matrixb [68] [99] = '|';
matrixb [69] [99] = '|';

matrixb [44] [64] = '-'; // FINESTRA ALTO SX
matrixb [44] [65] = '-';
matrixb [44] [66] = '-';
matrixb [44] [67] = '-';
matrixb [44] [68] = '-';
matrixb [44] [69] = '-';
matrixb [44] [70] = '-';
matrixb [44] [71] = '-';
matrixb [44] [72] = '-';
matrixb [45] [64] = '|';
matrixb [45] [72] = '|';
matrixb [46] [64] = '|';
matrixb [46] [72] = '|';
matrixb [47] [64] = '|';
matrixb [47] [72] = '|';
matrixb [48] [64] = '|';
matrixb [48] [72] = '|';
matrixb [49] [64] = '|';
matrixb [49] [72] = '|';
matrixb [50] [64] = '|';
matrixb [50] [72] = '|';
matrixb [51] [64] = '-';
matrixb [51] [65] = '-';
matrixb [51] [66] = '-';
matrixb [51] [67] = '-';
matrixb [51] [68] = '-';
matrixb [51] [69] = '-';
matrixb [51] [70] = '-';
matrixb [51] [71] = '-';
matrixb [51] [72] = '-';

matrixb [44] [83] = '-'; // FINESTRA ALTO DX
matrixb [44] [84] = '-';
matrixb [44] [85] = '-';
matrixb [44] [86] = '-';
matrixb [44] [87] = '-';
matrixb [44] [88] = '-';
matrixb [44] [89] = '-';
matrixb [44] [90] = '-';
matrixb [44] [91] = '-';
matrixb [45] [83] = '|';
matrixb [45] [91] = '|';
matrixb [46] [83] = '|';
matrixb [46] [91] = '|';
matrixb [47] [83] = '|';
matrixb [47] [91] = '|';
matrixb [48] [83] = '|';
matrixb [48] [91] = '|';
matrixb [49] [83] = '|';
matrixb [49] [91] = '|';
matrixb [50] [83] = '|';
matrixb [50] [91] = '|';
matrixb [51] [64] = '-';
matrixb [51] [65] = '-';
matrixb [51] [66] = '-';
matrixb [51] [67] = '-';
matrixb [51] [68] = '-';
matrixb [51] [69] = '-';
matrixb [51] [70] = '-';
matrixb [51] [71] = '-';
matrixb [51] [72] = '-';

matrixb [56] [64] = '-'; // FINESTRA BASSO SX
matrixb [56] [65] = '-';
matrixb [56] [66] = '-';
matrixb [56] [67] = '-';
matrixb [56] [68] = '-';
matrixb [56] [69] = '-';
matrixb [56] [70] = '-';
matrixb [56] [71] = '-';
matrixb [56] [72] = '-';
matrixb [57] [64] = '|';
matrixb [57] [72] = '|';
matrixb [58] [64] = '|';
matrixb [58] [72] = '|';
matrixb [59] [64] = '|';
matrixb [59] [72] = '|';
matrixb [60] [64] = '|';
matrixb [60] [72] = '|';
matrixb [61] [64] = '|';
matrixb [61] [72] = '|';
matrixb [62] [64] = '|';
matrixb [62] [72] = '|';
matrixb [63] [64] = '-';
matrixb [63] [65] = '-';
matrixb [63] [66] = '-';
matrixb [63] [67] = '-';
matrixb [63] [68] = '-';
matrixb [63] [69] = '-';
matrixb [63] [70] = '-';
matrixb [63] [71] = '-';
matrixb [63] [72] = '-';

matrixb [59] [83] = '-'; // PORTA
matrixb [59] [84] = '-';
matrixb [59] [85] = '-';
matrixb [59] [86] = '-';
matrixb [59] [87] = '-';
matrixb [59] [88] = '-';
matrixb [59] [89] = '-';
matrixb [59] [90] = '-';
matrixb [59] [91] = '-';
matrixb [60] [83] = '|';
matrixb [60] [91] = '|';
matrixb [61] [83] = '|';
matrixb [61] [91] = '|';
matrixb [62] [83] = '|';
matrixb [62] [91] = '|';
matrixb [63] [83] = '|';
matrixb [63] [91] = '|';
matrixb [64] [83] = '|';
matrixb [64] [91] = '|';
matrixb [65] [83] = '|';
matrixb [65] [91] = '|';
matrixb [66] [83] = '|';
matrixb [66] [91] = '|';
matrixb [67] [83] = '|';
matrixb [67] [91] = '|';
matrixb [68] [83] = '|';
matrixb [68] [91] = '|';
}

void animazioneb9x9(char matrixb [70] [100])
{
    for (int i=0;i<11;i++)
      {
        for (int j=0;j<100;j++)
        {
            cout << matrixb [i] [j];
        }
        cout << endl;
}
}
void change2(char matrixa [39] [100])
{
    char appoggio [39]={' '};
    for (int i=99;i>=0;i--)
    {
        for (int j=0;j<39;j++)
        {
            if (i==99) appoggio[j] = matrixa [j] [i];
            else if (i<99 || i>0) matrixa [j] [i]= matrixa [j] [i-2];
            if (i==0) matrixa [j] [i] = appoggio [j];
    }
}
}

void bnstate1(char matrixb [70] [100])
{
    matrixb [30] [43] = ' ';
matrixb [30] [44] = ' ';//riga 30 mano su OFF
matrixb [30] [45] = ' ';
matrixb [30] [46] = ' ';

matrixb [31] [42] = ' ';
matrixb [31] [43] = ' ';
matrixb [31] [44] = ' ';//riga 31 mano su OFF
matrixb [31] [45] = ' ';
matrixb [31] [46] = ' ';
matrixb [31] [47] = ' ';

matrixb [32] [41] = ' ';
matrixb [32] [42] = ' ';
matrixb [32] [43] = ' ';
matrixb [32] [44] = ' ';//riga 32 mano su OFF
matrixb [32] [45] = ' ';
matrixb [32] [46] = ' ';
matrixb [32] [47] = ' ';

matrixb [33] [40] = ' ';
matrixb [33] [41] = ' ';
matrixb [33] [42] = ' ';
matrixb [33] [43] = ' ';
matrixb [33] [44] = ' ';//riga 33 mano su OFF
matrixb [33] [45] = ' ';
matrixb [33] [46] = ' ';
matrixb [33] [47] = ' ';

matrixb [34] [39] = ' ';
matrixb [34] [40] = ' ';
matrixb [34] [41] = ' ';
matrixb [34] [42] = ' ';
matrixb [34] [43] = ' ';
matrixb [34] [44] = ' ';//riga 34 mano su OFF
matrixb [34] [45] = ' ';
matrixb [34] [46] = ' ';
matrixb [34] [47] = ' ';

matrixb [35] [39] = ' ';
matrixb [35] [40] = ' ';
matrixb [35] [41] = ' ';
matrixb [35] [42] = ' ';
matrixb [35] [43] = ' ';
matrixb [35] [44] = ' ';//riga 35 mano su OFF
matrixb [35] [45] = ' ';
matrixb [35] [46] = ' ';

matrixb [36] [39] = ' ';
matrixb [36] [40] = ' ';
matrixb [36] [41] = ' ';
matrixb [36] [42] = ' ';
matrixb [36] [43] = ' ';
matrixb [36] [44] = ' ';//riga 36 mano su OFF
matrixb [36] [45] = ' ';

matrixb [37] [39] = ' ';
matrixb [37] [40] = ' '; //riga 37 mano su OFF
matrixb [37] [41] = ' ';
matrixb [37] [42] = ' ';
matrixb [37] [43] = ' ';
matrixb [37] [44] = ' ';

matrixb [38] [39] = ' ';
matrixb [38] [40] = ' '; //riga 38 mano su OFF
matrixb [38] [41] = ' ';
matrixb [38] [42] = ' ';
matrixb [38] [43] = ' ';

matrixb [39] [39] = ' ';
matrixb [39] [40] = ' '; //riga 39 mano su OFF
matrixb [39] [41] = ' ';
matrixb [39] [42] = ' ';

matrixb [40] [39] = ' ';
matrixb [40] [40] = ' '; //riga 40 mano su OFF
matrixb [40] [41] = ' ';

}
void bnstate2(char matrixb [70] [100])
{
    matrixb [35] [39] = '-';
matrixb [35] [40] = '-';
matrixb [35] [41] = '-'; //riga 35 mano metà ON
matrixb [35] [42] = '-';
matrixb [35] [43] = '-';
matrixb [35] [44] = '-';
matrixb [35] [45] = '-';
matrixb [35] [46] = '-';
matrixb [35] [47] = '-';
matrixb [35] [48] = '\\';

matrixb [36] [39] = 'O';
matrixb [36] [40] = 'O';
matrixb [36] [41] = 'O'; //riga 36 mano metà ON
matrixb [36] [42] = 'O';
matrixb [36] [43] = 'O';
matrixb [36] [44] = 'O';
matrixb [36] [45] = 'O';
matrixb [36] [46] = 'O';
matrixb [36] [47] = 'O';
matrixb [36] [48] = 'O';
matrixb [36] [49] = '|';

matrixb [37] [39] = 'O';
matrixb [37] [40] = 'O';
matrixb [37] [41] = 'O'; //riga 37 mano metà ON
matrixb [37] [42] = 'O';
matrixb [37] [43] = 'O';
matrixb [37] [44] = 'O';
matrixb [37] [45] = 'O';
matrixb [37] [46] = 'O';
matrixb [37] [47] = 'O';
matrixb [37] [48] = 'O';
matrixb [37] [49] = '|';

matrixb [38] [39] = 'O';
matrixb [38] [40] = 'O';
matrixb [38] [41] = 'O'; //riga 38 mano metà ON
matrixb [38] [42] = 'O';
matrixb [38] [43] = 'O';
matrixb [38] [44] = 'O';
matrixb [38] [45] = 'O';
matrixb [38] [46] = 'O';
matrixb [38] [47] = 'O';
matrixb [38] [48] = 'O';
matrixb [38] [49] = '|';

matrixb [39] [39] = 'O';
matrixb [39] [40] = 'O';
matrixb [39] [41] = 'O'; //riga 39 mano metà ON
matrixb [39] [42] = 'O';
matrixb [39] [43] = 'O';
matrixb [39] [44] = 'O';
matrixb [39] [45] = 'O';
matrixb [39] [46] = 'O';
matrixb [39] [47] = 'O';
matrixb [39] [48] = 'O';
matrixb [39] [49] = '|';

matrixb [40] [39] = '-';
matrixb [40] [40] = '-';
matrixb [40] [41] = '-'; //riga 40 mano metà ON
matrixb [40] [42] = '-';
matrixb [40] [43] = '-';
matrixb [40] [44] = '-';
matrixb [40] [45] = '-';
matrixb [40] [46] = '-';
matrixb [40] [47] = '-';
matrixb [40] [48] = '/';
}
void bnstate3(char matrixb [70] [100])
{
matrixb [35] [39] = ' ';
matrixb [35] [40] = ' ';
matrixb [35] [41] = ' '; //riga 35 mano metà OFF
matrixb [35] [42] = ' ';
matrixb [35] [43] = ' ';
matrixb [35] [44] = ' ';
matrixb [35] [45] = ' ';
matrixb [35] [46] = ' ';
matrixb [35] [47] = ' ';
matrixb [35] [48] = ' ';

matrixb [36] [39] = ' ';
matrixb [36] [40] = ' ';
matrixb [36] [41] = ' '; //riga 36 mano metà OFF
matrixb [36] [42] = ' ';
matrixb [36] [43] = ' ';
matrixb [36] [44] = ' ';
matrixb [36] [45] = ' ';
matrixb [36] [46] = ' ';
matrixb [36] [47] = ' ';
matrixb [36] [48] = ' ';
matrixb [36] [49] = ' ';

matrixb [37] [39] = ' ';
matrixb [37] [40] = ' ';
matrixb [37] [41] = ' '; //riga 37 mano metà OFF
matrixb [37] [42] = ' ';
matrixb [37] [43] = ' ';
matrixb [37] [44] = ' ';
matrixb [37] [45] = ' ';
matrixb [37] [46] = ' ';
matrixb [37] [47] = ' ';
matrixb [37] [48] = ' ';
matrixb [37] [49] = ' ';

matrixb [38] [39] = ' ';
matrixb [38] [40] = ' ';
matrixb [38] [41] = ' '; //riga 38 mano metà OFF
matrixb [38] [42] = ' ';
matrixb [38] [43] = ' ';
matrixb [38] [44] = ' ';
matrixb [38] [45] = ' ';
matrixb [38] [46] = ' ';
matrixb [38] [47] = ' ';
matrixb [38] [48] = ' ';
matrixb [38] [49] = ' ';

matrixb [39] [39] = ' ';
matrixb [39] [40] = ' ';
matrixb [39] [41] = ' '; //riga 39 mano metà OFF
matrixb [39] [42] = ' ';
matrixb [39] [43] = ' ';
matrixb [39] [44] = ' ';
matrixb [39] [45] = ' ';
matrixb [39] [46] = ' ';
matrixb [39] [47] = ' ';
matrixb [39] [48] = ' ';
matrixb [39] [49] = ' ';

matrixb [40] [39] = ' ';
matrixb [40] [40] = ' ';
matrixb [40] [41] = ' '; //riga 40 mano metà OFF
matrixb [40] [42] = ' ';
matrixb [40] [43] = ' ';
matrixb [40] [44] = ' ';
matrixb [40] [45] = ' ';
matrixb [40] [46] = ' ';
matrixb [40] [47] = ' ';
matrixb [40] [48] = ' ';
}
void bnstate4(char matrixb [70] [100])
{
matrixb [35] [39] = 'O';
matrixb [35] [40] = 'O'; //riga 35 mano giu ON
matrixb [35] [41] = '\\';

matrixb [36] [39] = 'O';
matrixb [36] [40] = 'O'; //riga 36 mano giu ON
matrixb [36] [41] = 'O';
matrixb [36] [42] = '\\';

matrixb [37] [39] = 'O';
matrixb [36] [40] = 'O'; //riga 36 mano giu ON
matrixb [36] [41] = 'O';
matrixb [36] [42] = 'O';
matrixb [36] [43] = '\\';

matrixb [38] [39] = 'O';
matrixb [38] [40] = 'O'; //riga 38 mano giu ON
matrixb [38] [41] = 'O';
matrixb [38] [42] = 'O';
matrixb [38] [43] = 'O';
matrixb [38] [44] = '\\';

matrixb [39] [39] = 'O';
matrixb [39] [40] = 'O'; //riga 39 mano giu ON
matrixb [39] [41] = 'O';
matrixb [39] [42] = 'O';
matrixb [39] [43] = 'O';
matrixb [39] [44] = 'O';
matrixb [39] [45] = '\\';

matrixb [40] [39] = 'O';
matrixb [40] [40] = 'O'; //riga 70 mano giu ON
matrixb [40] [41] = 'O';
matrixb [40] [42] = 'O';
matrixb [40] [43] = 'O';
matrixb [40] [44] = 'O';
matrixb [40] [45] = 'O';
matrixb [40] [46] = '\\';

matrixb [41] [39] = '\\';
matrixb [41] [40] = 'O'; //riga 41 mano giu ON
matrixb [41] [41] = 'O';
matrixb [41] [42] = 'O';
matrixb [41] [43] = 'O';
matrixb [41] [44] = 'O';
matrixb [41] [45] = '/';
matrixb [41] [46] = 'O';
matrixb [41] [47] = '|';

matrixb [42] [40] = '\\';
matrixb [42] [41] = 'O';
matrixb [42] [42] = 'O'; //riga 42 mano giu ON
matrixb [42] [43] = 'O';
matrixb [42] [44] = '/';
matrixb [42] [45] = 'O';
matrixb [42] [46] = 'O';
matrixb [42] [47] = '|';

matrixb [43] [41] = '\\';
matrixb [43] [42] = 'O'; //riga 43 mano giu ON
matrixb [43] [43] = '/';
matrixb [43] [44] = 'O';
matrixb [43] [45] = 'O';
matrixb [43] [46] = 'O';
matrixb [43] [47] = '|';

matrixb [44] [42] = '\\';
matrixb [44] [43] = 'O'; //riga 44 mano giu ON
matrixb [44] [44] = 'O';
matrixb [44] [45] = 'O';
matrixb [44] [46] = 'O';
matrixb [44] [47] = '/';

matrixb [45] [43] = '-';
matrixb [45] [44] = '-'; //riga 45 mano giu ON
matrixb [45] [45] = '-';
matrixb [45] [46] = '/';
}

void bnstate5 (char matrixb [70] [100])
{
   matrixb [35] [39] = ' ';
matrixb [35] [40] = ' '; //riga 35 mano giu OFF
matrixb [65] [41] = ' ';

matrixb [35] [39] = ' ';
matrixb [35] [40] = ' '; //riga 35 mano giu OFF
matrixb [35] [41] = ' ';
matrixb [35] [42] = ' ';

matrixb [37] [39] = ' ';
matrixb [37] [40] = ' '; //riga 37 mano giu OFF
matrixb [37] [41] = ' ';
matrixb [37] [42] = ' ';
matrixb [37] [43] = ' ';

matrixb [38] [39] = ' ';
matrixb [38] [40] = ' '; //riga 38 mano giu OFF
matrixb [38] [41] = ' ';
matrixb [38] [42] = ' ';
matrixb [38] [43] = ' ';
matrixb [38] [44] = ' ';

matrixb [39] [39] = ' ';
matrixb [39] [40] = ' '; //riga 39 mano giu OFF
matrixb [39] [41] = ' ';
matrixb [39] [42] = ' ';
matrixb [39] [43] = ' ';
matrixb [39] [44] = ' ';
matrixb [39] [45] = ' ';

matrixb [40] [39] = ' ';
matrixb [40] [40] = ' '; //riga 40 mano giu OFF
matrixb [40] [41] = ' ';
matrixb [40] [42] = ' ';
matrixb [40] [43] = ' ';
matrixb [40] [44] = ' ';
matrixb [40] [45] = ' ';
matrixb [40] [46] = ' ';

matrixb [41] [39] = ' ';
matrixb [41] [40] = ' '; //riga 41 mano giu OFF
matrixb [41] [41] = ' ';
matrixb [41] [42] = ' ';
matrixb [41] [43] = ' ';
matrixb [41] [44] = ' ';
matrixb [41] [45] = ' ';
matrixb [41] [46] = ' ';
matrixb [41] [47] = ' ';

matrixb [42] [40] = ' ';
matrixb [42] [41] = ' ';
matrixb [42] [42] = ' '; //riga 42 mano giu OFF
matrixb [42] [43] = ' ';
matrixb [42] [44] = ' ';
matrixb [42] [45] = ' ';
matrixb [42] [46] = ' ';
matrixb [42] [47] = ' ';

matrixb [43] [41] = ' ';
matrixb [43] [42] = ' '; //riga 43 mano giu OFF
matrixb [43] [43] = ' ';
matrixb [43] [44] = ' ';
matrixb [43] [45] = ' ';
matrixb [43] [46] = ' ';
matrixb [43] [47] = ' ';

matrixb [44] [42] = ' ';
matrixb [44] [43] = ' '; //riga 44 mano giu OFF
matrixb [44] [44] = ' ';
matrixb [44] [45] = ' ';
matrixb [44] [46] = ' ';
matrixb [44] [47] = ' ';

matrixb [45] [43] = ' ';
matrixb [45] [44] = ' '; //riga 45 mano giu OFF
matrixb [45] [45] = ' ';
matrixb [45] [46] = ' ';
}

void bnstate6 (char matrixb [70] [100])
{
    matrixb [30] [43] = '-';
matrixb [30] [44] = '-';//riga 30 mano su ON
matrixb [30] [45] = '-';
matrixb [30] [46] = '\\';

matrixb [31] [42] = '/';
matrixb [31] [43] = 'O';
matrixb [31] [44] = 'O'; //riga 31 mano su ON
matrixb [31] [45] = 'O';
matrixb [31] [46] = 'O';
matrixb [31] [47] = '\\';

matrixb [32] [41] = '/';
matrixb [32] [42] = 'O';
matrixb [32] [43] = '\\';
matrixb [32] [44] = 'O';//riga 32 mano su ON
matrixb [32] [45] = 'O';
matrixb [32] [46] = 'O';
matrixb [32] [47] = '|';

matrixb [33] [40] = '/';
matrixb [33] [41] = 'O';
matrixb [33] [42] = 'O';
matrixb [33] [43] = 'O';
matrixb [33] [44] = '\\';//riga 33 mano su ON
matrixb [33] [45] = 'O';
matrixb [33] [46] = 'O';
matrixb [33] [47] = '|';

matrixb [34] [39] = '/';
matrixb [34] [40] = 'O';
matrixb [34] [41] = 'O';
matrixb [34] [42] = 'O';
matrixb [34] [43] = 'O';
matrixb [34] [44] = 'O';//riga 34 mano su ON
matrixb [34] [45] = '\\';
matrixb [34] [46] = 'O';
matrixb [34] [47] = '|';

matrixb [35] [39] = 'O';
matrixb [35] [40] = 'O';
matrixb [35] [41] = 'O';
matrixb [35] [42] = 'O';
matrixb [35] [43] = 'O';
matrixb [35] [44] = 'O';//riga 35 mano su ON
matrixb [35] [45] = 'O';
matrixb [35] [46] = '/';

matrixb [36] [39] = 'O';
matrixb [36] [40] = 'O';
matrixb [36] [41] = 'O';
matrixb [36] [42] = 'O';
matrixb [36] [43] = 'O';
matrixb [36] [44] = 'O';//riga 36 mano su ON
matrixb [36] [45] = '/';

matrixb [37] [39] = 'O';
matrixb [37] [40] = 'O'; //riga 37 mano su ON
matrixb [37] [41] = 'O';
matrixb [37] [42] = 'O';
matrixb [37] [43] = 'O';
matrixb [37] [44] = '/';

matrixb [38] [39] = 'O';
matrixb [38] [40] = 'O'; //riga 38 mano su ON
matrixb [38] [41] = 'O';
matrixb [38] [42] = 'O';
matrixb [38] [43] = '/';

matrixb [39] [39] = 'O';
matrixb [39] [40] = 'O'; //riga 39 mano su ON
matrixb [39] [41] = 'O';
matrixb [39] [42] = '/';

matrixb [40] [39] = 'O';
matrixb [40] [40] = 'O'; //riga 40 mano su ON
matrixb [40] [41] = '/';

}

void BuonNatale(char matrixa [39] [100])
{
    matrixa [18] [14] = '#';
matrixa [18] [15] = '#';
matrixa [18] [16] = '#'; //riga 18 B
matrixa [18] [17] = '#';
matrixa [18] [18] = '#';

matrixa [19] [14] = '#';
matrixa [19] [15] = '#';
matrixa [19] [16] = '#'; //riga 19 B
matrixa [19] [17] = '#';
matrixa [19] [18] = '#';
matrixa [19] [19] = '#';

matrixa [20] [14] = '#';
matrixa [20] [15] = '#'; //riga 20 B
matrixa [20] [18] = '#';
matrixa [20] [19] = '#';

matrixa [21] [14] = '#';
matrixa [21] [15] = '#'; //riga 21 B
matrixa [21] [18] = '#';
matrixa [21] [19] = '#';

matrixa [22] [14] = '#';
matrixa [22] [15] = '#';
matrixa [22] [16] = '#'; //riga 22 B
matrixa [22] [17] = '#';
matrixa [22] [18] = '#';

matrixa [23] [14] = '#';
matrixa [23] [15] = '#';
matrixa [23] [16] = '#'; //riga 23 B
matrixa [23] [17] = '#';
matrixa [23] [18] = '#';

matrixa [24] [14] = '#';
matrixa [24] [15] = '#'; //riga 24 B
matrixa [24] [18] = '#';
matrixa [24] [19] = '#';

matrixa [25] [14] = '#';
matrixa [25] [15] = '#'; //riga 25 B
matrixa [25] [18] = '#';
matrixa [25] [19] = '#';

matrixa [26] [14] = '#';
matrixa [26] [15] = '#';
matrixa [26] [16] = '#'; //riga 26 B
matrixa [26] [17] = '#';
matrixa [26] [18] = '#';
matrixa [26] [19] = '#';

matrixa [27] [14] = '#';
matrixa [27] [15] = '#';
matrixa [27] [16] = '#'; //riga 27 B
matrixa [27] [17] = '#';
matrixa [27] [18] = '#';

matrixa [18] [21] = '#';
matrixa [18] [22] = '#'; //riga 18 U
matrixa [18] [25] = '#';
matrixa [18] [26] = '#';

matrixa [19] [21] = '#';
matrixa [19] [22] = '#'; //riga 19 U
matrixa [19] [25] = '#';
matrixa [19] [26] = '#';

matrixa [20] [21] = '#';
matrixa [20] [22] = '#'; //riga 20 U
matrixa [20] [25] = '#';
matrixa [20] [26] = '#';

matrixa [21] [21] = '#';
matrixa [21] [22] = '#'; //riga 21 U
matrixa [21] [25] = '#';
matrixa [21] [26] = '#';

matrixa [22] [21] = '#';
matrixa [22] [22] = '#'; //riga 22 U
matrixa [22] [25] = '#';
matrixa [22] [26] = '#';

matrixa [23] [21] = '#';
matrixa [23] [22] = '#'; //riga 23 U
matrixa [23] [25] = '#';
matrixa [23] [26] = '#';

matrixa [24] [21] = '#';
matrixa [24] [22] = '#'; //riga 24 U
matrixa [24] [25] = '#';
matrixa [24] [26] = '#';

matrixa [25] [21] = '#';
matrixa [25] [22] = '#'; //riga 25 U
matrixa [25] [25] = '#';
matrixa [25] [26] = '#';

matrixa [26] [21] = '#';
matrixa [26] [22] = '#'; //riga 26 U
matrixa [26] [23] = '#';
matrixa [26] [24] = '#';
matrixa [26] [25] = '#';
matrixa [26] [26] = '#';

matrixa [27] [22] = '#'; //riga 27 U
matrixa [27] [23] = '#';
matrixa [27] [24] = '#';
matrixa [27] [25] = '#';

matrixa [18] [29] = '#'; //riga 18 O
matrixa [18] [30] = '#';
matrixa [18] [31] = '#';
matrixa [18] [32] = '#';

matrixa [19] [28] = '#';
matrixa [19] [29] = '#'; //riga 19 O
matrixa [19] [30] = '#';
matrixa [19] [31] = '#';
matrixa [19] [32] = '#';
matrixa [19] [33] = '#';

matrixa [20] [28] = '#';
matrixa [20] [29] = '#'; //riga 20 O
matrixa [20] [32] = '#';
matrixa [20] [33] = '#';

matrixa [21] [28] = '#';
matrixa [21] [29] = '#'; //riga 21 O
matrixa [21] [32] = '#';
matrixa [21] [33] = '#';

matrixa [22] [28] = '#';
matrixa [22] [29] = '#'; //riga 22 O
matrixa [22] [32] = '#';
matrixa [22] [33] = '#';

matrixa [23] [28] = '#';
matrixa [23] [29] = '#'; //riga 23 O
matrixa [23] [32] = '#';
matrixa [23] [33] = '#';

matrixa [24] [28] = '#';
matrixa [24] [29] = '#'; //riga 24 O
matrixa [24] [32] = '#';
matrixa [24] [33] = '#';

matrixa [25] [28] = '#';
matrixa [25] [29] = '#'; //riga 25 O
matrixa [25] [32] = '#';
matrixa [25] [33] = '#';

matrixa [26] [28] = '#';
matrixa [26] [29] = '#'; //riga 26 O
matrixa [26] [30] = '#';
matrixa [26] [31] = '#';
matrixa [26] [32] = '#';
matrixa [26] [33] = '#';

matrixa [27] [29] = '#'; //riga 27 O
matrixa [27] [30] = '#';
matrixa [27] [31] = '#';
matrixa [27] [32] = '#';

matrixa [18] [35] = '#'; //riga 18 N
matrixa [18] [36] = '#';
matrixa [18] [39] = '#';
matrixa [18] [40] = '#';

matrixa [19] [35] = '#'; //riga 19 N
matrixa [19] [36] = '#';
matrixa [19] [39] = '#';
matrixa [19] [40] = '#';

matrixa [20] [35] = '#'; //riga 20 N
matrixa [20] [36] = '#';
matrixa [20] [37] = '#';
matrixa [20] [39] = '#';
matrixa [20] [40] = '#';

matrixa [21] [35] = '#'; //riga 21 N
matrixa [21] [36] = '#';
matrixa [21] [37] = '#';
matrixa [21] [39] = '#';
matrixa [21] [40] = '#';

matrixa [22] [35] = '#'; //riga 22 N
matrixa [22] [36] = '#';
matrixa [22] [37] = '#';
matrixa [22] [38] = '#';
matrixa [22] [39] = '#';
matrixa [22] [40] = '#';

matrixa [23] [35] = '#'; //riga 23 N
matrixa [23] [36] = '#';
matrixa [23] [37] = '#';
matrixa [23] [38] = '#';
matrixa [23] [39] = '#';
matrixa [23] [40] = '#';

matrixa [24] [35] = '#'; //riga 24 N
matrixa [24] [36] = '#';
matrixa [24] [38] = '#';
matrixa [24] [39] = '#';
matrixa [24] [40] = '#';

matrixa [25] [35] = '#'; //riga 25 N
matrixa [25] [36] = '#';
matrixa [25] [38] = '#';
matrixa [25] [39] = '#';
matrixa [25] [40] = '#';

matrixa [26] [35] = '#'; //riga 26 N
matrixa [26] [36] = '#';
matrixa [26] [39] = '#';
matrixa [26] [40] = '#';

matrixa [27] [35] = '#'; //riga 27 N
matrixa [27] [36] = '#';
matrixa [27] [39] = '#';
matrixa [27] [40] = '#';

// spazio

matrixa [18] [45] = '#'; //riga 18 N
matrixa [18] [46] = '#';
matrixa [18] [49] = '#';
matrixa [18] [50] = '#';

matrixa [19] [45] = '#'; //riga 19 N
matrixa [19] [46] = '#';
matrixa [19] [49] = '#';
matrixa [19] [50] = '#';

matrixa [20] [45] = '#'; //riga 20 N
matrixa [20] [46] = '#';
matrixa [20] [47] = '#';
matrixa [20] [49] = '#';
matrixa [20] [50] = '#';

matrixa [21] [45] = '#'; //riga 21 N
matrixa [21] [46] = '#';
matrixa [21] [47] = '#';
matrixa [21] [49] = '#';
matrixa [21] [50] = '#';

matrixa [22] [45] = '#'; //riga 22 N
matrixa [22] [46] = '#';
matrixa [22] [47] = '#';
matrixa [22] [48] = '#';
matrixa [22] [49] = '#';
matrixa [22] [50] = '#';

matrixa [23] [45] = '#'; //riga 23 N
matrixa [23] [46] = '#';
matrixa [23] [47] = '#';
matrixa [23] [48] = '#';
matrixa [23] [49] = '#';
matrixa [23] [50] = '#';

matrixa [24] [45] = '#'; //riga 24 N
matrixa [24] [46] = '#';
matrixa [24] [48] = '#';
matrixa [24] [49] = '#';
matrixa [24] [50] = '#';

matrixa [25] [46] = '#'; //riga 25 N
matrixa [25] [46] = '#';
matrixa [25] [48] = '#';
matrixa [25] [49] = '#';
matrixa [25] [50] = '#';

matrixa [26] [45] = '#'; //riga 26 N
matrixa [26] [46] = '#';
matrixa [26] [49] = '#';
matrixa [26] [50] = '#';

matrixa [27] [45] = '#'; //riga 27 N
matrixa [27] [46] = '#';
matrixa [27] [49] = '#';
matrixa [27] [50] = '#';

matrixa [18] [53] = '#'; //riga 18 A
matrixa [18] [54] = '#';
matrixa [18] [55] = '#';
matrixa [18] [56] = '#';

matrixa [19] [52] = '#';
matrixa [19] [53] = '#'; //riga 19 A
matrixa [19] [54] = '#';
matrixa [19] [55] = '#';
matrixa [19] [56] = '#';
matrixa [19] [57] = '#';

matrixa [20] [52] = '#';
matrixa [20] [53] = '#'; //riga 20 A
matrixa [20] [56] = '#';
matrixa [20] [57] = '#';

matrixa [21] [52] = '#';
matrixa [21] [53] = '#'; //riga 21 A
matrixa [21] [56] = '#';
matrixa [21] [57] = '#';

matrixa [22] [52] = '#';
matrixa [22] [53] = '#'; //riga 22 A
matrixa [22] [54] = '#';
matrixa [22] [55] = '#';
matrixa [22] [56] = '#';
matrixa [22] [57] = '#';

matrixa [23] [52] = '#';
matrixa [23] [53] = '#'; //riga 23 A
matrixa [23] [54] = '#';
matrixa [23] [55] = '#';
matrixa [23] [56] = '#';
matrixa [23] [57] = '#';

matrixa [24] [52] = '#';
matrixa [24] [53] = '#'; //riga 24 A
matrixa [24] [56] = '#';
matrixa [24] [57] = '#';

matrixa [25] [52] = '#';
matrixa [25] [53] = '#'; //riga 25 A
matrixa [25] [56] = '#';
matrixa [25] [57] = '#';

matrixa [26] [52] = '#';
matrixa [26] [53] = '#'; //riga 26 A
matrixa [26] [56] = '#';
matrixa [26] [57] = '#';

matrixa [27] [52] = '#';
matrixa [27] [53] = '#'; //riga 27 A
matrixa [27] [56] = '#';
matrixa [27] [57] = '#';

matrixa [18] [59] = '#';
matrixa [18] [60] = '#'; //riga 18 T
matrixa [18] [61] = '#';
matrixa [18] [62] = '#';
matrixa [18] [63] = '#';
matrixa [18] [64] = '#';

matrixa [19] [59] = '#';
matrixa [19] [60] = '#'; //riga 19 T
matrixa [19] [61] = '#';
matrixa [19] [62] = '#';
matrixa [19] [63] = '#';
matrixa [19] [64] = '#';

matrixa [20] [61] = '#'; //riga 20 T
matrixa [20] [62] = '#';

matrixa [21] [61] = '#'; //riga 21 T
matrixa [21] [62] = '#';

matrixa [22] [61] = '#'; //riga 22 T
matrixa [22] [62] = '#';

matrixa [23] [61] = '#'; //riga 23 T
matrixa [23] [62] = '#';

matrixa [24] [61] = '#'; //riga 24 T
matrixa [24] [62] = '#';

matrixa [25] [61] = '#'; //riga 25 T
matrixa [25] [62] = '#';

matrixa [26] [61] = '#'; //riga 26 T
matrixa [26] [62] = '#';

matrixa [27] [61] = '#'; //riga 27 T
matrixa [27] [62] = '#';


matrixa [18] [67] = '#'; //riga 18 A
matrixa [18] [68] = '#';
matrixa [18] [69] = '#';
matrixa [18] [70] = '#';

matrixa [19] [66] = '#';
matrixa [19] [67] = '#'; //riga 19 A
matrixa [19] [68] = '#';
matrixa [19] [69] = '#';
matrixa [19] [70] = '#';
matrixa [19] [71] = '#';

matrixa [20] [66] = '#';
matrixa [20] [67] = '#'; //riga 20 A
matrixa [20] [70] = '#';
matrixa [20] [71] = '#';

matrixa [21] [66] = '#';
matrixa [21] [67] = '#'; //riga 21 A
matrixa [21] [70] = '#';
matrixa [21] [71] = '#';

matrixa [22] [66] = '#';
matrixa [22] [67] = '#'; //riga 22 A
matrixa [22] [68] = '#';
matrixa [22] [69] = '#';
matrixa [22] [70] = '#';
matrixa [22] [71] = '#';

matrixa [23] [66] = '#';
matrixa [23] [67] = '#'; //riga 23 A
matrixa [23] [68] = '#';
matrixa [23] [69] = '#';
matrixa [23] [70] = '#';
matrixa [23] [71] = '#';

matrixa [24] [66] = '#';
matrixa [24] [67] = '#'; //riga 24 A
matrixa [24] [70] = '#';
matrixa [24] [71] = '#';

matrixa [25] [66] = '#';
matrixa [25] [67] = '#'; //riga 25 A
matrixa [25] [70] = '#';
matrixa [25] [71] = '#';

matrixa [26] [66] = '#';
matrixa [26] [67] = '#'; //riga 26 A
matrixa [26] [70] = '#';
matrixa [26] [71] = '#';

matrixa [27] [66] = '#';
matrixa [27] [67] = '#'; //riga 27 A
matrixa [27] [70] = '#';
matrixa [27] [71] = '#';

matrixa [18] [73] = '#'; //riga 18 L
matrixa [18] [74] = '#';

matrixa [19] [73] = '#'; //riga 19 L
matrixa [19] [74] = '#';

matrixa [20] [73] = '#'; //riga 20 L
matrixa [20] [74] = '#';

matrixa [21] [73] = '#'; //riga 21 L
matrixa [21] [74] = '#';

matrixa [22] [73] = '#'; //riga 22 L
matrixa [22] [74] = '#';

matrixa [23] [73] = '#'; //riga 23 L
matrixa [23] [74] = '#';

matrixa [24] [73] = '#'; //riga 24 L
matrixa [24] [74] = '#';

matrixa [25] [73] = '#'; //riga 25 L
matrixa [25] [74] = '#';

matrixa [26] [73] = '#'; //riga 26 L
matrixa [26] [74] = '#';
matrixa [26] [75] = '#';
matrixa [26] [76] = '#';
matrixa [26] [77] = '#';
matrixa [26] [78] = '#';

matrixa [27] [74] = '#'; //riga 27 L
matrixa [27] [75] = '#';
matrixa [27] [76] = '#';
matrixa [27] [77] = '#';
matrixa [27] [78] = '#';

matrixa [18] [81] = '#'; //riga 18 E
matrixa [18] [82] = '#';
matrixa [18] [83] = '#';
matrixa [18] [84] = '#';
matrixa [18] [85] = '#';

matrixa [19] [80] = '#';
matrixa [19] [81] = '#'; //riga 19 E
matrixa [19] [82] = '#';
matrixa [19] [83] = '#';
matrixa [19] [84] = '#';
matrixa [19] [85] = '#';

matrixa [20] [80] = '#';
matrixa [20] [81] = '#'; //riga 20 E

matrixa [21] [80] = '#';
matrixa [21] [81] = '#'; //riga 21 E

matrixa [22] [80] = '#';
matrixa [22] [81] = '#'; //riga 22 E
matrixa [22] [82] = '#';
matrixa [22] [83] = '#';

matrixa [23] [80] = '#';
matrixa [23] [81] = '#'; //riga 23 E
matrixa [23] [82] = '#';
matrixa [23] [83] = '#';

matrixa [24] [80] = '#';
matrixa [24] [81] = '#'; //riga 24 E

matrixa [25] [80] = '#';
matrixa [25] [81] = '#'; //riga 25 E

matrixa [26] [80] = '#';
matrixa [26] [81] = '#'; //riga 26 E
matrixa [26] [82] = '#';
matrixa [26] [83] = '#';
matrixa [26] [84] = '#';
matrixa [26] [85] = '#';

matrixa [27] [81] = '#'; //riga 27 E
matrixa [27] [82] = '#';
matrixa [27] [83] = '#';
matrixa [27] [84] = '#';
matrixa [27] [85] = '#';

}

int main()
{
    char matrixa [39] [100];
    char matrixb [70] [100];
    char matrix[100][100];
    Spaziovuoto(matrix, 0, matrixa, matrixb);
    Spaziovuoto(matrix, 1, matrixa, matrixb);
    Spaziovuoto(matrix, 2, matrixa, matrixb);
    for (int k=0;k<100;k++)
    {
        matrix [99] [k]='_';
    }
    for (int k=0;k<100;k++)
    {
        matrix [97] [k]='_';
    }
    animazionebase1(matrix);
    animazione(matrix, 0, matrixa, matrixb);

    Sleep(5000);
    /*while(i<=5)
    {
        clock(matrix);
        Sleep(1000);
        i++;
    }*/
    change1(matrix);
    system("cls");
    Song santa;
    thread t(Canzone, santa);
    t.detach();
    animazione(matrix, 0, matrixa, matrixb);
    for (int i=0; i<30;i++)
    {
        thread t1(function1);
        t1.join();
    }
    system("cls");
    animazione2(matrixa, matrixb);
    animazione(matrix, 1, matrixa, matrixb);
    animazioneb9x9(matrixb);
    for (int i=0; i<12;i++)
    {
        thread t1(function1);
        t1.join();
    }
    system("cls");
    for (int i=0;i<46;i++)
    {
        change2(matrixa);
    animazione(matrix, 1, matrixa, matrixb);
    animazioneb9x9(matrixb);
    for (int j=0; j<1;j++)
    {
        thread t1(function1);
        t1.join();
    }
    system("cls");
    }
    Spaziovuoto(matrix, 1,matrixa, matrixb);
    Spaziovuoto(matrix , 2 , matrixa , matrixb);
    animazione3(matrixb);
    animazione(matrix,2,matrixa,matrixb);
    for (int k=0; k<3;k++) //for per far ripetere il saluto di bn
    {
        bnstate1(matrixb);
    bnstate2(matrixb);
    for (int i=0; i<5;i++)
    {
        thread t1(function1);
        t1.join();
    }
    system("cls");
    animazione(matrix,2,matrixa,matrixb);
    bnstate3(matrixb);
    bnstate4(matrixb);
    for (int i=0; i<5;i++)
    {
        thread t1(function1);
        t1.join();
    }
    system("cls");
    animazione(matrix,2,matrixa,matrixb);
    bnstate5(matrixb);
    bnstate2(matrixb);
    for (int i=0; i<5;i++)
    {
        thread t1(function1);
        t1.join();
    }
    system("cls");
    animazione(matrix,2,matrixa,matrixb);

    bnstate3(matrixb);
    bnstate6(matrixb);
    for (int i=0; i<5;i++)
    {
        thread t1(function1);
        t1.join();
    }
    system("cls");
    animazione(matrix,2,matrixa,matrixb);
    for (int i=0; i<5;i++)
    {
        thread t1(function1);
        t1.join();
    }
    }
    system("cls");
    Spaziovuoto(matrix,2, matrixa, matrixb);
    BuonNatale(matrixa);
    animazione(matrix,1,matrixa,matrixb);
    for (int i=0; i<5;i++)
    {
        thread t1(function1);
        t1.join();
    }
    system("Color 04");
    for (int i=0; i<5;i++)
    {
        thread t1(function1);
        t1.join();
    }
    system("Color 02");
    for (int i=0; i<5;i++)
    {
        thread t1(function1);
        t1.join();
    }
    system("Color 04");
    for (int i=0; i<5;i++)
    {
        thread t1(function1);
        t1.join();
    }
    system("Color 02");
    for (int i=0; i<5;i++)
    {
        thread t1(function1);
        t1.join();
    }
    system("Color 04");
    for (int i=0; i<5;i++)
    {
        thread t1(function1);
        t1.join();
    }
    system("Color 02");
    for (int i=0; i<5;i++)
    {
        thread t1(function1);
        t1.join();
    }
    system("Color 04");

    return 0;
}
