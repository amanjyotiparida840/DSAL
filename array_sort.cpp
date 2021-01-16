 #include<iostream>
using namespace std;

bool sort(int arr[],int size){
	if (size==1){
		return true;
	}
	bool roa=sort(arr+1,size-1);
	if (arr[0]<arr[1] && roa){
		return true;
	}
	else{
		return false;
	}
}
int main(){
    int array[]={1,20,35,94,785};
    cout<<sort(array,5);
	return 0;
}
