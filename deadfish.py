'''~Write a simple parser that will parse and run Deadfish.

Deadfish has 4 commands, each 1 character long:

i increments the value (initially 0)
d decrements the value
s squares the value
o outputs the value into the return array
Invalid characters should be ignored.

parse("iiisdoso") => [ 8, 64 ] '''

def ParseInput(deadfish_i):
    #parseia uma entrada deadfish
    i=0
    saida=[]
    for op in deadfish_i:
        if op == 'i':
          i = incrementa(i)
        elif op == 'd':
          i =  decrementa(i)
        elif  op == 's':
          i = quadrado(i)
        elif op == 'o':
           printar(i,saida)

    print(saida)

def incrementa(num):
    return num+1

def decrementa(num):
    return num-1

def quadrado(num):
    return num*num

def printar(num,lista):
    return lista.append(num)

input="iiisdososssso"
ParseInput(input)
