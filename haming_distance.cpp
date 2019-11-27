//ABDUL SAMAD

#include<iostream>
using namespace std;

int haming_distance(string str1,string str2){
	int i=0,count=0;
	while(i < str1.length() || i < str2.length()){
		if(str1[i] != str2[i]){
			count++;
		}
		i++;
	}
	return count;
}
int main(){
	string str1= "Abdul";
	string str2= "Samad";
	int hd=haming_distance(str1,str2);
	//cout<<hd;
	cout<<str1.compare(str2); // built in string comparator
	return 0;
}
