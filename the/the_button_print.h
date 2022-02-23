#ifndef THE_BUTTON_PRINT_H
#define THE_BUTTON_PRINT_H

#include <QPushButton>

class PrintButton : public QPushButton {
public:
    PrintButton(const QString &text);
public slots:
    // display help guide
    void print();
};

#endif // THE_BUTTON_PRINT_H
