int n = nums.size();
        int cnt = 0;
        if(n < 3){
            return 0;
        }
        for(int i = 0;i < n-2;i++){
            int diff = nums[i+1]-nums[i];
            for(int j = i+2;j < n;j++){
                int diff2 = nums[j]-nums[j-1];
                if(diff == diff2){
                    cnt++;
                }
                else{
                    break;
                }
            }
        }
        return cnt;
