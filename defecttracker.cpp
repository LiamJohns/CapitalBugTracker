#include "defecttracker.h"
#include "ui_defecttracker.h"
#include "adddefect.h"
#include "trackingclasses.h"


Defect de;
defectTracker::defectTracker(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::defectTracker)
{
    ui->setupUi(this);
    ui->comboBox->addItem("ID: ",de.get_id());
    ui->comboBox->addItem("NAME: ",de.get_name());
    ui->comboBox->addItem("DESCRIPTION: ",de.get_desc());
    ui->comboBox->addItem("STATUS: ",de.get_status());
    ui->comboBox->addItem("REPORTED BY: ",de.get_reported_by());
    ui->comboBox->addItem("DATE REPORTED: ",de.get_registered());


    ui->comboBox2->addItem("ID: ",de.get_id());
    ui->comboBox2->addItem("NAME: ",de.get_name());
    ui->comboBox2->addItem("DESCRIPTION: ",de.get_desc());
    ui->comboBox2->addItem("STATUS: ",de.get_status());
    ui->comboBox2->addItem("REPORTED BY: ",de.get_reported_by());
    ui->comboBox2->addItem("DATE REPORTED: ",de.get_registered());

    ui->comboBox3->addItem("ID: ",de.get_id());
    ui->comboBox3->addItem("NAME: ",de.get_name());
    ui->comboBox3->addItem("DESCRIPTION: ",de.get_desc());
    ui->comboBox3->addItem("STATUS: ",de.get_status());
    ui->comboBox3->addItem("REPORTED BY: ",de.get_reported_by());
    ui->comboBox3->addItem("DATE REPORTED: ",de.get_registered());

    ui->comboBox4->addItem("ID: ",de.get_id());
    ui->comboBox4->addItem("NAME: ",de.get_name());
    ui->comboBox4->addItem("DESCRIPTION: ",de.get_desc());
    ui->comboBox4->addItem("STATUS: ",de.get_status());
    ui->comboBox4->addItem("REPORTED BY: ",de.get_reported_by());
    ui->comboBox4->addItem("DATE REPORTED: ",de.get_registered());

    ui->comboBox5->addItem("ID: ",de.get_id());
    ui->comboBox5->addItem("NAME: ",de.get_name());
    ui->comboBox5->addItem("DESCRIPTION: ",de.get_desc());
    ui->comboBox5->addItem("STATUS: ",de.get_status());
    ui->comboBox5->addItem("REPORTED BY: ",de.get_reported_by());
    ui->comboBox5->addItem("DATE REPORTED: ",de.get_registered());

    ui->comboBox6->addItem("ID: ",de.get_id());
    ui->comboBox6->addItem("NAME: ",de.get_name());
    ui->comboBox6->addItem("DESCRIPTION: ",de.get_desc());
    ui->comboBox6->addItem("STATUS: ",de.get_status());
    ui->comboBox6->addItem("REPORTED BY: ",de.get_reported_by());
    ui->comboBox6->addItem("DATE REPORTED: ",de.get_registered());
}

defectTracker::~defectTracker()
{
    delete ui;
}

void defectTracker::on_backBtn_clicked(){
    this->close();
}

void defectTracker::on_addNewDefect_clicked(){
    window5= new addDefect(this);
    window5->show();
}
