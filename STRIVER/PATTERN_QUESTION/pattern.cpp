#include <iostream>
using namespace std;

void pattern1(int n)
{
    // * * * *
    // * * * *
    // * * * *
    // * * * *
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    /*
     *
     * *
     * * *
     * * * *
     * * * * **/
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    /*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    */
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    /*
    1
    2 2
    3 3 3
    4 4 4 4
    */
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    /*
     * * * *
     * * *
     * *
     *
     */
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    /*
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    */
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    /*
    1 1 1 1
    2 2 2
    3 3
    4*/
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    /*
     *
     * * *
     * * * * *
     * * * * * * *
     */
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <= (n - i - 1); k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i + 1); j++)
        {
            cout << "* ";
        }
        for (int k = 0; k <= (n - i - 1); k++)
        {
            cout << "  ";
        }

        cout << endl;
    }
}

void pattern9(int n)
{
    /*
     * * * * *
     * * *
     *
     */
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * n - (2 * i + 1)); j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    /*
     *
     * * *
     * * * * *
     * * * * *
     * * *
     *
     */

    /*
     *
     * * *
     * * * * *
     */
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < (n - i - 1); k++)
        {
            cout << "  ";
        }
        for (int j = 1; j < (2 * i + 1); j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < (n - i - 1); k++)
        {
            cout << "  ";
        }
        cout << endl;
    }

    /*
     * * * * *
     * * *
     *
     */
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j < (2 * n - (2 * i + 1)); j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    /*
     *
     * *
     * * *
     * * *
     * *
     *
     */

    /*
     *
     * *
     * * *
     * * * *
     * * * * **/

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    /*
     * * * *
     * * *
     * *
     *
     */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    /*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
    */
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    /*
    1             1
    1 2         2 1
    1 2 3     3 2 1
    1 2 3 4 4 3 2 1 */
    for (int i = 0; i < n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int k = 0; k < 2 * (n - i); k++)
        {
            cout << " ";
        }
        // number
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    /*
    1
    2  3
    4  5  6
    7  8  9  10
    11 12 13 14 15*/
    int num = 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    /*
    A
    A B
    A B C
    A B C D
    A B C D E
    */
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    /*
    A B C D E
    A B C D
    A B C
    A B
    A
    */
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + n - i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern17(int n)
{
    /*
    A
    B B
    C C C
    D D D D
    E E E E E*/
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    /*
          A
        A B A
      A B C B A
    A B C D C B A
    */
    // outer loop
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << "  ";
        }
        // alphabet
        char ch = 'A';
        int breakPoint = (2 * i + 1) / 2;
        for (int k = 1; k <= 2 * i + 1; k++)
        {
            if (k <= breakPoint)
            {
                cout << ch++ << " ";
            }
            else
            {
                cout << ch-- << " ";
            }
        }
        // space
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern19(int n)
{
    /*
    E
    D E
    C D E
    B C D E
    A B C D E*/

    // outer loop
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

// void pattern20(int n){
// /*
// C
// C B
// C B A*/
// for()
// }

void pattern21(int n)
{
    /*
    * * * * * *
    * *     * *
    *         *
    ==============
    *         *
    * *     * *
    * * * * * *

    */
    int inSp = 0;
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < inSp; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        inSp += 2;
        cout << endl;
    }
    inSp = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        // star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < inSp; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        inSp -= 2;
        cout << endl;
    }
}


void pattern22(int n){
    /*
    *               *
    * *           * * 
    * * *       * * *
    * * * * * * * * *
    * * *       * * *
    * *           * *
    *               *
    */
   int space = 2*n-2;
   for(int i = 1; i<= 2*n-1; i++){
    int star = i;
    if(i > n) star = 2*n - i;
    //star
    for(int j = 1; j<= star; j++){
        cout << "* ";
    }
    //space
    for(int j = 1; j<= space; j++){
        cout << "  ";
    }
    //star
    for(int j = 1; j<= star; j++){
        cout << "* ";
    }
    cout << endl;
    if(i < n) space -= 2;
    else space += 2;
   }
}

void pattern23(int n){
    /*
    * * * *
    *     *
    *     *
    * * * *
    
    */
   for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if(i == 0 || j == 0 || i == n - 1 || j == n - 1){
            cout << "*";
        }
        else{
            cout << " ";
        }
    }
    cout << endl;
   }
}


void pattern24(int n){
    /*
    4 4 4 4 4 4 4 
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 3 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4
    */
   for(int i = 0 ; i < 2 * n - 1; i++){
    for(int j = 0; j < 2 * n - 1; j++){
        int top = i;
        int letf = j;
        int right = (2 * n - 2) -j;
        int bottom = (2 * n - 2) - i;
        cout << n - (min(min(top, letf), min(right, bottom)));
    }
    cout << endl;
   }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    { // Using while loop instead of for-loop
        int n;
        cin >> n;
        // pattern1(n);
        // pattern2(n);
        // pattern3(n);
        // pattern4(n);
        // pattern5(n);
        // pattern6(n);
        // pattern7(n);
        // pattern8(n);
        // pattern10(n);
        // pattern11(n);
        // pattern12(n);
        // pattern13(n);
        // pattern14(n);
        // pattern15(n);
        // pattern16(n);
        // pattern17(n);
        // pattern18(n);
        // pattern19(n);
        //pattern21(n);
        //pattern22(n);
        //pattern23(n);
        pattern24(n);
        cout << endl; // Adding a newline between test cases for clarity
    }

    return 0;
}
