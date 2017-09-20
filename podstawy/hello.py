#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  hello.py
#  
#

ROK_TERAZ = 2017
ROK_PYTHON = 1991

def parzyste(n):
    ile = list(range(0, n+1, 2))
    print(ile)
    return len(ile)

def main(args):
    imie = input("imie?")
    wiek = int(input("Wiek?"))
    rok_urodzenia = ROK_TERAZ - wiek
    print ("witaj!", imie)
    print("rok urodzenia: ", rok_urodzenia)
    
    if ROK_PYTHON < rok_urodzenia:
        print ("Jestem starszy!")
    elif ROK_PYTHON > rok_urodzenia:
        print ("Jestem młodszy!")
    elif ROK_PYTHON == rok_urodzenia:
        print ("Tyle samo lat!")
    n = int(input("Podaj liczbe naturalna: "))
    print("ilość parzystych: ", parzyste(n)) 
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
