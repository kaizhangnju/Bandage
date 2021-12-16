/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[66];
    char stringdata0[1306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "windowLoaded"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "loadGraph"
QT_MOC_LITERAL(4, 35, 12), // "fullFileName"
QT_MOC_LITERAL(5, 48, 7), // "loadCSV"
QT_MOC_LITERAL(6, 56, 12), // "fullFileNAme"
QT_MOC_LITERAL(7, 69, 16), // "selectionChanged"
QT_MOC_LITERAL(8, 86, 17), // "graphScopeChanged"
QT_MOC_LITERAL(9, 104, 9), // "drawGraph"
QT_MOC_LITERAL(10, 114, 18), // "zoomSpinBoxChanged"
QT_MOC_LITERAL(11, 133, 20), // "zoomedWithMouseWheel"
QT_MOC_LITERAL(12, 154, 47), // "copySelectedSequencesToClipbo..."
QT_MOC_LITERAL(13, 202, 32), // "copySelectedSequencesToClipboard"
QT_MOC_LITERAL(14, 235, 42), // "saveSelectedSequencesToFileAc..."
QT_MOC_LITERAL(15, 278, 27), // "saveSelectedSequencesToFile"
QT_MOC_LITERAL(16, 306, 27), // "copySelectedPathToClipboard"
QT_MOC_LITERAL(17, 334, 22), // "saveSelectedPathToFile"
QT_MOC_LITERAL(18, 357, 18), // "switchColourScheme"
QT_MOC_LITERAL(19, 376, 35), // "determineContiguityFromSelect..."
QT_MOC_LITERAL(20, 412, 20), // "saveImageCurrentView"
QT_MOC_LITERAL(21, 433, 20), // "saveImageEntireScene"
QT_MOC_LITERAL(22, 454, 22), // "setTextDisplaySettings"
QT_MOC_LITERAL(23, 477, 17), // "fontButtonPressed"
QT_MOC_LITERAL(24, 495, 19), // "setNodeCustomColour"
QT_MOC_LITERAL(25, 515, 18), // "setNodeCustomLabel"
QT_MOC_LITERAL(26, 534, 9), // "hideNodes"
QT_MOC_LITERAL(27, 544, 18), // "openSettingsDialog"
QT_MOC_LITERAL(28, 563, 15), // "openAboutDialog"
QT_MOC_LITERAL(29, 579, 24), // "selectUserSpecifiedNodes"
QT_MOC_LITERAL(30, 604, 19), // "graphLayoutFinished"
QT_MOC_LITERAL(31, 624, 21), // "openBlastSearchDialog"
QT_MOC_LITERAL(32, 646, 12), // "blastChanged"
QT_MOC_LITERAL(33, 659, 17), // "blastQueryChanged"
QT_MOC_LITERAL(34, 677, 14), // "showHidePanels"
QT_MOC_LITERAL(35, 692, 20), // "graphLayoutCancelled"
QT_MOC_LITERAL(36, 713, 25), // "bringSelectedNodesToFront"
QT_MOC_LITERAL(37, 739, 24), // "selectNodesWithBlastHits"
QT_MOC_LITERAL(38, 764, 9), // "selectAll"
QT_MOC_LITERAL(39, 774, 10), // "selectNone"
QT_MOC_LITERAL(40, 785, 15), // "invertSelection"
QT_MOC_LITERAL(41, 801, 15), // "zoomToSelection"
QT_MOC_LITERAL(42, 817, 16), // "selectContiguous"
QT_MOC_LITERAL(43, 834, 21), // "selectMaybeContiguous"
QT_MOC_LITERAL(44, 856, 19), // "selectNotContiguous"
QT_MOC_LITERAL(45, 876, 14), // "openBandageUrl"
QT_MOC_LITERAL(46, 891, 19), // "nodeDistanceChanged"
QT_MOC_LITERAL(47, 911, 17), // "depthRangeChanged"
QT_MOC_LITERAL(48, 929, 19), // "afterMainWindowShow"
QT_MOC_LITERAL(49, 949, 30), // "startingNodesExactMatchChanged"
QT_MOC_LITERAL(50, 980, 21), // "openPathSpecifyDialog"
QT_MOC_LITERAL(51, 1002, 16), // "nodeWidthChanged"
QT_MOC_LITERAL(52, 1019, 22), // "saveEntireGraphToFasta"
QT_MOC_LITERAL(53, 1042, 39), // "saveEntireGraphToFastaOnlyPos..."
QT_MOC_LITERAL(54, 1082, 20), // "saveEntireGraphToGfa"
QT_MOC_LITERAL(55, 1103, 21), // "saveVisibleGraphToGfa"
QT_MOC_LITERAL(56, 1125, 21), // "webBlastSelectedNodes"
QT_MOC_LITERAL(57, 1147, 15), // "removeSelection"
QT_MOC_LITERAL(58, 1163, 22), // "duplicateSelectedNodes"
QT_MOC_LITERAL(59, 1186, 18), // "mergeSelectedNodes"
QT_MOC_LITERAL(60, 1205, 16), // "mergeAllPossible"
QT_MOC_LITERAL(61, 1222, 15), // "cleanUpAllBlast"
QT_MOC_LITERAL(62, 1238, 14), // "changeNodeName"
QT_MOC_LITERAL(63, 1253, 15), // "changeNodeDepth"
QT_MOC_LITERAL(64, 1269, 19), // "openGraphInfoDialog"
QT_MOC_LITERAL(65, 1289, 16) // "algorithmChanged"

    },
    "MainWindow\0windowLoaded\0\0loadGraph\0"
    "fullFileName\0loadCSV\0fullFileNAme\0"
    "selectionChanged\0graphScopeChanged\0"
    "drawGraph\0zoomSpinBoxChanged\0"
    "zoomedWithMouseWheel\0"
    "copySelectedSequencesToClipboardActionTriggered\0"
    "copySelectedSequencesToClipboard\0"
    "saveSelectedSequencesToFileActionTriggered\0"
    "saveSelectedSequencesToFile\0"
    "copySelectedPathToClipboard\0"
    "saveSelectedPathToFile\0switchColourScheme\0"
    "determineContiguityFromSelectedNode\0"
    "saveImageCurrentView\0saveImageEntireScene\0"
    "setTextDisplaySettings\0fontButtonPressed\0"
    "setNodeCustomColour\0setNodeCustomLabel\0"
    "hideNodes\0openSettingsDialog\0"
    "openAboutDialog\0selectUserSpecifiedNodes\0"
    "graphLayoutFinished\0openBlastSearchDialog\0"
    "blastChanged\0blastQueryChanged\0"
    "showHidePanels\0graphLayoutCancelled\0"
    "bringSelectedNodesToFront\0"
    "selectNodesWithBlastHits\0selectAll\0"
    "selectNone\0invertSelection\0zoomToSelection\0"
    "selectContiguous\0selectMaybeContiguous\0"
    "selectNotContiguous\0openBandageUrl\0"
    "nodeDistanceChanged\0depthRangeChanged\0"
    "afterMainWindowShow\0startingNodesExactMatchChanged\0"
    "openPathSpecifyDialog\0nodeWidthChanged\0"
    "saveEntireGraphToFasta\0"
    "saveEntireGraphToFastaOnlyPositiveNodes\0"
    "saveEntireGraphToGfa\0saveVisibleGraphToGfa\0"
    "webBlastSelectedNodes\0removeSelection\0"
    "duplicateSelectedNodes\0mergeSelectedNodes\0"
    "mergeAllPossible\0cleanUpAllBlast\0"
    "changeNodeName\0changeNodeDepth\0"
    "openGraphInfoDialog\0algorithmChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      64,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  334,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  335,    2, 0x08 /* Private */,
       3,    0,  338,    2, 0x28 /* Private | MethodCloned */,
       5,    1,  339,    2, 0x08 /* Private */,
       5,    0,  342,    2, 0x28 /* Private | MethodCloned */,
       7,    0,  343,    2, 0x08 /* Private */,
       8,    0,  344,    2, 0x08 /* Private */,
       9,    0,  345,    2, 0x08 /* Private */,
      10,    0,  346,    2, 0x08 /* Private */,
      11,    0,  347,    2, 0x08 /* Private */,
      12,    0,  348,    2, 0x08 /* Private */,
      13,    0,  349,    2, 0x08 /* Private */,
      14,    0,  350,    2, 0x08 /* Private */,
      15,    0,  351,    2, 0x08 /* Private */,
      16,    0,  352,    2, 0x08 /* Private */,
      17,    0,  353,    2, 0x08 /* Private */,
      18,    0,  354,    2, 0x08 /* Private */,
      19,    0,  355,    2, 0x08 /* Private */,
      20,    0,  356,    2, 0x08 /* Private */,
      21,    0,  357,    2, 0x08 /* Private */,
      22,    0,  358,    2, 0x08 /* Private */,
      23,    0,  359,    2, 0x08 /* Private */,
      24,    0,  360,    2, 0x08 /* Private */,
      25,    0,  361,    2, 0x08 /* Private */,
      26,    0,  362,    2, 0x08 /* Private */,
      27,    0,  363,    2, 0x08 /* Private */,
      28,    0,  364,    2, 0x08 /* Private */,
      29,    0,  365,    2, 0x08 /* Private */,
      30,    0,  366,    2, 0x08 /* Private */,
      31,    0,  367,    2, 0x08 /* Private */,
      32,    0,  368,    2, 0x08 /* Private */,
      33,    0,  369,    2, 0x08 /* Private */,
      34,    0,  370,    2, 0x08 /* Private */,
      35,    0,  371,    2, 0x08 /* Private */,
      36,    0,  372,    2, 0x08 /* Private */,
      37,    0,  373,    2, 0x08 /* Private */,
      38,    0,  374,    2, 0x08 /* Private */,
      39,    0,  375,    2, 0x08 /* Private */,
      40,    0,  376,    2, 0x08 /* Private */,
      41,    0,  377,    2, 0x08 /* Private */,
      42,    0,  378,    2, 0x08 /* Private */,
      43,    0,  379,    2, 0x08 /* Private */,
      44,    0,  380,    2, 0x08 /* Private */,
      45,    0,  381,    2, 0x08 /* Private */,
      46,    0,  382,    2, 0x08 /* Private */,
      47,    0,  383,    2, 0x08 /* Private */,
      48,    0,  384,    2, 0x08 /* Private */,
      49,    0,  385,    2, 0x08 /* Private */,
      50,    0,  386,    2, 0x08 /* Private */,
      51,    0,  387,    2, 0x08 /* Private */,
      52,    0,  388,    2, 0x08 /* Private */,
      53,    0,  389,    2, 0x08 /* Private */,
      54,    0,  390,    2, 0x08 /* Private */,
      55,    0,  391,    2, 0x08 /* Private */,
      56,    0,  392,    2, 0x08 /* Private */,
      57,    0,  393,    2, 0x08 /* Private */,
      58,    0,  394,    2, 0x08 /* Private */,
      59,    0,  395,    2, 0x08 /* Private */,
      60,    0,  396,    2, 0x08 /* Private */,
      61,    0,  397,    2, 0x08 /* Private */,
      62,    0,  398,    2, 0x08 /* Private */,
      63,    0,  399,    2, 0x08 /* Private */,
      64,    0,  400,    2, 0x08 /* Private */,
      65,    0,  401,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->windowLoaded(); break;
        case 1: _t->loadGraph((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->loadGraph(); break;
        case 3: _t->loadCSV((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->loadCSV(); break;
        case 5: _t->selectionChanged(); break;
        case 6: _t->graphScopeChanged(); break;
        case 7: _t->drawGraph(); break;
        case 8: _t->zoomSpinBoxChanged(); break;
        case 9: _t->zoomedWithMouseWheel(); break;
        case 10: _t->copySelectedSequencesToClipboardActionTriggered(); break;
        case 11: _t->copySelectedSequencesToClipboard(); break;
        case 12: _t->saveSelectedSequencesToFileActionTriggered(); break;
        case 13: _t->saveSelectedSequencesToFile(); break;
        case 14: _t->copySelectedPathToClipboard(); break;
        case 15: _t->saveSelectedPathToFile(); break;
        case 16: _t->switchColourScheme(); break;
        case 17: _t->determineContiguityFromSelectedNode(); break;
        case 18: _t->saveImageCurrentView(); break;
        case 19: _t->saveImageEntireScene(); break;
        case 20: _t->setTextDisplaySettings(); break;
        case 21: _t->fontButtonPressed(); break;
        case 22: _t->setNodeCustomColour(); break;
        case 23: _t->setNodeCustomLabel(); break;
        case 24: _t->hideNodes(); break;
        case 25: _t->openSettingsDialog(); break;
        case 26: _t->openAboutDialog(); break;
        case 27: _t->selectUserSpecifiedNodes(); break;
        case 28: _t->graphLayoutFinished(); break;
        case 29: _t->openBlastSearchDialog(); break;
        case 30: _t->blastChanged(); break;
        case 31: _t->blastQueryChanged(); break;
        case 32: _t->showHidePanels(); break;
        case 33: _t->graphLayoutCancelled(); break;
        case 34: _t->bringSelectedNodesToFront(); break;
        case 35: _t->selectNodesWithBlastHits(); break;
        case 36: _t->selectAll(); break;
        case 37: _t->selectNone(); break;
        case 38: _t->invertSelection(); break;
        case 39: _t->zoomToSelection(); break;
        case 40: _t->selectContiguous(); break;
        case 41: _t->selectMaybeContiguous(); break;
        case 42: _t->selectNotContiguous(); break;
        case 43: _t->openBandageUrl(); break;
        case 44: _t->nodeDistanceChanged(); break;
        case 45: _t->depthRangeChanged(); break;
        case 46: _t->afterMainWindowShow(); break;
        case 47: _t->startingNodesExactMatchChanged(); break;
        case 48: _t->openPathSpecifyDialog(); break;
        case 49: _t->nodeWidthChanged(); break;
        case 50: _t->saveEntireGraphToFasta(); break;
        case 51: _t->saveEntireGraphToFastaOnlyPositiveNodes(); break;
        case 52: _t->saveEntireGraphToGfa(); break;
        case 53: _t->saveVisibleGraphToGfa(); break;
        case 54: _t->webBlastSelectedNodes(); break;
        case 55: _t->removeSelection(); break;
        case 56: _t->duplicateSelectedNodes(); break;
        case 57: _t->mergeSelectedNodes(); break;
        case 58: _t->mergeAllPossible(); break;
        case 59: _t->cleanUpAllBlast(); break;
        case 60: _t->changeNodeName(); break;
        case 61: _t->changeNodeDepth(); break;
        case 62: _t->openGraphInfoDialog(); break;
        case 63: _t->algorithmChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::windowLoaded)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 64)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 64;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 64)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 64;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::windowLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
