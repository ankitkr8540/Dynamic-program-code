from sklearn.naive_bayes import GaussianNB
import pandas as pd
from sklearn import *
from sklearn.metrics import accuracy_score
import numpy as np

data=pd.read_csv('dataset7.csv')
df = pd.DataFrame(data)
print(df)

y=df.TARGET
x=df.drop('TARGET',axis=1)

from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(x,y, test_size=0.2, random_state=70)

from sklearn.naive_bayes import GaussianNB
gnb = GaussianNB()
gnb.fit(X_train,y_train)

age=int(input("Enter the age: "))
sex=int(input("Enter the sex: "))
cp=int(input("Enter the chest Pain: "))
trest=int(input("Enter the trest: "))
chol=int(input("Enter the cholestrol: "))

pred=gnb.predict([[age,sex,cp,trest,chol]])
prob=gnb.predict_proba([[age,sex,cp,trest,chol]])
print("Predicted values of given samples is : ",pred)
print("The probability of predicting no heart disease for the input is : ",prob[:,0])
print("The probability of predicting heart disease for the input is : ",prob[:,1])