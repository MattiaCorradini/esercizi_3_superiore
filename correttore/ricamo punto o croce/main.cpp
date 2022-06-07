#include <iostream>
using namespace std;


bool primi(int n, int m){
	int divn=0;
    int divm=0;
	for(int i=0; i<n; i++){
		if(n%i==0)
			divin++;
	}
	for(int i=0; i<m; i++){
		if(m%i==0)
			divim++;
	}
	if(divin+divim==2)
		return false;
	else
		return true;
}


int main(){
    int n1, n2;
    cin>>n1 >>n2;
    if(!primi(n1, n2))
        cout<<"i numeri sono primi tra loro" <<endl;
    else
        cout<<"i numeri non sono primi tra loro" <<endl;
    return 0;
}
