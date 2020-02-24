#include <iostream>

using namespace std;

int main()
{
    double discount = 0.9;
    double array[2000][5] = {
            {1, -1, 0, 1, 3},
    };
    for (int s = 0; ; s += 5) {
        array[s + 1][0] = (0.2 * array[s+0][0] + 0.8 * array[s+0][1]) * discount + array[0][0];
        array[s + 2][0] = (1 * array[s+0][2]) * discount + array[0][0];
//            cout<<s+2<< "   "<<(1 * array[0][2]) * discount + array[0][0]<<"!!!!";
        array[s + 3][0] = (1 * array[s+0][0]) * discount + array[0][0];
//            cout<<s+3<< "   "<<(1 * array[0][0]) * discount + array[0][0]<<"!!!!";
        array[s + 4][0] = (0.8 * array[s+0][0] + 0.2 * array[s+0][2]) * discount + array[0][0];
        cout << array[s + 1] [0] <<" "<< array[s + 2] [0] <<" "<< array[s + 3] [0] <<" "<< array[s + 4] [0]<<endl;
        array[s + 1][1] = (0.7 * array[s+0][0] + 0.3 * array[s+0][3]) * discount + array[0][1];
        array[s + 2][1] = (0.1 * array[s+0][1] + 0.9 * array[s+0][3]) * discount + array[0][1];
        array[s + 3][1] = (0.8 * array[s+0][2] + 0.2 * array[s+0][3]) * discount + array[0][1];
        array[s + 4][1] = (0.8 * array[s+0][0] + 0.2 * array[s+0][1]) * discount + array[0][1];
        cout << array[s + 1] [1] <<" "<< array[s + 2] [1] <<" "<< array[s + 3] [1] <<" "<< array[s + 4] [1] <<endl;

        array[s + 1][2] = (0.5 * array[s+0][2] + 0.5 * array[s+0][1]) * discount + array[0][2];
        array[s + 2][2] = (0.5 * array[s+0][2] + 0.5 * array[s+0][1]) * discount + array[0][2];
        array[s + 3][2] = (1 * array[s+0][2]) * discount + array[0][2];
        array[s + 4][2] = (0.5 * array[s+0][0] + 0.5 * array[s+0][2]) * discount + array[0][2];
        cout << array[s + 1] [2] <<" "<< array[s + 2] [2] <<" "<< array[s + 3] [2] <<" "<< array[s + 4] [2]<<endl;
        array[s + 1][3] = (1 * array[s+0][3]) * discount + array[0][3];
        array[s + 2][3] = (0.3 * array[s+0][1] + 0.7 * array[s+0][3]) * discount + array[0][3];
        array[s + 3][3] = (1 * array[s+0][4]) * discount + array[0][3];
        array[s + 4][3] = (0.5 * array[s+0][3] + 0.5 * array[s+0][4]) * discount + array[0][3];
        cout << array[s + 1] [3] <<" "<< array[s + 2] [3] <<" "<< array[s + 3] [3] <<" "<< array[s + 4] [3]<<endl;
        array[s + 1][4] = (0.7 * array[s+0][4] + 0.3 * array[s+0][2]) * discount + array[0][4];
        array[s + 2][4] = (0.6 * array[s+0][3] + 0.4 * array[s+0][4]) * discount + array[0][4];
        array[s + 3][4] = (0.9 * array[s+0][3] + 0.1 * array[s+0][4]) * discount + array[0][4];
        array[s + 4][4] = (0.8 * array[s+0][0] + 0.2 * array[s+0][4]) * discount + array[0][4];
        cout << array[s + 1] [4] <<" "<< array[s + 2] [4] <<" "<< array[s + 3] [4] <<" "<< array[s + 4] [4]<<endl;

        for (int j = 0; j < 5; j++) {
            double max = array[s+1][j];
            int i = 2;
            for (; i < 5; i++) {
                if (array[s + i][j] > max) {
                    max = array[s + i][j];
                }
                array[s + 5][j] = max;

            }
            cout<<s<<"     "<<array[s+5][j]<<"\n";


            double epsilon[] = {0,0,0,0,0};
            if(s>=5){
                epsilon[j] = array[s][j] - array[s-5][j];
                if (epsilon[j] < 0)
                    epsilon[j] = -epsilon[j];
                if (epsilon[0] < 0.0001&&epsilon[1]<0.0001&&epsilon[2]<0.0001&&epsilon[3]<0.0001&&epsilon[4]<0.0001)
                    return 0;
            }

        }
    }

//std::cout  << "   " << array[1][1] << " #" << array[2][1] << " @  " << array[3][1] << "   ！" << array[4][1]<<"    "<<array[5][1];
//<< "%    " << array[5][1];
return 0;
}




