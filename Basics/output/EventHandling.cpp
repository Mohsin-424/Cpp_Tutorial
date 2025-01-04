

// Event handling in C++ is a technique used in programs (especially in graphical user interfaces or GUIs) to respond to user actions, such as mouse clicks, keyboard presses, or window events

#include <QApplication>
#include <QPushButton>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton button("Click me");
    QObject::connect(&button, &QPushButton::clicked, []()
                     { QMessageBox::information(nullptr, "Event Triggered", "Button was clicked!"); });

    button.show();
    return app.exec();
}
