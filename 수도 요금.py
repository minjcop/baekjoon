A = int(input())
B = int(input())
C = int(input())
D = int(input())
P = int(input())

X = A * P
if P <= C :
    Y = B
else :
    Y = B + (P - C) * D

if X > Y :
    print(Y)
else :
    print(X)