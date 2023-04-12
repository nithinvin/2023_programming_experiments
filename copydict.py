import copy
mydict1 = {'myNum':  56, 'myLetter':  'D', 'myString': 'Nithin'}

mydict2 = copy.deepcopy(mydict1)

mydict2['myNum'] = 76
print(mydict1)
print(mydict2)
