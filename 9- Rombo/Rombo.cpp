# include <iostream>
using namespace std ;

int main ()
{
	int matri[5][5];
	int limite=4;
    
    
    
    for (int j = 0; j < limite ; ++j) {
        for (int i = 0; i < limite-j-1; ++i)
            cout << " ";
             cout << "1" ;
        cout << endl ;
    }

    for (int j=limite-2; j>=0; --j) {
        for (int i=0; i<limite-j-1; ++i)
            cout << " " ;
        for (int i=0; i<2*j+1; ++i)
            cout << "1" ;
        cout << endl ;
    }
    return 0;
    
    
}
