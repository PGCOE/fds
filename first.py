def deposit(num):  
    global balance
    balance =balance+num

def withdrawal(num):   
    global balance 
    if(balance >0):
        balance=balance-num 
    else:
        print("Withdraw not possible because balance is less.")
 

list1 = [] #Empty List

balance=0 

while True:
    data = input("Please enter the transaction details:") 
    if ('E' == data):
        break 
    list1.append(data.split())
print(list1)

for var in list1:
    if(var[0]=='D'):
        deposit(int(var[1]))

    elif (var[0]=='W'):
        withdrawal(int(var[1])) 
print("Balance =",balance)
