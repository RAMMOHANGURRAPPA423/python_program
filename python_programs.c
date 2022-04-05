a=10
print(a)

#print("hello")

training="python"
print("hi,welcome to {0} session!".format(training))

a=b=c=10
print(a,b,c)

a=10
b=20
print(a+b)

a=10+20
print(a)

a="thundersoft"
print(a)

a,b,c,d=10,10.5,"python","true"
print(a,b,c,d)
print(d,c,b,a)

text="my name is {fname},i'm{age}years old.".format(fname="dolly",age=2)

text="my name is {0},i'm{1} years old.".format("dolly",2)

inta=10
type(a)

def m1():
    a=10
    print(a)
    return
def m2():
    a=20
    print(a)
    return
m1()
m2()

def m1():
    a=10
    print(a)
    return
def m2(a):
    print(a)
    return
m1()
m2(20)


a=10
def m1():
    print(a)
    return
def m2():
    print(a)
    return
m1()
m2()

a=10
def m1():
    print(a)
    return
def m2():
    a=20
    print(a)
    return
m1()
m2()

a=20
def test():
    global a
    a=a+10
    print(a)
    return
test()
print(a)

1==int(1.00000)

1.5==int(1.00000)

'2'*4

'''a=input("enter element:'\n'")
b=input("enter element:'\n'")
print(a+b)'''

x=10
if x>0:
    print("x is +ve")

x = 10;y=10;z=x;
print(id(x),id(y),id(z))

id(5*2)

s1="hi"
id(s1)
s2="hi";s3=s1
print(id(s1),id(s3))

for letter in 'python':
    if letter=='h':
        print("in if:",letter)
    continue
else:
    print("letter:",letter)

for letter in 'python':
    if letter=='h':
        pass
        print("pass:",letter)
        print(letter)

y=7
count=0
for x in range(1,78):
    if x%y==0:
        count+=1
    print(count)
