#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>

typedef struct
{
  int   id;
  char  nom[40];
  char  email[40];
} ELEMENT;
int cpt = 1;
ELEMENT Elm[] = 
{ 
  {0,"",""},
  {1,"aaa","aaa@gmail.com"},
  {2,"bbb","bbb@gmail.com"},
  {3,"ccc","ccc@gmail.com"},
  {4,"ddd","ddd@gmail.com"},
  {5,"eee","eee@gmail.com"},
  {0,"",""}
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  //***** A modifier ***********************
  setNom(Elm[cpt].nom);
  setEmail(Elm[cpt].email);
  //****************************************
}

MainWindow::~MainWindow()
{
    delete ui;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// Fonctions utiles : ne pas modifier /////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::setNom(const char* Text)
{
  fprintf(stderr,"---%s---\n",Text);
  if (strlen(Text) == 0 )
  {
    ui->lineEditNom->clear();
    return;
  }
  ui->lineEditNom->setText(Text);
}

void MainWindow::setEmail(const char* Text)
{
  fprintf(stderr,"---%s---\n",Text);
  if (strlen(Text) == 0 )
  {
    ui->lineEditEmail->clear();
    return;
  }
  ui->lineEditEmail->setText(Text);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// Fonctions clics sur les boutons ////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::on_pushButtonSuivant_clicked()
{
  fprintf(stderr,"Clic sur le bouton >>>\n");
  // TO DO
  if(Elm[cpt + 1].id != 0)
  {
    cpt++;
    setNom(Elm[cpt].nom);
    setEmail(Elm[cpt].email);
  }
}

void MainWindow::on_pushButtonPrecedent_clicked()
{
  fprintf(stderr,"Clic sur le bouton <<<\n");
  // TO DO
  if(Elm[cpt].id > 1)
  {
    cpt--;
    setNom(Elm[cpt].nom);
    setEmail(Elm[cpt].email);
  }
}

void MainWindow::on_pushButtonQuitter_clicked()
{
  fprintf(stderr,"Clic sur le bouton Quitter\n");
  // TO DO
  exit(0);
}
