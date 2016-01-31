#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

int findMax(vector <float> a){
	float max=0;
	int n=a.size();
	int j=-1;
	for(int i=0;i<n;i++){
		if(a[i]>max){
			j=i;
			max=a[i];
		}
	}
	return j;
}

int main(){
	int n,sum,i=0;
	float cost=0;
	vector <float> vec;
	vector <float> income;
	cin>>n>>sum;
	for(;i<n;i++){
		float x;
		cin>>x;
		vec.push_back(x);
	}
	for(i=0;i<n;i++){
		float x;
		cin>>x;
		income.push_back(x/vec[i]);
	}
	while(sum>0){
		int maxPos=findMax(income);
		if(maxPos==-1){	
			break;
		}
		if(vec[maxPos]>=sum){
			cost=cost+sum*income[maxPos];
			sum=0;
		}else{
			cost=cost+vec[maxPos]*income[maxPos];
			sum=sum-vec[maxPos];
		}
			income[maxPos]=0;
	}
	cout<<fixed<<setprecision(2)<<cost;
	return 0;
}