/*Example 1:

Input: n = 00000010100101000001111010011100
Output:    964176192 (00111001011110000010100101000000)
Explanation: The input binary string 00000010100101000001111010011100 represents the unsigned integer 43261596, so return 964176192 which its binary representation is 00111001011110000010100101000000.
Example 2:

Input: n = 11111111111111111111111111111101
Output:   3221225471 (10111111111111111111111111111111)
Explanation: The input binary string 11111111111111111111111111111101 represents the unsigned integer 4294967293, so return 3221225471 which its binary representation is 10111111111111111111111111111111.*/

uint32_t reverseBits(uint32_t n) {
        uint32_t cm = 0;
        for(int i = 0;i < 32; i++){
            cm <<= 1;
            cm |= (n&1);
            n= n>>1;
        } 
        return cm;
    }

/*long long reverse(long long n){
        long long s = 0;
        int j = 31;
        for(int i = 0;i < 31;i++){
                id((n<<i)&1){
                        s+=pow(2,j);
                }
                j--;
        }
        return s;
        
}*/
int main(){
    uint32_t n;
    cin >> n;
    uint32_t k = reverseBits(n);
  cout << k;
}


  
