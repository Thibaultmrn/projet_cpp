#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setNom(const char* Text);
    void setEmail(const char* Text);

private slots:
    void on_pushButtonSuivant_clicked();
    void on_pushButtonPrecedent_clicked();
    void on_pushButtonQuitter_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
