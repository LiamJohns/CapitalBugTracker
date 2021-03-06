#include "adddefect.h"
#include "ui_adddefect.h"
#include "QMessageBox"
#include "trackingclasses.h"
#include <QDate>

Defect def;



addDefect::addDefect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addDefect)
{
    ui->setupUi(this);

}





addDefect::~addDefect()
{
    delete ui;
}

void addDefect::on_backBtn_clicked(){
    this->close();
}

void addDefect::on_submitBtn_clicked(){
    QVector<Defect> defects; //Declare QVector for reading and writing
    defects = read_defect(); //Define defects vector by reading from file
    
    QDate today = def.get_registered(); //Define QDate to current date
    def.set_registered(today.year(), today.month(), today.day()); //setting date registered to current date
    def.set_completed(0, 0, 0); //setting completion date to 0 values
    
    defects.push_back(def); //Adds new defect to the end of defects vector
    write_defects(defects);

    this->close();
    QMessageBox::information(this, "Report Defect","Defect report has been submitted.");
}



void addDefect::on_idEdit_textChanged(const QString &arg1)
{
   def.set_id(arg1);
}



void addDefect::on_nameEdit_textChanged(const QString &arg2)

{
def.set_name(arg2);

}


void addDefect::on_statusEdit_textChanged(const QString &arg3)
{
    def.set_status(arg3);
}




void addDefect::on_descEdit_textChanged(const QString &arg4)
{
    def.set_desc(arg4);

}



void addDefect::on_reportedEdit_textChanged(const QString &arg5)
{

   def.set_reported_by(arg5);
}

