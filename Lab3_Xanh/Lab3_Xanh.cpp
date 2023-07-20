//#include <iostream>
//#include <cmath>
//#include <cstdio>
//using namespace std;
//int main() {
//    float x, y;
//    clock_t time_req;
//
//    /* ví dụ sử dụng hàm pow() để tính */
//  //sử dụng hàm clock() lần thứ nhất
//    time_req = clock();
//    for (int i = 0; i < 100000; i++)
//    {
//        y = log(pow(i, 5));
//    }
//    //sau khi tính xong, sử dụng lần hai đê tính toán khoảng thời gian
//    time_req = clock() - time_req;
//    //cout << "Sử dụng hàm pow(), thì mất " << (float)time_req / CLOCKS_PER_SEC << " giây để tính" << endl;
//
//    /* ví dụ không sử dụng hàm pow() để tính, tương tự như trên */
//    time_req = clock();
//    for (int i = 0; i < 100000; i++)
//    {
//        y = log(i * i * i * i * i);
//    }
//    time_req = clock() - time_req;
//    cout << "Không sử dụng hàm pow(), thì mất " << (float)time_req / CLOCKS_PER_SEC << " giây để tính" << endl;
//
//}