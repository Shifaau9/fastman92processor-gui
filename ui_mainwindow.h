/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLineEdit *textField;
    QPushButton *open_file;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *progressBar;
    QPushButton *process;
    QTabWidget *tabwidget;
    QWidget *input;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *selectinputgame;
    QFrame *line;
    QRadioButton *selec_game_3;
    QRadioButton *selec_game_vc;
    QRadioButton *selec_game_sa;
    QRadioButton *selec_game_4;
    QRadioButton *selec_game_5;
    QRadioButton *selec_game_bully;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *inputype;
    QFrame *line_2;
    QRadioButton *input_type_binary;
    QRadioButton *input_type_text;
    QSpacerItem *verticalSpacer;
    QWidget *output;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QLabel *selectoutputgame;
    QFrame *line_3;
    QRadioButton *selec_output_game_3;
    QRadioButton *selec_output_game_vc;
    QRadioButton *selec_output_game_sa;
    QRadioButton *selec_output_game_4;
    QRadioButton *selec_output_game_5;
    QRadioButton *selec_output_game_bully;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QLabel *outputtype;
    QFrame *line_4;
    QRadioButton *output_type_binary;
    QRadioButton *output_type_text;
    QSpacerItem *verticalSpacer_2;
    QWidget *others;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_7;
    QLabel *strings;
    QFrame *line_6;
    QRadioButton *strings_gta4;
    QRadioButton *strings_bully;
    QRadioButton *None;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_3;
    QLabel *filetype;
    QFrame *line_5;
    QRadioButton *file_type_ide;
    QRadioButton *file_type_ipl;
    QRadioButton *wpl;
    QSpacerItem *verticalSpacer_4;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_9;
    QLabel *label;
    QFrame *line_7;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(346, 312);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(346, 312));
        MainWindow->setMaximumSize(QSize(346, 312));
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        MainWindow->setFont(font);
        MainWindow->setWindowOpacity(0.990000000000000);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_8 = new QVBoxLayout(centralWidget);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textField = new QLineEdit(centralWidget);
        textField->setObjectName(QString::fromUtf8("textField"));

        horizontalLayout->addWidget(textField);

        open_file = new QPushButton(centralWidget);
        open_file->setObjectName(QString::fromUtf8("open_file"));
        sizePolicy.setHeightForWidth(open_file->sizePolicy().hasHeightForWidth());
        open_file->setSizePolicy(sizePolicy);
        open_file->setFlat(false);

        horizontalLayout->addWidget(open_file);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_3->addWidget(progressBar);

        process = new QPushButton(centralWidget);
        process->setObjectName(QString::fromUtf8("process"));

        horizontalLayout_3->addWidget(process);


        verticalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_8->addLayout(verticalLayout_6);

        tabwidget = new QTabWidget(centralWidget);
        tabwidget->setObjectName(QString::fromUtf8("tabwidget"));
        input = new QWidget();
        input->setObjectName(QString::fromUtf8("input"));
        layoutWidget = new QWidget(input);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 171, 168));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        selectinputgame = new QLabel(layoutWidget);
        selectinputgame->setObjectName(QString::fromUtf8("selectinputgame"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStyleStrategy(QFont::PreferAntialias);
        selectinputgame->setFont(font1);
        selectinputgame->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(selectinputgame);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        selec_game_3 = new QRadioButton(layoutWidget);
        selec_game_3->setObjectName(QString::fromUtf8("selec_game_3"));

        verticalLayout_4->addWidget(selec_game_3);

        selec_game_vc = new QRadioButton(layoutWidget);
        selec_game_vc->setObjectName(QString::fromUtf8("selec_game_vc"));

        verticalLayout_4->addWidget(selec_game_vc);

        selec_game_sa = new QRadioButton(layoutWidget);
        selec_game_sa->setObjectName(QString::fromUtf8("selec_game_sa"));

        verticalLayout_4->addWidget(selec_game_sa);

        selec_game_4 = new QRadioButton(layoutWidget);
        selec_game_4->setObjectName(QString::fromUtf8("selec_game_4"));

        verticalLayout_4->addWidget(selec_game_4);

        selec_game_5 = new QRadioButton(layoutWidget);
        selec_game_5->setObjectName(QString::fromUtf8("selec_game_5"));

        verticalLayout_4->addWidget(selec_game_5);

        selec_game_bully = new QRadioButton(layoutWidget);
        selec_game_bully->setObjectName(QString::fromUtf8("selec_game_bully"));

        verticalLayout_4->addWidget(selec_game_bully);

        layoutWidget1 = new QWidget(input);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(210, 10, 101, 113));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        inputype = new QLabel(layoutWidget1);
        inputype->setObjectName(QString::fromUtf8("inputype"));
        inputype->setFont(font1);
        inputype->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(inputype);

        line_2 = new QFrame(layoutWidget1);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        input_type_binary = new QRadioButton(layoutWidget1);
        input_type_binary->setObjectName(QString::fromUtf8("input_type_binary"));

        verticalLayout_2->addWidget(input_type_binary);

        input_type_text = new QRadioButton(layoutWidget1);
        input_type_text->setObjectName(QString::fromUtf8("input_type_text"));

        verticalLayout_2->addWidget(input_type_text);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabwidget->addTab(input, QString());
        output = new QWidget();
        output->setObjectName(QString::fromUtf8("output"));
        layoutWidget2 = new QWidget(output);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(9, 9, 171, 168));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        selectoutputgame = new QLabel(layoutWidget2);
        selectoutputgame->setObjectName(QString::fromUtf8("selectoutputgame"));
        selectoutputgame->setFont(font1);
        selectoutputgame->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(selectoutputgame);

        line_3 = new QFrame(layoutWidget2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_3);

        selec_output_game_3 = new QRadioButton(layoutWidget2);
        selec_output_game_3->setObjectName(QString::fromUtf8("selec_output_game_3"));

        verticalLayout_5->addWidget(selec_output_game_3);

        selec_output_game_vc = new QRadioButton(layoutWidget2);
        selec_output_game_vc->setObjectName(QString::fromUtf8("selec_output_game_vc"));

        verticalLayout_5->addWidget(selec_output_game_vc);

        selec_output_game_sa = new QRadioButton(layoutWidget2);
        selec_output_game_sa->setObjectName(QString::fromUtf8("selec_output_game_sa"));

        verticalLayout_5->addWidget(selec_output_game_sa);

        selec_output_game_4 = new QRadioButton(layoutWidget2);
        selec_output_game_4->setObjectName(QString::fromUtf8("selec_output_game_4"));

        verticalLayout_5->addWidget(selec_output_game_4);

        selec_output_game_5 = new QRadioButton(layoutWidget2);
        selec_output_game_5->setObjectName(QString::fromUtf8("selec_output_game_5"));

        verticalLayout_5->addWidget(selec_output_game_5);

        selec_output_game_bully = new QRadioButton(layoutWidget2);
        selec_output_game_bully->setObjectName(QString::fromUtf8("selec_output_game_bully"));

        verticalLayout_5->addWidget(selec_output_game_bully);

        layoutWidget3 = new QWidget(output);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(210, 10, 101, 113));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        outputtype = new QLabel(layoutWidget3);
        outputtype->setObjectName(QString::fromUtf8("outputtype"));
        outputtype->setFont(font1);
        outputtype->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(outputtype);

        line_4 = new QFrame(layoutWidget3);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        output_type_binary = new QRadioButton(layoutWidget3);
        output_type_binary->setObjectName(QString::fromUtf8("output_type_binary"));

        verticalLayout->addWidget(output_type_binary);

        output_type_text = new QRadioButton(layoutWidget3);
        output_type_text->setObjectName(QString::fromUtf8("output_type_text"));

        verticalLayout->addWidget(output_type_text);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        tabwidget->addTab(output, QString());
        others = new QWidget();
        others->setObjectName(QString::fromUtf8("others"));
        layoutWidget4 = new QWidget(others);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(205, 9, 111, 101));
        verticalLayout_7 = new QVBoxLayout(layoutWidget4);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        strings = new QLabel(layoutWidget4);
        strings->setObjectName(QString::fromUtf8("strings"));
        strings->setFont(font1);
        strings->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(strings);

        line_6 = new QFrame(layoutWidget4);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_6);

        strings_gta4 = new QRadioButton(layoutWidget4);
        strings_gta4->setObjectName(QString::fromUtf8("strings_gta4"));

        verticalLayout_7->addWidget(strings_gta4);

        strings_bully = new QRadioButton(layoutWidget4);
        strings_bully->setObjectName(QString::fromUtf8("strings_bully"));

        verticalLayout_7->addWidget(strings_bully);

        None = new QRadioButton(layoutWidget4);
        None->setObjectName(QString::fromUtf8("None"));

        verticalLayout_7->addWidget(None);

        layoutWidget5 = new QWidget(others);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 10, 171, 105));
        verticalLayout_3 = new QVBoxLayout(layoutWidget5);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        filetype = new QLabel(layoutWidget5);
        filetype->setObjectName(QString::fromUtf8("filetype"));
        filetype->setFont(font1);
        filetype->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(filetype);

        line_5 = new QFrame(layoutWidget5);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_5);

        file_type_ide = new QRadioButton(layoutWidget5);
        file_type_ide->setObjectName(QString::fromUtf8("file_type_ide"));

        verticalLayout_3->addWidget(file_type_ide);

        file_type_ipl = new QRadioButton(layoutWidget5);
        file_type_ipl->setObjectName(QString::fromUtf8("file_type_ipl"));

        verticalLayout_3->addWidget(file_type_ipl);

        wpl = new QRadioButton(layoutWidget5);
        wpl->setObjectName(QString::fromUtf8("wpl"));

        verticalLayout_3->addWidget(wpl);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        layoutWidget6 = new QWidget(others);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 120, 301, 56));
        verticalLayout_9 = new QVBoxLayout(layoutWidget6);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget6);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label);

        line_7 = new QFrame(layoutWidget6);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_9->addWidget(line_7);

        lineEdit = new QLineEdit(layoutWidget6);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_9->addWidget(lineEdit);

        tabwidget->addTab(others, QString());

        verticalLayout_8->addWidget(tabwidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 346, 21));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(textField, open_file);
        QWidget::setTabOrder(open_file, process);
        QWidget::setTabOrder(process, selec_game_3);
        QWidget::setTabOrder(selec_game_3, selec_game_vc);
        QWidget::setTabOrder(selec_game_vc, selec_game_sa);
        QWidget::setTabOrder(selec_game_sa, selec_game_4);
        QWidget::setTabOrder(selec_game_4, selec_game_5);
        QWidget::setTabOrder(selec_game_5, selec_output_game_3);
        QWidget::setTabOrder(selec_output_game_3, selec_output_game_vc);
        QWidget::setTabOrder(selec_output_game_vc, selec_output_game_sa);
        QWidget::setTabOrder(selec_output_game_sa, selec_output_game_5);
        QWidget::setTabOrder(selec_output_game_5, input_type_binary);
        QWidget::setTabOrder(input_type_binary, input_type_text);
        QWidget::setTabOrder(input_type_text, output_type_binary);
        QWidget::setTabOrder(output_type_binary, output_type_text);
        QWidget::setTabOrder(output_type_text, file_type_ide);
        QWidget::setTabOrder(file_type_ide, file_type_ipl);
        QWidget::setTabOrder(file_type_ipl, strings_gta4);
        QWidget::setTabOrder(strings_gta4, strings_bully);

        retranslateUi(MainWindow);

        tabwidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        open_file->setText(QApplication::translate("MainWindow", "Select", nullptr));
        process->setText(QApplication::translate("MainWindow", "Process", nullptr));
        selectinputgame->setText(QApplication::translate("MainWindow", "Select Game", nullptr));
        selec_game_3->setText(QApplication::translate("MainWindow", "GTA III", nullptr));
        selec_game_vc->setText(QApplication::translate("MainWindow", "GTA VC", nullptr));
        selec_game_sa->setText(QApplication::translate("MainWindow", "GTA SA", nullptr));
        selec_game_4->setText(QApplication::translate("MainWindow", "GTA IV", nullptr));
        selec_game_5->setText(QApplication::translate("MainWindow", "GTA V", nullptr));
        selec_game_bully->setText(QApplication::translate("MainWindow", "Bully Scholarship Edition\357\273\277", nullptr));
        inputype->setText(QApplication::translate("MainWindow", "Type", nullptr));
        input_type_binary->setText(QApplication::translate("MainWindow", "Binary", nullptr));
        input_type_text->setText(QApplication::translate("MainWindow", "Text", nullptr));
        tabwidget->setTabText(tabwidget->indexOf(input), QApplication::translate("MainWindow", "Input", nullptr));
        selectoutputgame->setText(QApplication::translate("MainWindow", "Select Game", nullptr));
        selec_output_game_3->setText(QApplication::translate("MainWindow", "GTA III", nullptr));
        selec_output_game_vc->setText(QApplication::translate("MainWindow", "GTA VC", nullptr));
        selec_output_game_sa->setText(QApplication::translate("MainWindow", "GTA SA", nullptr));
        selec_output_game_4->setText(QApplication::translate("MainWindow", "GTA IV", nullptr));
        selec_output_game_5->setText(QApplication::translate("MainWindow", "GTA V", nullptr));
        selec_output_game_bully->setText(QApplication::translate("MainWindow", "Bully Scholarship Edition\357\273\277", nullptr));
        outputtype->setText(QApplication::translate("MainWindow", "Type", nullptr));
        output_type_binary->setText(QApplication::translate("MainWindow", "Binary", nullptr));
        output_type_text->setText(QApplication::translate("MainWindow", "Text", nullptr));
        tabwidget->setTabText(tabwidget->indexOf(output), QApplication::translate("MainWindow", "Output", nullptr));
        strings->setText(QApplication::translate("MainWindow", "Strings", nullptr));
        strings_gta4->setText(QApplication::translate("MainWindow", "GTA IV", nullptr));
        strings_bully->setText(QApplication::translate("MainWindow", "Bully", nullptr));
        None->setText(QApplication::translate("MainWindow", "None", nullptr));
        filetype->setText(QApplication::translate("MainWindow", "File Type", nullptr));
        file_type_ide->setText(QApplication::translate("MainWindow", "Ide", nullptr));
        file_type_ipl->setText(QApplication::translate("MainWindow", "Ipl", nullptr));
        wpl->setText(QApplication::translate("MainWindow", "Wpl", nullptr));
        label->setText(QApplication::translate("MainWindow", "Postion Mover", nullptr));
        tabwidget->setTabText(tabwidget->indexOf(others), QApplication::translate("MainWindow", "Others", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
