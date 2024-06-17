#User function Template for python3

class Solution:
    def leftElement(self, arr, n):
        arr.sort()
    # Your code goes here  
        left, right = 0, n - 1
        
        # Simulate the removal process
        for i in range(n - 1):
            if i % 2 == 0:
                # Remove the maximum element
                right -= 1
            else:
                # Remove the minimum element
                left += 1
        
        # The last remaining element
        return arr[left]
    



#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        ob=Solution()
        print(ob.leftElement(a, n))

        T -= 1


if __name__ == "__main__":
    main()





    
# } Driver Code Ends