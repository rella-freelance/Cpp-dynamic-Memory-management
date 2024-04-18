#include <iostream>
using namespace std;

int main(){

int num;
cout<<"Enter total number of elements: ";
cin>>num;
int* ptr;
ptr = new int[num];
cout<<"Enter the int elements "<<endl;

for (int i=0; i<num; ++i){
    cout<< "Element: ";
    cin>>ptr[i];

}

cout<<"\nThe elements entered are: "<<endl;
for (int i=0; i<num; ++i){
    cout<<"Element: "<<ptr[i]<<endl;
}
delete ptr;
return 0;

}