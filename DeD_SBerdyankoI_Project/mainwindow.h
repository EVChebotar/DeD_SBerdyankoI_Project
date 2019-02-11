#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void CurrentTimeUpdate();

    void UTCTrigger();

    void on_VezaVulkanEditCorrection_userTimeChanged();

    void on_VezaVulkanPlusMinusCorrection_textChanged();

    void on_VezaNovayaEditCorrection_userTimeChanged();

    void on_VezaNovayaPlusMinusCorrection_textChanged();

    void on_ProvodEditCorrection_userTimeChanged();

    void on_ProvodPlusMinusCorrection_textChanged();

    void on_RezinaRestart_dateTimeChanged();

    void on_VezaVulkanRestart_dateTimeChanged();

    void on_VezaNovayaRestart_dateTimeChanged();

    void on_ProvodRestart_dateTimeChanged();

    void on_SaveAll_triggered();

    void on_EditTimingRezina_clicked();

    void on_EditTimingVezaVulkan_clicked();

    void on_EditTimingVezaNovaya_clicked();

    void on_EditTimingProvod_clicked();

    void on_RezinaEdit_userTimeChanged();

    void on_VezaVulkanEdit_userTimeChanged();

    void on_VezaNovayaEdit_userTimeChanged();

    void on_ProvodEdit_userTimeChanged();

    void on_CancelAll_triggered();

    void on_AlertTime_userTimeChanged();

    void on_EditAllRestart_stateChanged();

    void on_AllRestart_dateTimeChanged();

    void on_AllRestartCancelButton_clicked();

    void on_AllRestartApplyButton_clicked();

    void UpdateButtonTrigger();

    void on_UpdateButton_clicked();

    void closeEvent(QCloseEvent *event);

    void on_About_triggered();

    void on_general_information_triggered();

    void on_WriteMe_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
