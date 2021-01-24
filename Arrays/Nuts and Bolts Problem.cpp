/*
Question:

Given a set of N nuts of different sizes and N bolts of different sizes. There is a one-one mapping between nuts and bolts. Match nuts and bolts efficiently.

Comparison of a nut to another nut or a bolt to another bolt is not allowed.
It means nut can only be compared with bolt and bolt can only be compared with nut to see which one is bigger/smaller.
The elements should follow the following order ! # $ % & * @ ^ ~ .

Input: 
N = 5
nuts[] = {@, %, $, #, ^}
bolts[] = {%, @, #, $ ^}
Output: 
# $ % @ ^
# $ % @ ^
*/

class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    char a[]={'!','#','$','%','&','*','@','^','~'};
	    int k=0;
	    for(int i=0;i<9;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(a[i]==nuts[j])
	            {
	                swap(nuts[k],nuts[j]);
	                k++;
	                break;
	            }
	        }
	    }
	    k=0;
	    for(int i=0;i<9;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(a[i]==bolts[j])
	            {
	                swap(bolts[k],bolts[j]);
	                k++;
	                break;
	            }
	        }
	    }
	}

};
