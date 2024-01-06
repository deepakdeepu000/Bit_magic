#include <iostream>
#include <vector>

using namespace std;

vector<int> sieve_arr(int n){
        
        vector<int> sieve(n+1);
        
        for(int i = 2; i <= n;i++){
	        sieve[i] = i;
	        // cout << sieve[i] << " ";
	    }
	    
        for(int i = 2;i*i <= n;i++){
	        if(sieve[i]%i == 0){
	            for(int j = i*i; j <= n;j+=i){
	                sieve[j] = i;
	            }
	        }
	    }
	    
	    return sieve;
        
    }

   
    int degreeSum(vector<int> &sieve,int num){
        
        if(num <= 1){
            return 0;
        }
        int c = 0;
        if(num%sieve[num] == 0){
            c+=1;
        }
        return c+degreeSum(sieve,num/sieve[num]);  
        
    }
    
    
	int sumOfPowers(int a, int b){
	    // Code here
	    int sum = 0;
	    
	    vector<int> sieve = sieve_arr(b);
	    
	    for(int i = a;i <= b;i++){
	       //cout << sieve[i] << " ";
	       sum += degreeSum(sieve,i);
	    }
	    
	    return sum;
	    
	}

int main() {
    // Example 1
    int a1 = 9, b1 = 12;
    cout << "Example 1 Output: " << sumOfPowers(a1, b1) << endl;

    // Example 2
    int a2 = 24, b2 = 27;
    cout << "Example 2 Output: " << sumOfPowers(a2, b2) << endl;

    return 0;
}
