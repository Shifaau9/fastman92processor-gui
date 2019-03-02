#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFileInfo>
#include <QMessageBox>
#include  <QDir>

//#include <fstream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);
    processor_exucutable = QDir::currentPath() + "/fastman92_processor.exe";
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_open_file_clicked()
{
    ui->progressBar->setValue(0);
    filenames = QFileDialog::getOpenFileNames(this,tr("Choose File(s)"),QDir::currentPath(),tr("Item Defination file (*.ide);;Item Placement file (*.ipl);;Binary Item Placement file (*.wpl);;All files (*.*)") );
    ui->textField->setText(filenames.join(" ; "));
}


void MainWindow::on_selec_game_3_clicked()
{
    ingame = " /input_game GAME_EXACT_GTAIII_PC";
}

void MainWindow::on_selec_game_vc_clicked()
{
    ingame = " /input_game GAME_EXACT_GTAVC_PC";
}

void MainWindow::on_selec_game_sa_clicked()
{
    ingame = " /input_game GAME_EXACT_GTASA_PC";
}

void MainWindow::on_selec_game_4_clicked()
{
    ingame = " /input_game GAME_EXACT_GTAIV_PC";
}

void MainWindow::on_selec_game_5_clicked()
{
    ingame = " /input_game GAME_EXACT_GTAV_PC";
}

void MainWindow::on_selec_game_bully_clicked()
{
    ingame = " /input_game GAME_EXACT_BULLY_SCHOLARSHIP_EDITION_PC";
}

void MainWindow::on_strings_gta4_clicked()
{
    strings = " /string_list data/bully_strings.txt";
}

void MainWindow::on_strings_bully_clicked()
{
    strings = " /string_list data/gtaiv_strings.txt";
}

void MainWindow::on_input_type_binary_clicked()
{
    input_type = " /input_type binary";
}

void MainWindow::on_input_type_text_clicked()
{
    input_type = " /input_type text";
}

void MainWindow::on_output_type_binary_clicked()
{
    output_type = " /output_type binary";
}

void MainWindow::on_output_type_text_clicked()
{
    output_type = " /output_type text";
}

void MainWindow::on_None_clicked()
{
    strings = "";
}

void MainWindow::on_file_type_ide_clicked()
{
    file_type = " /file_type ide";
}

void MainWindow::on_file_type_ipl_clicked()
{
    file_type = " /file_type ipl";
}

void MainWindow::on_process_clicked()
{
    if(ingame == "" || outgame == "" || input_type == "" || output_type == "" || file_type == "" || filenames.empty())
    {
        QMessageBox::warning(this,"Data missing!","Some necessary data entries are missing!");
        }else
        {
            if(QFileInfo(processor_exucutable).exists())
            {
                ui->process->setEnabled(false);

                std::string temp,filename,full_line;

                //std::ofstream file;
                //file.open("fastman92processor.log");

                int counter = 1;
                for(auto item : filenames)
                {
                    temp = item.toStdString();

                QFile f(item);
                QString path = f.fileName();

                filename = path.section("/",-1,-1).toStdString();
                move_position = (ui->lineEdit->text()).toStdString();
                outfile = QDir::currentPath().toStdString() + "/" + filename;

                full_line = "\"\""+ processor_exucutable.toStdString() + "\"" + file_type + input_type + ingame + " /input_filename \"" + temp + "\"" + output_type + outgame + " /output_filename \"" + outfile + "\"" + strings + " /move_position"+ move_position +"\"";

                //  file << filename << "\n" << name << "\n" << full_line << std::endl;

                ui->progressBar->setValue(100/filenames.count()*counter);
                counter++;
                system(full_line.c_str());
                    }
                ui->process->setEnabled(true);
            }
            else{
                QMessageBox::warning(this,"File not found","fastman92processor.exe not found!");
            }
    }
}

void MainWindow::on_selec_output_game_3_clicked()
{
    outgame = " /output_game GAME_EXACT_GTAIII_PC";
}

void MainWindow::on_selec_output_game_vc_clicked()
{
    outgame = " /output_game GAME_EXACT_GTAVC_PC";
}

void MainWindow::on_selec_output_game_sa_clicked()
{
    outgame = " /output_game GAME_EXACT_GTASA_PC";
}

void MainWindow::on_selec_output_game_4_clicked()
{
    outgame = " /output_game GAME_EXACT_GTAIV_PC";
}

void MainWindow::on_selec_output_game_5_clicked()
{
    outgame = " /output_game GAME_EXACT_GTAV_PC";
}

void MainWindow::on_selec_output_game_bully_clicked()
{
    outgame = " /output_game GAME_EXACT_BULLY_SCHOLARSHIP_EDITION_PC";
}

void MainWindow::on_wpl_clicked()
{
    file_type = " /file_type wpl";
}
