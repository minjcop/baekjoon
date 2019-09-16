L = int(input())
A = int(input())
B = int(input())
C = int(input())
D = int(input())

for i in range(41) :
    if C * i >= A and D * i >= B :
        break;
X = i
print(L - X)