#include "OpenRGBPhilipsWizSettingsEntry.h"
#include "ui_OpenRGBPhilipsWizSettingsEntry.h"

using namespace Ui;

OpenRGBPhilipsWizSettingsEntry::OpenRGBPhilipsWizSettingsEntry(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OpenRGBPhilipsWizSettingsEntryUi)
{
    ui->setupUi(this);
}

OpenRGBPhilipsWizSettingsEntry::~OpenRGBPhilipsWizSettingsEntry()
{
    delete ui;
}
