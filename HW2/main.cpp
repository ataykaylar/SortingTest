#include <iostream>
#include <ctime>

using namespace std;


int binarySearch( int* arr, int N, int value )
{
    int low = 0, high = N - 1;
    while ( low <= high )
    {
        int mid = (low + high) / 2;
        if ( arr[ mid ] < value )
            low = mid + 1;
        else if ( arr[ mid ] > value )
            high = mid - 1;
        else
            return mid;
    }
    return -1;
}

int sequentialSearch( int* arr, int N, int value )
{
    for ( int i = 0; i < N; i++)
        if ( arr[i] == value )
            return i;
    return -1;
}


int main()
{
    double duration;
    double duration2;
    double duration3;
    double duration4;
    double duration5;
    double duration6;
      double duration7;

        double duration8;


    int arrSize[] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 12500, 15000, 17500, 20000, 25000, 50000, 75000, 100000, 150000, 200000,
                     250000, 300000, 350000, 400000, 450000, 500000, 550000, 600000, 650000, 700000, 750000, 800000, 850000, 900000, 950000, 1000000,
                     1500000, 2000000, 2500000, 3000000, 3500000,4000000, 4500000, 5000000, 5500000, 6000000, 6500000, 7000000, 7500000, 8000000,
                     8500000, 9000000, 9500000, 10000000
                    };

    int result1 = 0;
    int result2 = 0;
    int result3 = 0;
    int result4 = 0;
    int result5 = 0;
    int result6 = 0;
    int* arrTest;
    int rep = 9999999;
    int rep2 = 30;
    int rep3 = 9999999;

;




     cout << "Durations for binary search for 53 sizes, that contains the key, in the end: "<< endl;
    for(int i = 0; i < 53; i++)
    {
        arrTest = new int[arrSize[i]];

        for(int j = 0; j < arrSize[i]; j++)
        {
            arrTest[j] = j;
        }

        //býn begýn
        clock_t startTime = clock();
        for (int j = 0; j < rep; j++)
        {
            result1 = binarySearch(arrTest, arrSize[i], arrSize[i] - 1);
        }
        duration = (1000 * double( clock() - startTime ) / CLOCKS_PER_SEC);
        // cout << i + 1 << ". "<< "Execution took " << duration << " milliseconds." << arrSize[i] << endl;

        cout << arrSize[i] << ", " << duration << endl;
    }

    cout << " " << endl;
    cout << " " << endl;


   // cout << "Durations for sequential search for 53 sizes, that contains the key, in the end: "<< endl;
    for(int i = 0; i < 53; i++)
    {
        arrTest = new int[arrSize[i]];

        for(int j = 0; j < arrSize[i]; j++)
        {
            arrTest[j] = j;
        }

        //býn begýn
        clock_t startTime2 = clock();
        for (int j = 0; j < rep2; j++)
        {
            result2 = sequentialSearch(arrTest, arrSize[i], arrSize[i] - 1);
        }
        duration2 = (1000 * double( clock() - startTime2 ) / CLOCKS_PER_SEC);
        //cout << i + 1 << ". " << "Execution took " << duration2 << " milliseconds." << endl;
          cout << arrSize[i] << ", " << duration2 << endl;
    }


    cout << "Durations for binary search for 53 sizes, that contains the key, in the middle: "<< endl;
    for(int i = 0; i < 53; i++)
    {
        arrTest = new int[arrSize[i]];

        for(int j = 0; j < arrSize[i]; j++)
        {
            arrTest[j] = j;
        }

        //býn begýn
        clock_t startTime3 = clock();
        for (int j = 0; j < rep; j++)
        {
            result3 = binarySearch(arrTest, arrSize[i], (arrSize[i] - 1)/ 2);
        }
        duration3 = (1000 * double( clock() - startTime3 ) / CLOCKS_PER_SEC);
        //cout << i + 1 << ". "<< "Execution took " << duration3 << " milliseconds." << endl;
          cout << arrSize[i] << ", " << duration3 << endl;
    }

    cout << " " << endl;
    cout << " " << endl;


    cout << "Durations for sequential search for 53 sizes, that contains the key, in middle: "<< endl;
    for(int i = 0; i < 53; i++)
    {
        arrTest = new int[arrSize[i]];

        for(int j = 0; j < arrSize[i]; j++)
        {
            arrTest[j] = j;
        }

        //býn begýn
        clock_t startTime4 = clock();
        for (int j = 0; j < rep2; j++)
        {
            result4 = sequentialSearch(arrTest, arrSize[i], arrSize[i] / 2);
        }
        duration4= (1000 * double( clock() - startTime4 ) / CLOCKS_PER_SEC) ;
        //cout << i + 1 << ". " << "Execution took " << duration4 << " milliseconds." << endl;
          cout << arrSize[i] << ", " << duration4 << endl;
    }



    cout << " " << endl;
    cout << " " << endl;

