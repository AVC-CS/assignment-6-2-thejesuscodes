//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        int randnum;
        randnum = rand() % 100;
        return randnum;
        randnum = 0;
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
        int med, result;
        int testabs1, testabs2, testabs3;
        med = (rdnum1 + rdnum2 + rdnum3)/3;
        testabs1 = med - rdnum1;
        if (testabs1 < 0)
                {testabs1 = testabs1 * -1;}
                
        testabs2 = med - rdnum2;
        if (testabs2 < 0)
                {testabs2 = testabs2 * -1;}

        testabs3 = med - rdnum3;
        if (testabs3 < 0)
                {testabs3 = testabs3 * -1;}


        if ((testabs1 < testabs2) && (testabs1 < testabs3))
        {result = rdnum1;
        return result;}

        if ((testabs2 < testabs3) && (testabs2 < testabs1))
        {result = rdnum2;
        return result;}

        if ((testabs3 < testabs1) && (testabs3 < testabs2))
        {result = rdnum3;
        return result;}

        else 
        {return med;}

}