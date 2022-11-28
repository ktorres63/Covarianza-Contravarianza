Class {
	#name : #Yclass,
	#superclass : #Xclass,
	#category : #'co_contra-Varianza'
}

{ #category : #inline }
Yclass >> foo: aAclass1 [ 
|a|
Transcript show: 'Y: message'.
a:= Aclass new.
^ a

]
