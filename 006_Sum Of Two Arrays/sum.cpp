#include <bits/stdc++.h> 

vector<int> reverse(vector<int> v){
	int s = 0;
	int e = v.size() - 1;

	while(s<e){
		swap(v[s],v[e]);
		s++;
		e--;
	}
	return v;
}


vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	vector<int> ans;
	int i = n-1;
	int j = m-1;

	int carry = 0;
	//base case
	while(i>=0 & j>=0){
		int val1 = a[i];
		int val2 = b[j];

		int sum = val1+val2+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
		j--;
	}

	//case1 ->if 1st array is larger
	while(i>=0){
		int sum=a[i]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
	}

	//case2 -> if 2nd array is larger
	while(j>=0){
		int sum=b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		j--;
	}

	//case3 -> if there is extra carry
	while(carry != 0){
		int sum=carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
	}


	return reverse(ans);
}
