#Web Problem: https://www.hackerrank.com/challenges/python-print/problem?isFullScreen=true&h_r=next-challenge&h_v=zen

if __name__ == '__main__':
    n = int(input())
    
    for s in range(1,n+1):
        print("{}".format(s), end='')
        
    '''
    
        Another solution:

        print(*range(1, n+1), sep='')
        
    '''