#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWebKitWidgets/QWebView>
#include <QLineEdit>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void navigate();
    void on_titleChanged(const QString &title);

private:
    QWebView *webView;
    QLineEdit *urlBar;
    QPushButton *backButton;
    QPushButton *forwardButton;
};

#endif // MAINWINDOW_H
