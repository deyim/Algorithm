class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

nums1 = [int(_) for _ in input().split()]
#nums2 = [int(_) for _ in input().split()]

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        Node1 = l1; Node2 = l2
        num1 = []; num2 = []; 
        cnt = 0
        
        while True:
            cnt+=1
            num1.append(Node1.val)
            num2.append(Node2.val)
            # print(Node1.val, Node2.val)
            
            if Node1.next == None:
                break
            Node1 = Node1.next ; Node2 = Node2.next
        
        num3 = [0] * (cnt+1)
        for i in range(cnt):
            sumOf2 = num1[i] + num2[i]
            if sumOf2 >= 10:
                num3[i] += (sumOf2-10)
                num3[i+1] = 1
            else:
                num3[i] += sumOf2
        
        lastNode = ListNode(num3[0])
        firstNode = lastNode
        for i in range(1,cnt+1):
            if(i==cnt and num3[i]==0):
                break
            curNode = ListNode(num3[i])
            lastNode.next = curNode
            lastNode = curNode
            
        
        return firstNode



