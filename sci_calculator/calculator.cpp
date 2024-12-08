#include "calculator.h"

Calculator::Calculator(QWidget* parent)
    : QWidget(parent)
{
    // Cria o display
    display = new QLineEdit();
    display->setReadOnly(true);  // Impede edição direta pelo usuário
    display->setAlignment(Qt::AlignRight); // Alinha o texto à direita
    display->setText("0");       // Valor inicial do display

    // Cria o botão "0"
    button0 = new QPushButton("0");
    QObject::connect(button0, SIGNAL(clicked()), this, SLOT(button0Clicked()));
    button1 = new QPushButton("1");
    QObject::connect(button1, SIGNAL(clicked()), this, SLOT(button1Clicked()));
    button2 = new QPushButton("2");
    QObject::connect(button2, SIGNAL(clicked()), this, SLOT(button2Clicked()));
    button3 = new QPushButton("3");
    QObject::connect(button3, SIGNAL(clicked()), this, SLOT(button3Clicked()));
    button4 = new QPushButton("4");
    QObject::connect(button4, SIGNAL(clicked()), this, SLOT(button4Clicked()));
    button5 = new QPushButton("5");
    QObject::connect(button5, SIGNAL(clicked()), this, SLOT(button5Clicked()));
    button6 = new QPushButton("6");
    QObject::connect(button6, SIGNAL(clicked()), this, SLOT(button6Clicked()));
    button7 = new QPushButton("7");
    QObject::connect(button7, SIGNAL(clicked()), this, SLOT(button7Clicked()));
    button8 = new QPushButton("8");
    QObject::connect(button8, SIGNAL(clicked()), this, SLOT(button8Clicked()));
    button9 = new QPushButton("9");
    QObject::connect(button9, SIGNAL(clicked()), this, SLOT(button9Clicked()));
    empty = new QPushButton(" ");
    QObject::connect(empty, SIGNAL(clicked()), this, SLOT(emptyClicked()));
    comma = new QPushButton(",");
    QObject::connect(comma, SIGNAL(clicked()), this, SLOT(commaClicked()));

    empty1 = new QPushButton(" ");
    QObject::connect(empty1, SIGNAL(clicked()), this, SLOT(empty1Clicked()));
    clear = new QPushButton("C");
    QObject::connect(clear, SIGNAL(clicked()), this, SLOT(clearClicked()));
    backspace = new QPushButton("B");
    QObject::connect(backspace, SIGNAL(clicked()), this, SLOT(backspaceClicked()));
    div = new QPushButton("/");
    QObject::connect(div, SIGNAL(clicked()), this, SLOT(divClicked()));
    mul = new QPushButton("*");
    QObject::connect(mul, SIGNAL(clicked()), this, SLOT(mulClicked()));
    sub = new QPushButton("-");
    QObject::connect(sub, SIGNAL(clicked()), this, SLOT(subClicked()));
    sum = new QPushButton("+");
    QObject::connect(sum, SIGNAL(clicked()), this, SLOT(sumClicked()));
    equal = new QPushButton("=");
    QObject::connect(equal, SIGNAL(clicked()), this, SLOT(equalClicked()));

    // Configura o layout principal
    mainLayout = new QGridLayout();
    mainLayout->addWidget(display, 0, 0, 1, 4); // Posição 0,0 e tamanho de 1 linha por 4 colunas

    mainLayout->addWidget(button7, 2, 0);
    mainLayout->addWidget(button8, 2, 1);
    mainLayout->addWidget(button9, 2, 2);

    mainLayout->addWidget(button4, 3, 0);
    mainLayout->addWidget(button5, 3, 1);
    mainLayout->addWidget(button6, 3, 2);

    mainLayout->addWidget(button1, 4, 0);     // Botão "1" na quarta linha, primeira coluna
    mainLayout->addWidget(button2, 4, 1);     // Botão "2" na quarta linha, segunda coluna
    mainLayout->addWidget(button3, 4, 2);

    mainLayout->addWidget(empty, 5, 0);
    mainLayout->addWidget(button0, 5, 1);
    mainLayout->addWidget(comma, 5, 2);

    mainLayout->addWidget(empty1, 1, 0);
    mainLayout->addWidget(clear, 1, 1);
    mainLayout->addWidget(backspace, 1, 2);

    mainLayout->addWidget(div, 1, 3);
    mainLayout->addWidget(mul, 2, 3);
    mainLayout->addWidget(sub, 3, 3);
    mainLayout->addWidget(sum, 4, 3);
    mainLayout->addWidget(equal, 5, 3);

    // Define o layout para o widget
    setLayout(mainLayout);
}

Calculator::~Calculator() {}

void Calculator::emptyClicked()
{}
void Calculator::commaClicked()
{}
void Calculator::button0Clicked()
{}
void Calculator::button1Clicked()
{
    QString currentText = display->text(); // Pega o texto atual do display
    if (currentText == "0")                // Remove o zero inicial
        display->setText("1");
    else
        display->setText(currentText + "1"); // Adiciona "1" ao texto atual
}

void Calculator::button2Clicked()
{
    QString currentText = display->text(); // Pega o texto atual do display
    if (currentText == "0")                // Remove o zero inicial
        display->setText("2");
    else
        display->setText(currentText + "2"); // Adiciona "2" ao texto atual
}
void Calculator::button3Clicked()
{}
void Calculator::button4Clicked()
{}
void Calculator::button5Clicked()
{}
void Calculator::button6Clicked()
{}
void Calculator::button7Clicked()
{}
void Calculator::button8Clicked()
{}
void Calculator::button9Clicked()
{}

void Calculator::empty1Clicked()
{}
void Calculator::clearClicked()
{}
void Calculator::backspaceClicked()
{}
void Calculator::divClicked()
{}
void Calculator::mulClicked()
{}
void Calculator::subClicked()
{}
void Calculator::sumClicked()
{}
void Calculator::equalClicked()
{}