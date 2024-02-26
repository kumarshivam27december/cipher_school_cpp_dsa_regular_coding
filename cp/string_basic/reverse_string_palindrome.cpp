#include <bits/stdc++.h>
using namespace std;
void reverse_str(string str){
	int s = 0;
	int e = str.size()-1;
	while (s<e)
	{
		swap(str[s],str[e]);
		s++;
		e--;
	}

	cout<<str<<endl;
	
}
bool palindrome(string str){
	int s = 0;
	int e = str.size()-1;
	while (s<e)
	{
		if (str[s]!=str[e])
		{
			return false;
		}
		s++;
		e--;
	}

	return true;
}
string reverse(string str){
	string newstr = "";
	for (int i = str.size()-1; i >=0; i--)
	{
		newstr.push_back(str[i]);
	}
	return newstr;
	
}
int main(){
	string str = "ama";
	string str2 = reverse(str);
	cout<<str2<<endl;
	reverse_str(str);
	if (palindrome(str))
	{
		cout<<"It is a palindromic string";
	}else{
		cout<<"It is not a palindromic string";
	}
	
	return 0;
}