cout << "Durations for binary search for 53 sizes, that contains the key, in the beginning: "<< endl;
    for(int i = 0; i < 54; i++)
    {
        arrTest = new int[arrSize[i]];

        for(int j = 0; j < arrSize[i]; j++)
        {
            arrTest[j] = j;
        }

        //býn begýn
        clock_t startTime5 = clock();
        for (int j = 0; j < rep; j++)
        {
            result5 = binarySearch(arrTest, arrSize[i], 1);
        }
        duration5 = (1000 * double( clock() - startTime5 ) / CLOCKS_PER_SEC);
        //cout << i + 1 << ". "<< "Execution took " << duration5 << " milliseconds." << endl;
          cout << arrSize[i] << ", " << duration5 << endl;
    }

    cout << " " << endl;
    cout << " " << endl;


    //cout << "Durations for sequential search for 53 sizes, that contains the key, in the beginning: "<< endl;
    for(int i = 0; i < 54; i++)
    {
        arrTest = new int[arrSize[i]];

        for(int j = 0; j < arrSize[i]; j++)
        {
            arrTest[j] = j;
        }

        //býn begýn
        clock_t startTime6 = clock();
        for (int j = 0; j < rep3; j++)
        {
            result6 = sequentialSearch(arrTest, arrSize[i],  1);
        }
        duration6 = (1000 * double( clock() - startTime6 ) / CLOCKS_PER_SEC) ;
       // cout << i + 1 << ". " << "Execution took " << duration6 << " milliseconds." << endl;
         cout << arrSize[i] << ", " << duration6 << endl;
    }


  cout << " " << endl;
    cout << " " << endl;

//cout << "Durations for binary search for 53 sizes, that does not contain the key: "<< endl;
    for(int i = 0; i < 54; i++)
    {
        arrTest = new int[arrSize[i]];

        for(int j = 0; j < arrSize[i]; j++)
        {
            arrTest[j] = j;
        }

        //býn begýn
        clock_t startTime5 = clock();
        for (int j = 0; j < rep3; j++)
        {
            result5 = binarySearch(arrTest, arrSize[i], 99999999999999999);
        }
        duration7 = (1000 * double( clock() - startTime5 ) / CLOCKS_PER_SEC);
        //cout << i + 1 << ". "<< "Execution took " << duration5 << " milliseconds." << endl;
          cout << arrSize[i] << ", " << duration7 << endl;
    }

    cout << " " << endl;
    cout << " " << endl;


    cout << "Durations for sequential search for 53 sizes, that does not contain the key: "<< endl;
    for(int i = 0; i < 54; i++)
    {
        arrTest = new int[arrSize[i]];

        for(int j = 0; j < arrSize[i]; j++)
        {
            arrTest[j] = j;
        }

        //býn begýn
        clock_t startTime6 = clock();
        for (int j = 0; j < rep2; j++)
        {
            result6 = sequentialSearch(arrTest, arrSize[i],  99999999999999999);
        }
        duration8 = (1000 * double( clock() - startTime6 ) / CLOCKS_PER_SEC);
       // cout << i + 1 << ". " << "Execution took " << duration6 << " milliseconds." << endl;
         cout << arrSize[i] << ", " << duration8 << endl;
    }
    delete [] arrTest;
}




