void swap(int* xp, int* yp)
{
    *xp = *xp ^ *yp;
    *yp = *xp ^ *yp;
    *xp = *xp ^ *yp;
}
//anoterh method of swapping numbers is
// int main(){
//     int x = 10, y = 5;
//     x = (x * y) / (y = x);
//     cout << x << " " << y;
//     return 0;
// }
