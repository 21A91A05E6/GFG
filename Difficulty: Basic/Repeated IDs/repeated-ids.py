#User function Template for python3

def uniqueId( a, n):
    l=[]
    for i in a:
        if i not in l:
            l.append(i)
    return l
    
    
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [x for x in input().strip().split()]
        
        print(*uniqueId(a, n))
        
        T -= 1


if __name__ == "__main__":
    main()


# } Driver Code Ends