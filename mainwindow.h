#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_open_file_clicked();

    void on_selec_game_3_clicked();

    void on_selec_game_vc_clicked();

    void on_selec_game_sa_clicked();

    void on_selec_game_4_clicked();

    void on_selec_game_5_clicked();

    void on_selec_game_bully_clicked();

    void on_strings_gta4_clicked();

    void on_strings_bully_clicked();

    void on_input_type_binary_clicked();

    void on_input_type_text_clicked();

    void on_output_type_binary_clicked();

    void on_output_type_text_clicked();

    void on_None_clicked();

    void on_file_type_ide_clicked();

    void on_file_type_ipl_clicked();

    void on_process_clicked();

    void on_selec_output_game_3_clicked();

    void on_selec_output_game_vc_clicked();

    void on_selec_output_game_sa_clicked();

    void on_selec_output_game_4_clicked();

    void on_selec_output_game_5_clicked();

    void on_selec_output_game_bully_clicked();

    void on_wpl_clicked();

private:
    std::string ingame,outgame,input_type,output_type,file_type,strings,move_position,outfile;
    QString processor_exucutable;
    QStringList filenames;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
