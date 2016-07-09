#include "keycombo.h"

KeyCombo::KeyCombo(QWidget *parent) : QComboBox(parent)
{
    addItem("None", "--"); setItemData(count()-1, QColor(100, 100, 100), Qt::BackgroundColorRole);

    addItem("Pad Up", "PU"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad Down", "PD"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad Left", "PL"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad Right", "PR"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 1", "P1"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 2", "P2"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 3", "P3"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 4", "P4"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 5", "P5"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 6", "P6"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 7", "P7"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 8", "P8"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 9", "P9"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 10", "Pa"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 11", "Pb"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 12", "Pc"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 13", "Pd"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 14", "Pe"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 15", "Pf"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 16", "Pg"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 17", "Ph"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);
    addItem("Pad 18", "Pi"); setItemData(count()-1, QColor(100, 100, 255), Qt::BackgroundColorRole);

    addItem("Key Up", "Kz"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("Key Down", "Ks"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("Key Left", "Kq"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("Key Right", "Kd"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);

    addItem("Key Left Ctrl", "Kl"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("Key Left Shift", "KL"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("Key Left Alt", "Ka"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("Key Right Ctrl", "Kr"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("Key Right Shift", "KR"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("Key Right Alt", "KA"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);

    addItem("Key Backspace", "Kb"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("Key Tab", "Kt"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("Key Enter", "Ke"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("Key Escape", "KE"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("Key Del", "KD"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("Key Page Up", "KP"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("Key Page Down", "Kp"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("Key Space", "K_"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);

    for(char c = 'a'; c<='z'; ++c)
    {
      addItem(QString("Key %1").arg(c), QString("k%1").arg(c)); setItemData(count()-1, QColor(255, 255, 255), Qt::BackgroundColorRole);
    }
    for(char c = '0'; c<='9'; ++c)
    {
      addItem(QString("Key %1").arg(c), QString("k%1").arg(c)); setItemData(count()-1, QColor(255, 255, 255), Qt::BackgroundColorRole);
    }

    addItem("Key F1", "F1"); setItemData(count()-1, QColor(100, 255, 100), Qt::BackgroundColorRole);
    addItem("Key F2", "F2"); setItemData(count()-1, QColor(100, 255, 100), Qt::BackgroundColorRole);
    addItem("Key F3", "F3"); setItemData(count()-1, QColor(100, 255, 100), Qt::BackgroundColorRole);
    addItem("Key F4", "F4"); setItemData(count()-1, QColor(100, 255, 100), Qt::BackgroundColorRole);

    addItem("Key F5", "F5"); setItemData(count()-1, QColor(100, 255, 100), Qt::BackgroundColorRole);
    addItem("Key F6", "F6"); setItemData(count()-1, QColor(100, 255, 100), Qt::BackgroundColorRole);
    addItem("Key F7", "F7"); setItemData(count()-1, QColor(100, 255, 100), Qt::BackgroundColorRole);
    addItem("Key F8", "F8"); setItemData(count()-1, QColor(100, 255, 100), Qt::BackgroundColorRole);

    addItem("Key F9", "F9"); setItemData(count()-1, QColor(100, 255, 100), Qt::BackgroundColorRole);
    addItem("Key FA", "FA"); setItemData(count()-1, QColor(100, 255, 100), Qt::BackgroundColorRole);
    addItem("Key FB", "FB"); setItemData(count()-1, QColor(100, 255, 100), Qt::BackgroundColorRole);
    addItem("Key FC", "FC"); setItemData(count()-1, QColor(100, 255, 100), Qt::BackgroundColorRole);

    addItem("PS3 Up", "XU"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("PS3 Down", "XD"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("PS3 Left", "XL"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("PS3 Right", "XR"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);

    addItem("PS3 X", "X1"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("PS3 O", "X2"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("PS3 []", "X3"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("PS3 /\\", "X4"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);

    addItem("PS3 R1", "X5"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("PS3 L1", "X6"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("PS3 R2", "X7"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("PS3 L2", "X8"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("PS3 R3", "X9"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("PS3 L3", "Xa"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);

    addItem("PS3 Start", "XS"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);
    addItem("PS3 Select", "Xs"); setItemData(count()-1, QColor(255, 255, 100), Qt::BackgroundColorRole);

}
