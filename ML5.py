from sklearn.naive_bayes import GaussianNB
from sklearn import datasets
from sklearn import metrics
from sklearn.model_selection import train_test_split

cancer=datasets.load_breast_cancer()
x=cancer.data
y=cancer.target
print(x)
print(y)
print(x.shape)
print(y.shape)

x_train, x_test, y_train, y_test=train_test_split(x,y,test_size=0.3)
gnb=GaussianNB()

clf=gnb.fit(x_train,y_train)
predicted=clf.predict(x_test)

print('accuracy metrics')
print('accuracy of the classifier is',metrics.accuracy_score(y_test,predicted))
print('confusion matrix')
print(metrics.confusion_matrix(y_test,predicted))
