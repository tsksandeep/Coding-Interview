# A Python3 program to check if 
# four given points form a square or not. 
class Point: 
      
    # Structure of a point in 2D space 
    def __init__(self, x, y): 
        self.x = x 
        self.y = y 
  
# A utility function to find square of  
# distance from point 'p' to point 'q' 
def distSq(p, q): 
    return (p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y) 
  
# This function returns true if (p1, p2, p3, p4)  
# form a square, otherwise false 
def isSquare(p1, p2, p3, p4): 
  
    d2 = distSq(p1, p2) # from p1 to p2 
    d3 = distSq(p1, p3) # from p1 to p3 
    d4 = distSq(p1, p4) # from p1 to p4 
  
    if d2 == 0 or d3 == 0 or d4 == 0:     
        return False
  
    # If lengths if (p1, p2) and (p1, p3) are same, then 
    # following conditions must be met to form a square. 
    # 1) Square of length of (p1, p4) is same as twice 
    # the square of (p1, p2) - Pythagoras
    # 2) Square of length of (p2, p3) is same 
    # as twice the square of (p2, p4) 
  
    if d2 == d3 and 2 * d2 == d4 and 2 * distSq(p2, p4) == distSq(p2, p3): 
        return True

    if d2 == d4 and 2 * d2 == d3 and 2 * distSq(p2, p3) == distSq(p2, p4): 
        return True
  
    if d3 == d4 and 2 * d3 == d2 and 2 * distSq(p3, p2) == distSq(p3, p4): 
        return True
  
    return False
  
# Driver Code 
if __name__=="__main__": 
    p1 = Point(10, 10) 
    p2 = Point(20, 10) 
    p3 = Point(10, 20) 
    p4 = Point(20, 20) 
      
    if isSquare(p1, p2, p3, p4): 
        print('Yes')  
    else: 
        print('No') 