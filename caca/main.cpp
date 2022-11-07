#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	for (int i = 1; i <= 5; ++i) {
		
		if(i%2){
        cout << i << " ";
		}else{
        cout << i << " "; 
		}
    }	
	return 0;
}
