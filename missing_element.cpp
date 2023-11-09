#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int a[5] = {1, 2, 3, 4, 5};
	int b[5] = {1, 2, 3, 4};
	
	int size = sizeof(b)/sizeof(b[0]);
	cout<<"Size of b : "<<size;
	for(int i = 0; i<5; i++){
		for(int j = 0; j<4; j++){
			if(a[i] == b[j])
				break;
			if(j == 3)
				cout<<"Missing Element : "<<a[i];
			
		}		
	}	 
	
	return 0; 
}


/*#include<bits/stdc++.h>
using namespace std;
void findMissingelement(int a[], int b[], int n, int m) // find missing element in the array B
{
    for (int i = 0; i < n; i++) // outer loop
    {
        int j;
        for (j = 0; j < m; j++) // inner loop
            if (a[i] == b[j]) // if element is found search element in a[i]
                break;
        if (j == m) // if we reach end of the array means element is not found
            cout << a[i] << " "; // print the element
    }
}
int main()

{

    int a[] = { 1, 2, 6, 3, 4, 5 }; // array A

    int b[] = { 2, 4, 3, 1, 0 }; // array B

    int n = sizeof(a) / sizeof(a[0]); // find size of array A

    int m = sizeof(b) / sizeof(b[1]); // find size of array B

    findMissingelement(a, b, n, m);

    return 0;

}*/
