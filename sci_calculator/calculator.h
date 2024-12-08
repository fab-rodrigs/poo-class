#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QtWidgets>

class Calculator : public QWidget
{
    Q_OBJECT

public:
    Calculator(QWidget* parent = nullptr);
    ~Calculator();


private slots:
    void emptyClicked();
    void commaClicked();
    void button0Clicked();
    void button1Clicked(); // Slot para tratar o clique no bot�o "1"
    void button2Clicked();
    void button3Clicked();
    void button4Clicked();
    void button5Clicked();
    void button6Clicked();
    void button7Clicked();
    void button8Clicked();
    void button9Clicked();
    void empty1Clicked();
    void clearClicked();
    void backspaceClicked();
    void divClicked();
    void mulClicked();
    void subClicked();
    void sumClicked();
    void equalClicked();
private:
    QLineEdit* display;     // Display para mostrar os n�meros digitados
    QPushButton* button0;
    QPushButton* button1;    // Bot�o para o n�mero "1"
    QPushButton* button2;
    QPushButton* button3;
    QPushButton* button4;
    QPushButton* button5;
    QPushButton* button6;
    QPushButton* button7;
    QPushButton* button8;
    QPushButton* button9;
    QPushButton* empty;
    QPushButton* comma;

    QPushButton* empty1;
    QPushButton* clear;
    QPushButton* backspace;
    QPushButton* div;
    QPushButton* mul;
    QPushButton* sub;
    QPushButton* sum;
    QPushButton* equal;

    QGridLayout* mainLayout; // Layout principal
};

#endif // CALCULATOR_H
