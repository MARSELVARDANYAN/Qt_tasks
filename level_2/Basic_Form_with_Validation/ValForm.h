#ifndef WIDGET_H
#define WIDGET_H

 #include <QWidget>
 #include <QApplication>
 #include <QPushButton>
 #include <QLineEdit>
 #include <QFormLayout>
 #include <QMessageBox>


 class ValForm : public QWidget
 {
     Q_OBJECT

 public:
     ValForm(QWidget *parent = nullptr);



 private slots:
     void validation();

 private:
     QLineEdit *lineEdit1;
     QLineEdit *lineEdit2;
     QLineEdit *lineEdit3;

 };
 #endif // WIDGET_H
