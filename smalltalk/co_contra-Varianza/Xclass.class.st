Class {
	#name : #Xclass,
	#superclass : #Object,
	#category : #'co_contra-Varianza'
}

{ #category : #inline }
Xclass >> foo: aBclass1 [ 
|a|
Transcript show: 'X: a message'.
a:= Aclass new.
^ a

]

{ #category : #pruebaTYpe }
Xclass >> goo [
^100.
]
