#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
a:	cout<<n<<" ";
	if (n==1){
		cout<<"\n";
		return 0;
	}
	if (n%2!=0)
		n=3*n+1;
	else
		n=n/2;
	goto a;
}
