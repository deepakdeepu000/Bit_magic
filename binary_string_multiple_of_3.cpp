int isDivisible(String s) {
        // code here
    int odd=0;
    int even=0;
      
      for(int i=0;i<s.length();i++)
      {
          int bit=s.charAt(i)-'0';
          if(i%2==0)
          {
              even+=bit;
          }
          else
          {
              odd+=bit;
          }
      }
      int delta=Math.abs(even-odd);
      if(delta%3==0)
      {
          return 1;
      }
      else
      {
          return 0;
      }
    }
}
