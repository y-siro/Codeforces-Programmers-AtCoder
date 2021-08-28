row, col = map(int, input().split())
arr = [[0 for _ in range(col)] for _ in range(row)]
 
for i in range(row):
    lst = list(input())
    for j in range(col):
        arr[i][j] = lst[j]
 
count = 0
if row >= 3 and col >= 3:
    for i in range(1, row-1):
        for j in range(1, col-1):
            if arr[i][j] == '.':
                count += 1
    check = True
    for i in range(1,row-1):
        if arr[i][0] =='#' or arr[i][col-1] =='#':
            check = False
    for i in range(1,col-1):
        if arr[0][i] == '#' or arr[row-1][i] =='#':
            check=False
    
    if check==True:
        count+=1
 
elif row == 1:
    for i in range(1, col-1):
        if arr[0][i] == '.':
            count += 1
elif col == 1:
    for i in range(1, row -1):
        if arr[i][0] == '.':
            count += 1
elif row == 2:
    for i in range(1, col-1):
        if arr[0][i] == '.' and arr[1][i] == '.':
            count += 1
elif col == 2:
    for i in range(1, row-1):
        if arr[i][0] == '.' and arr[i][1] == '.':
            count += 1
 
 
print(count)
