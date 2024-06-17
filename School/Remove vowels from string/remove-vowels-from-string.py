#User function Template for python3
class Solution:
	def removeVowels(self, S):
		# code here
		x=""
		for i in s:
		    if i=='a' or i=='e' or i=='i' or i=='o' or i=='u':
		        continue
		    else:
		        x+=i
	    return x


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		s = input()
		
		ob = Solution()	
		answer = ob.removeVowels(s)
		
		print(answer)


# } Driver Code Ends