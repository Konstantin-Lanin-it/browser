#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    webView = new QWebView(this);
    setCentralWidget(webView);

    urlBar = new QLineEdit(this);
    connect(urlBar, &QLineEdit::returnPressed, this, &MainWindow::navigate);

    backButton = new QPushButton("Back", this);
    connect(backButton, &QPushButton::clicked, webView, &QWebView::back);

    forwardButton = new QPushButton("Forward", this);
    connect(forwardButton, &QPushButton::clicked, webView, &QWebView::forward);

    connect(webView, &QWebView::titleChanged, this, &MainWindow::on_titleChanged);

    statusBar()->addWidget(urlBar);
    statusBar()->addWidget(backButton);
    statusBar()->addWidget(forwardButton);

    webView->load(QUrl("https://www.google.com"));
}

MainWindow::~MainWindow()
{
}

void MainWindow::navigate()
{
    webView->load(QUrl(urlBar->text()));
}

void MainWindow::on_titleChanged(const QString &title)
{
    setWindowTitle(title);
}
