#include <iostream>
#include <windows.h>
#include <thread>
#include "stdafx.h"

using namespace std;

void Spaziovuoto(char matrix [100] [100])
{
    for (int i=0; i<100; i++)
    {
        for(int j=0; j<100; j++)
        {
            matrix [i] [j] = ' ';
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

void animazione (char matrix [100] [100])
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

int main()
{
    char matrix[100][100];
    Spaziovuoto(matrix);
    for (int k=0;k<100;k++)
    {
        matrix [99] [k]='_';
    }
    for (int k=0;k<100;k++)
    {
        matrix [97] [k]='_';
    }

    animazionebase1(matrix);
    animazione(matrix);
    Sleep(5000);
    change1(matrix);
    system("cls");
    Song santa;
    thread t(Canzone, santa);
    t.detach();
    animazione(matrix);
    Sleep(1000000);
}
