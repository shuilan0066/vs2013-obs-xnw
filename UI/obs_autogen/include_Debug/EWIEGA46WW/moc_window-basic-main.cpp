/****************************************************************************
** Meta object code from reading C++ file 'window-basic-main.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "window-basic-main.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-main.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OBSBasic_t {
    QByteArrayData data[193];
    char stringdata0[4170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSBasic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSBasic_t qt_meta_stringdata_OBSBasic = {
    {
QT_MOC_LITERAL(0, 0, 8), // "OBSBasic"
QT_MOC_LITERAL(1, 9, 14), // "StartStreaming"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "StopStreaming"
QT_MOC_LITERAL(4, 39, 18), // "ForceStopStreaming"
QT_MOC_LITERAL(5, 58, 19), // "StreamDelayStarting"
QT_MOC_LITERAL(6, 78, 3), // "sec"
QT_MOC_LITERAL(7, 82, 19), // "StreamDelayStopping"
QT_MOC_LITERAL(8, 102, 14), // "StreamingStart"
QT_MOC_LITERAL(9, 117, 14), // "StreamStopping"
QT_MOC_LITERAL(10, 132, 13), // "StreamingStop"
QT_MOC_LITERAL(11, 146, 9), // "errorcode"
QT_MOC_LITERAL(12, 156, 10), // "last_error"
QT_MOC_LITERAL(13, 167, 14), // "StartRecording"
QT_MOC_LITERAL(14, 182, 13), // "StopRecording"
QT_MOC_LITERAL(15, 196, 14), // "RecordingStart"
QT_MOC_LITERAL(16, 211, 14), // "RecordStopping"
QT_MOC_LITERAL(17, 226, 13), // "RecordingStop"
QT_MOC_LITERAL(18, 240, 4), // "code"
QT_MOC_LITERAL(19, 245, 17), // "StartReplayBuffer"
QT_MOC_LITERAL(20, 263, 16), // "StopReplayBuffer"
QT_MOC_LITERAL(21, 280, 17), // "ReplayBufferStart"
QT_MOC_LITERAL(22, 298, 20), // "ReplayBufferStopping"
QT_MOC_LITERAL(23, 319, 16), // "ReplayBufferStop"
QT_MOC_LITERAL(24, 336, 19), // "SaveProjectDeferred"
QT_MOC_LITERAL(25, 356, 11), // "SaveProject"
QT_MOC_LITERAL(26, 368, 13), // "SetTransition"
QT_MOC_LITERAL(27, 382, 9), // "OBSSource"
QT_MOC_LITERAL(28, 392, 10), // "transition"
QT_MOC_LITERAL(29, 403, 17), // "TransitionToScene"
QT_MOC_LITERAL(30, 421, 8), // "OBSScene"
QT_MOC_LITERAL(31, 430, 5), // "scene"
QT_MOC_LITERAL(32, 436, 5), // "force"
QT_MOC_LITERAL(33, 442, 15), // "SetCurrentScene"
QT_MOC_LITERAL(34, 458, 12), // "AddSceneItem"
QT_MOC_LITERAL(35, 471, 12), // "OBSSceneItem"
QT_MOC_LITERAL(36, 484, 4), // "item"
QT_MOC_LITERAL(37, 489, 15), // "RemoveSceneItem"
QT_MOC_LITERAL(38, 505, 8), // "AddScene"
QT_MOC_LITERAL(39, 514, 6), // "source"
QT_MOC_LITERAL(40, 521, 11), // "RemoveScene"
QT_MOC_LITERAL(41, 533, 13), // "RenameSources"
QT_MOC_LITERAL(42, 547, 7), // "newName"
QT_MOC_LITERAL(43, 555, 8), // "prevName"
QT_MOC_LITERAL(44, 564, 15), // "SelectSceneItem"
QT_MOC_LITERAL(45, 580, 6), // "select"
QT_MOC_LITERAL(46, 587, 19), // "ActivateAudioSource"
QT_MOC_LITERAL(47, 607, 21), // "DeactivateAudioSource"
QT_MOC_LITERAL(48, 629, 22), // "DuplicateSelectedScene"
QT_MOC_LITERAL(49, 652, 19), // "RemoveSelectedScene"
QT_MOC_LITERAL(50, 672, 23), // "RemoveSelectedSceneItem"
QT_MOC_LITERAL(51, 696, 17), // "ToggleAlwaysOnTop"
QT_MOC_LITERAL(52, 714, 14), // "ReorderSources"
QT_MOC_LITERAL(53, 729, 13), // "ProcessHotkey"
QT_MOC_LITERAL(54, 743, 13), // "obs_hotkey_id"
QT_MOC_LITERAL(55, 757, 2), // "id"
QT_MOC_LITERAL(56, 760, 7), // "pressed"
QT_MOC_LITERAL(57, 768, 13), // "AddTransition"
QT_MOC_LITERAL(58, 782, 16), // "RenameTransition"
QT_MOC_LITERAL(59, 799, 17), // "TransitionClicked"
QT_MOC_LITERAL(60, 817, 17), // "TransitionStopped"
QT_MOC_LITERAL(61, 835, 22), // "TriggerQuickTransition"
QT_MOC_LITERAL(62, 858, 20), // "SetDeinterlacingMode"
QT_MOC_LITERAL(63, 879, 21), // "SetDeinterlacingOrder"
QT_MOC_LITERAL(64, 901, 14), // "SetScaleFilter"
QT_MOC_LITERAL(65, 916, 13), // "IconActivated"
QT_MOC_LITERAL(66, 930, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(67, 964, 6), // "reason"
QT_MOC_LITERAL(68, 971, 10), // "SetShowing"
QT_MOC_LITERAL(69, 982, 7), // "showing"
QT_MOC_LITERAL(70, 990, 14), // "ToggleShowHide"
QT_MOC_LITERAL(71, 1005, 29), // "on_actionCopySource_triggered"
QT_MOC_LITERAL(72, 1035, 27), // "on_actionPasteRef_triggered"
QT_MOC_LITERAL(73, 1063, 27), // "on_actionPasteDup_triggered"
QT_MOC_LITERAL(74, 1091, 30), // "on_actionCopyFilters_triggered"
QT_MOC_LITERAL(75, 1122, 31), // "on_actionPasteFilters_triggered"
QT_MOC_LITERAL(76, 1154, 38), // "on_actionFullscreenInterface_..."
QT_MOC_LITERAL(77, 1193, 34), // "on_actionShow_Recordings_trig..."
QT_MOC_LITERAL(78, 1228, 24), // "on_actionRemux_triggered"
QT_MOC_LITERAL(79, 1253, 28), // "on_action_Settings_triggered"
QT_MOC_LITERAL(80, 1282, 37), // "on_actionAdvAudioProperties_t..."
QT_MOC_LITERAL(81, 1320, 24), // "on_advAudioProps_clicked"
QT_MOC_LITERAL(82, 1345, 26), // "on_advAudioProps_destroyed"
QT_MOC_LITERAL(83, 1372, 27), // "on_actionShowLogs_triggered"
QT_MOC_LITERAL(84, 1400, 35), // "on_actionUploadCurrentLog_tri..."
QT_MOC_LITERAL(85, 1436, 32), // "on_actionUploadLastLog_triggered"
QT_MOC_LITERAL(86, 1469, 33), // "on_actionViewCurrentLog_trigg..."
QT_MOC_LITERAL(87, 1503, 34), // "on_actionCheckForUpdates_trig..."
QT_MOC_LITERAL(88, 1538, 32), // "on_actionEditTransform_triggered"
QT_MOC_LITERAL(89, 1571, 32), // "on_actionCopyTransform_triggered"
QT_MOC_LITERAL(90, 1604, 33), // "on_actionPasteTransform_trigg..."
QT_MOC_LITERAL(91, 1638, 29), // "on_actionRotate90CW_triggered"
QT_MOC_LITERAL(92, 1668, 30), // "on_actionRotate90CCW_triggered"
QT_MOC_LITERAL(93, 1699, 28), // "on_actionRotate180_triggered"
QT_MOC_LITERAL(94, 1728, 33), // "on_actionFlipHorizontal_trigg..."
QT_MOC_LITERAL(95, 1762, 31), // "on_actionFlipVertical_triggered"
QT_MOC_LITERAL(96, 1794, 30), // "on_actionFitToScreen_triggered"
QT_MOC_LITERAL(97, 1825, 34), // "on_actionStretchToScreen_trig..."
QT_MOC_LITERAL(98, 1860, 33), // "on_actionCenterToScreen_trigg..."
QT_MOC_LITERAL(99, 1894, 28), // "on_scenes_currentItemChanged"
QT_MOC_LITERAL(100, 1923, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(101, 1940, 7), // "current"
QT_MOC_LITERAL(102, 1948, 4), // "prev"
QT_MOC_LITERAL(103, 1953, 36), // "on_scenes_customContextMenuRe..."
QT_MOC_LITERAL(104, 1990, 3), // "pos"
QT_MOC_LITERAL(105, 1994, 27), // "on_actionAddScene_triggered"
QT_MOC_LITERAL(106, 2022, 30), // "on_actionRemoveScene_triggered"
QT_MOC_LITERAL(107, 2053, 26), // "on_actionSceneUp_triggered"
QT_MOC_LITERAL(108, 2080, 28), // "on_actionSceneDown_triggered"
QT_MOC_LITERAL(109, 2109, 31), // "on_sources_itemSelectionChanged"
QT_MOC_LITERAL(110, 2141, 37), // "on_sources_customContextMenuR..."
QT_MOC_LITERAL(111, 2179, 28), // "on_sources_itemDoubleClicked"
QT_MOC_LITERAL(112, 2208, 28), // "on_actionAddSource_triggered"
QT_MOC_LITERAL(113, 2237, 31), // "on_actionRemoveSource_triggered"
QT_MOC_LITERAL(114, 2269, 27), // "on_actionInteract_triggered"
QT_MOC_LITERAL(115, 2297, 35), // "on_actionSourceProperties_tri..."
QT_MOC_LITERAL(116, 2333, 27), // "on_actionSourceUp_triggered"
QT_MOC_LITERAL(117, 2361, 29), // "on_actionSourceDown_triggered"
QT_MOC_LITERAL(118, 2391, 25), // "on_actionMoveUp_triggered"
QT_MOC_LITERAL(119, 2417, 27), // "on_actionMoveDown_triggered"
QT_MOC_LITERAL(120, 2445, 28), // "on_actionMoveToTop_triggered"
QT_MOC_LITERAL(121, 2474, 31), // "on_actionMoveToBottom_triggered"
QT_MOC_LITERAL(122, 2506, 30), // "on_actionLockPreview_triggered"
QT_MOC_LITERAL(123, 2537, 26), // "on_scalingMenu_aboutToShow"
QT_MOC_LITERAL(124, 2564, 30), // "on_actionScaleWindow_triggered"
QT_MOC_LITERAL(125, 2595, 30), // "on_actionScaleCanvas_triggered"
QT_MOC_LITERAL(126, 2626, 30), // "on_actionScaleOutput_triggered"
QT_MOC_LITERAL(127, 2657, 23), // "on_streamButton_clicked"
QT_MOC_LITERAL(128, 2681, 23), // "on_recordButton_clicked"
QT_MOC_LITERAL(129, 2705, 25), // "on_settingsButton_clicked"
QT_MOC_LITERAL(130, 2731, 26), // "on_actionWebsite_triggered"
QT_MOC_LITERAL(131, 2758, 37), // "on_preview_customContextMenuR..."
QT_MOC_LITERAL(132, 2796, 50), // "on_previewDisabledLabel_custo..."
QT_MOC_LITERAL(133, 2847, 37), // "on_actionNewSceneCollection_t..."
QT_MOC_LITERAL(134, 2885, 37), // "on_actionDupSceneCollection_t..."
QT_MOC_LITERAL(135, 2923, 40), // "on_actionRenameSceneCollectio..."
QT_MOC_LITERAL(136, 2964, 40), // "on_actionRemoveSceneCollectio..."
QT_MOC_LITERAL(137, 3005, 40), // "on_actionImportSceneCollectio..."
QT_MOC_LITERAL(138, 3046, 40), // "on_actionExportSceneCollectio..."
QT_MOC_LITERAL(139, 3087, 29), // "on_actionNewProfile_triggered"
QT_MOC_LITERAL(140, 3117, 29), // "on_actionDupProfile_triggered"
QT_MOC_LITERAL(141, 3147, 32), // "on_actionRenameProfile_triggered"
QT_MOC_LITERAL(142, 3180, 32), // "on_actionRemoveProfile_triggered"
QT_MOC_LITERAL(143, 3213, 32), // "on_actionImportProfile_triggered"
QT_MOC_LITERAL(144, 3246, 32), // "on_actionExportProfile_triggered"
QT_MOC_LITERAL(145, 3279, 37), // "on_actionShowSettingsFolder_t..."
QT_MOC_LITERAL(146, 3317, 36), // "on_actionShowProfileFolder_tr..."
QT_MOC_LITERAL(147, 3354, 30), // "on_actionAlwaysOnTop_triggered"
QT_MOC_LITERAL(148, 3385, 32), // "on_toggleListboxToolbars_toggled"
QT_MOC_LITERAL(149, 3418, 7), // "visible"
QT_MOC_LITERAL(150, 3426, 26), // "on_toggleStatusBar_toggled"
QT_MOC_LITERAL(151, 3453, 34), // "on_transitions_currentIndexCh..."
QT_MOC_LITERAL(152, 3488, 5), // "index"
QT_MOC_LITERAL(153, 3494, 24), // "on_transitionAdd_clicked"
QT_MOC_LITERAL(154, 3519, 27), // "on_transitionRemove_clicked"
QT_MOC_LITERAL(155, 3547, 26), // "on_transitionProps_clicked"
QT_MOC_LITERAL(156, 3574, 21), // "on_modeSwitch_clicked"
QT_MOC_LITERAL(157, 3596, 26), // "on_autoConfigure_triggered"
QT_MOC_LITERAL(158, 3623, 18), // "on_stats_triggered"
QT_MOC_LITERAL(159, 3642, 20), // "on_resetUI_triggered"
QT_MOC_LITERAL(160, 3663, 17), // "on_lockUI_toggled"
QT_MOC_LITERAL(161, 3681, 4), // "lock"
QT_MOC_LITERAL(162, 3686, 17), // "logUploadFinished"
QT_MOC_LITERAL(163, 3704, 4), // "text"
QT_MOC_LITERAL(164, 3709, 5), // "error"
QT_MOC_LITERAL(165, 3715, 19), // "updateCheckFinished"
QT_MOC_LITERAL(166, 3735, 19), // "AddSourceFromAction"
QT_MOC_LITERAL(167, 3755, 14), // "MoveSceneToTop"
QT_MOC_LITERAL(168, 3770, 17), // "MoveSceneToBottom"
QT_MOC_LITERAL(169, 3788, 13), // "EditSceneName"
QT_MOC_LITERAL(170, 3802, 17), // "EditSceneItemName"
QT_MOC_LITERAL(171, 3820, 15), // "SceneNameEdited"
QT_MOC_LITERAL(172, 3836, 8), // "QWidget*"
QT_MOC_LITERAL(173, 3845, 6), // "editor"
QT_MOC_LITERAL(174, 3852, 34), // "QAbstractItemDelegate::EndEdi..."
QT_MOC_LITERAL(175, 3887, 7), // "endHint"
QT_MOC_LITERAL(176, 3895, 19), // "SceneItemNameEdited"
QT_MOC_LITERAL(177, 3915, 16), // "OpenSceneFilters"
QT_MOC_LITERAL(178, 3932, 11), // "OpenFilters"
QT_MOC_LITERAL(179, 3944, 20), // "EnablePreviewDisplay"
QT_MOC_LITERAL(180, 3965, 6), // "enable"
QT_MOC_LITERAL(181, 3972, 13), // "TogglePreview"
QT_MOC_LITERAL(182, 3986, 7), // "NudgeUp"
QT_MOC_LITERAL(183, 3994, 9), // "NudgeDown"
QT_MOC_LITERAL(184, 4004, 9), // "NudgeLeft"
QT_MOC_LITERAL(185, 4014, 10), // "NudgeRight"
QT_MOC_LITERAL(186, 4025, 20), // "OpenPreviewProjector"
QT_MOC_LITERAL(187, 4046, 19), // "OpenSourceProjector"
QT_MOC_LITERAL(188, 4066, 18), // "OpenSceneProjector"
QT_MOC_LITERAL(189, 4085, 17), // "OpenPreviewWindow"
QT_MOC_LITERAL(190, 4103, 16), // "OpenSourceWindow"
QT_MOC_LITERAL(191, 4120, 15), // "OpenSceneWindow"
QT_MOC_LITERAL(192, 4136, 33) // "on_actionResetTransform_trigg..."

    },
    "OBSBasic\0StartStreaming\0\0StopStreaming\0"
    "ForceStopStreaming\0StreamDelayStarting\0"
    "sec\0StreamDelayStopping\0StreamingStart\0"
    "StreamStopping\0StreamingStop\0errorcode\0"
    "last_error\0StartRecording\0StopRecording\0"
    "RecordingStart\0RecordStopping\0"
    "RecordingStop\0code\0StartReplayBuffer\0"
    "StopReplayBuffer\0ReplayBufferStart\0"
    "ReplayBufferStopping\0ReplayBufferStop\0"
    "SaveProjectDeferred\0SaveProject\0"
    "SetTransition\0OBSSource\0transition\0"
    "TransitionToScene\0OBSScene\0scene\0force\0"
    "SetCurrentScene\0AddSceneItem\0OBSSceneItem\0"
    "item\0RemoveSceneItem\0AddScene\0source\0"
    "RemoveScene\0RenameSources\0newName\0"
    "prevName\0SelectSceneItem\0select\0"
    "ActivateAudioSource\0DeactivateAudioSource\0"
    "DuplicateSelectedScene\0RemoveSelectedScene\0"
    "RemoveSelectedSceneItem\0ToggleAlwaysOnTop\0"
    "ReorderSources\0ProcessHotkey\0obs_hotkey_id\0"
    "id\0pressed\0AddTransition\0RenameTransition\0"
    "TransitionClicked\0TransitionStopped\0"
    "TriggerQuickTransition\0SetDeinterlacingMode\0"
    "SetDeinterlacingOrder\0SetScaleFilter\0"
    "IconActivated\0QSystemTrayIcon::ActivationReason\0"
    "reason\0SetShowing\0showing\0ToggleShowHide\0"
    "on_actionCopySource_triggered\0"
    "on_actionPasteRef_triggered\0"
    "on_actionPasteDup_triggered\0"
    "on_actionCopyFilters_triggered\0"
    "on_actionPasteFilters_triggered\0"
    "on_actionFullscreenInterface_triggered\0"
    "on_actionShow_Recordings_triggered\0"
    "on_actionRemux_triggered\0"
    "on_action_Settings_triggered\0"
    "on_actionAdvAudioProperties_triggered\0"
    "on_advAudioProps_clicked\0"
    "on_advAudioProps_destroyed\0"
    "on_actionShowLogs_triggered\0"
    "on_actionUploadCurrentLog_triggered\0"
    "on_actionUploadLastLog_triggered\0"
    "on_actionViewCurrentLog_triggered\0"
    "on_actionCheckForUpdates_triggered\0"
    "on_actionEditTransform_triggered\0"
    "on_actionCopyTransform_triggered\0"
    "on_actionPasteTransform_triggered\0"
    "on_actionRotate90CW_triggered\0"
    "on_actionRotate90CCW_triggered\0"
    "on_actionRotate180_triggered\0"
    "on_actionFlipHorizontal_triggered\0"
    "on_actionFlipVertical_triggered\0"
    "on_actionFitToScreen_triggered\0"
    "on_actionStretchToScreen_triggered\0"
    "on_actionCenterToScreen_triggered\0"
    "on_scenes_currentItemChanged\0"
    "QListWidgetItem*\0current\0prev\0"
    "on_scenes_customContextMenuRequested\0"
    "pos\0on_actionAddScene_triggered\0"
    "on_actionRemoveScene_triggered\0"
    "on_actionSceneUp_triggered\0"
    "on_actionSceneDown_triggered\0"
    "on_sources_itemSelectionChanged\0"
    "on_sources_customContextMenuRequested\0"
    "on_sources_itemDoubleClicked\0"
    "on_actionAddSource_triggered\0"
    "on_actionRemoveSource_triggered\0"
    "on_actionInteract_triggered\0"
    "on_actionSourceProperties_triggered\0"
    "on_actionSourceUp_triggered\0"
    "on_actionSourceDown_triggered\0"
    "on_actionMoveUp_triggered\0"
    "on_actionMoveDown_triggered\0"
    "on_actionMoveToTop_triggered\0"
    "on_actionMoveToBottom_triggered\0"
    "on_actionLockPreview_triggered\0"
    "on_scalingMenu_aboutToShow\0"
    "on_actionScaleWindow_triggered\0"
    "on_actionScaleCanvas_triggered\0"
    "on_actionScaleOutput_triggered\0"
    "on_streamButton_clicked\0on_recordButton_clicked\0"
    "on_settingsButton_clicked\0"
    "on_actionWebsite_triggered\0"
    "on_preview_customContextMenuRequested\0"
    "on_previewDisabledLabel_customContextMenuRequested\0"
    "on_actionNewSceneCollection_triggered\0"
    "on_actionDupSceneCollection_triggered\0"
    "on_actionRenameSceneCollection_triggered\0"
    "on_actionRemoveSceneCollection_triggered\0"
    "on_actionImportSceneCollection_triggered\0"
    "on_actionExportSceneCollection_triggered\0"
    "on_actionNewProfile_triggered\0"
    "on_actionDupProfile_triggered\0"
    "on_actionRenameProfile_triggered\0"
    "on_actionRemoveProfile_triggered\0"
    "on_actionImportProfile_triggered\0"
    "on_actionExportProfile_triggered\0"
    "on_actionShowSettingsFolder_triggered\0"
    "on_actionShowProfileFolder_triggered\0"
    "on_actionAlwaysOnTop_triggered\0"
    "on_toggleListboxToolbars_toggled\0"
    "visible\0on_toggleStatusBar_toggled\0"
    "on_transitions_currentIndexChanged\0"
    "index\0on_transitionAdd_clicked\0"
    "on_transitionRemove_clicked\0"
    "on_transitionProps_clicked\0"
    "on_modeSwitch_clicked\0on_autoConfigure_triggered\0"
    "on_stats_triggered\0on_resetUI_triggered\0"
    "on_lockUI_toggled\0lock\0logUploadFinished\0"
    "text\0error\0updateCheckFinished\0"
    "AddSourceFromAction\0MoveSceneToTop\0"
    "MoveSceneToBottom\0EditSceneName\0"
    "EditSceneItemName\0SceneNameEdited\0"
    "QWidget*\0editor\0QAbstractItemDelegate::EndEditHint\0"
    "endHint\0SceneItemNameEdited\0"
    "OpenSceneFilters\0OpenFilters\0"
    "EnablePreviewDisplay\0enable\0TogglePreview\0"
    "NudgeUp\0NudgeDown\0NudgeLeft\0NudgeRight\0"
    "OpenPreviewProjector\0OpenSourceProjector\0"
    "OpenSceneProjector\0OpenPreviewWindow\0"
    "OpenSourceWindow\0OpenSceneWindow\0"
    "on_actionResetTransform_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSBasic[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     160,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  814,    2, 0x0a /* Public */,
       3,    0,  815,    2, 0x0a /* Public */,
       4,    0,  816,    2, 0x0a /* Public */,
       5,    1,  817,    2, 0x0a /* Public */,
       7,    1,  820,    2, 0x0a /* Public */,
       8,    0,  823,    2, 0x0a /* Public */,
       9,    0,  824,    2, 0x0a /* Public */,
      10,    2,  825,    2, 0x0a /* Public */,
      13,    0,  830,    2, 0x0a /* Public */,
      14,    0,  831,    2, 0x0a /* Public */,
      15,    0,  832,    2, 0x0a /* Public */,
      16,    0,  833,    2, 0x0a /* Public */,
      17,    1,  834,    2, 0x0a /* Public */,
      19,    0,  837,    2, 0x0a /* Public */,
      20,    0,  838,    2, 0x0a /* Public */,
      21,    0,  839,    2, 0x0a /* Public */,
      22,    0,  840,    2, 0x0a /* Public */,
      23,    1,  841,    2, 0x0a /* Public */,
      24,    0,  844,    2, 0x0a /* Public */,
      25,    0,  845,    2, 0x0a /* Public */,
      26,    1,  846,    2, 0x0a /* Public */,
      29,    2,  849,    2, 0x0a /* Public */,
      29,    1,  854,    2, 0x2a /* Public | MethodCloned */,
      29,    2,  857,    2, 0x0a /* Public */,
      29,    1,  862,    2, 0x2a /* Public | MethodCloned */,
      33,    2,  865,    2, 0x0a /* Public */,
      33,    1,  870,    2, 0x2a /* Public | MethodCloned */,
      34,    1,  873,    2, 0x08 /* Private */,
      37,    1,  876,    2, 0x08 /* Private */,
      38,    1,  879,    2, 0x08 /* Private */,
      40,    1,  882,    2, 0x08 /* Private */,
      41,    2,  885,    2, 0x08 /* Private */,
      44,    3,  890,    2, 0x08 /* Private */,
      46,    1,  897,    2, 0x08 /* Private */,
      47,    1,  900,    2, 0x08 /* Private */,
      48,    0,  903,    2, 0x08 /* Private */,
      49,    0,  904,    2, 0x08 /* Private */,
      50,    0,  905,    2, 0x08 /* Private */,
      51,    0,  906,    2, 0x08 /* Private */,
      52,    1,  907,    2, 0x08 /* Private */,
      53,    2,  910,    2, 0x08 /* Private */,
      57,    0,  915,    2, 0x08 /* Private */,
      58,    0,  916,    2, 0x08 /* Private */,
      59,    0,  917,    2, 0x08 /* Private */,
      60,    0,  918,    2, 0x08 /* Private */,
      61,    1,  919,    2, 0x08 /* Private */,
      62,    0,  922,    2, 0x08 /* Private */,
      63,    0,  923,    2, 0x08 /* Private */,
      64,    0,  924,    2, 0x08 /* Private */,
      65,    1,  925,    2, 0x08 /* Private */,
      68,    1,  928,    2, 0x08 /* Private */,
      70,    0,  931,    2, 0x08 /* Private */,
      71,    0,  932,    2, 0x08 /* Private */,
      72,    0,  933,    2, 0x08 /* Private */,
      73,    0,  934,    2, 0x08 /* Private */,
      74,    0,  935,    2, 0x08 /* Private */,
      75,    0,  936,    2, 0x08 /* Private */,
      76,    0,  937,    2, 0x08 /* Private */,
      77,    0,  938,    2, 0x08 /* Private */,
      78,    0,  939,    2, 0x08 /* Private */,
      79,    0,  940,    2, 0x08 /* Private */,
      80,    0,  941,    2, 0x08 /* Private */,
      81,    0,  942,    2, 0x08 /* Private */,
      82,    0,  943,    2, 0x08 /* Private */,
      83,    0,  944,    2, 0x08 /* Private */,
      84,    0,  945,    2, 0x08 /* Private */,
      85,    0,  946,    2, 0x08 /* Private */,
      86,    0,  947,    2, 0x08 /* Private */,
      87,    0,  948,    2, 0x08 /* Private */,
      88,    0,  949,    2, 0x08 /* Private */,
      89,    0,  950,    2, 0x08 /* Private */,
      90,    0,  951,    2, 0x08 /* Private */,
      91,    0,  952,    2, 0x08 /* Private */,
      92,    0,  953,    2, 0x08 /* Private */,
      93,    0,  954,    2, 0x08 /* Private */,
      94,    0,  955,    2, 0x08 /* Private */,
      95,    0,  956,    2, 0x08 /* Private */,
      96,    0,  957,    2, 0x08 /* Private */,
      97,    0,  958,    2, 0x08 /* Private */,
      98,    0,  959,    2, 0x08 /* Private */,
      99,    2,  960,    2, 0x08 /* Private */,
     103,    1,  965,    2, 0x08 /* Private */,
     105,    0,  968,    2, 0x08 /* Private */,
     106,    0,  969,    2, 0x08 /* Private */,
     107,    0,  970,    2, 0x08 /* Private */,
     108,    0,  971,    2, 0x08 /* Private */,
     109,    0,  972,    2, 0x08 /* Private */,
     110,    1,  973,    2, 0x08 /* Private */,
     111,    1,  976,    2, 0x08 /* Private */,
     112,    0,  979,    2, 0x08 /* Private */,
     113,    0,  980,    2, 0x08 /* Private */,
     114,    0,  981,    2, 0x08 /* Private */,
     115,    0,  982,    2, 0x08 /* Private */,
     116,    0,  983,    2, 0x08 /* Private */,
     117,    0,  984,    2, 0x08 /* Private */,
     118,    0,  985,    2, 0x08 /* Private */,
     119,    0,  986,    2, 0x08 /* Private */,
     120,    0,  987,    2, 0x08 /* Private */,
     121,    0,  988,    2, 0x08 /* Private */,
     122,    0,  989,    2, 0x08 /* Private */,
     123,    0,  990,    2, 0x08 /* Private */,
     124,    0,  991,    2, 0x08 /* Private */,
     125,    0,  992,    2, 0x08 /* Private */,
     126,    0,  993,    2, 0x08 /* Private */,
     127,    0,  994,    2, 0x08 /* Private */,
     128,    0,  995,    2, 0x08 /* Private */,
     129,    0,  996,    2, 0x08 /* Private */,
     130,    0,  997,    2, 0x08 /* Private */,
     131,    1,  998,    2, 0x08 /* Private */,
     132,    1, 1001,    2, 0x08 /* Private */,
     133,    0, 1004,    2, 0x08 /* Private */,
     134,    0, 1005,    2, 0x08 /* Private */,
     135,    0, 1006,    2, 0x08 /* Private */,
     136,    0, 1007,    2, 0x08 /* Private */,
     137,    0, 1008,    2, 0x08 /* Private */,
     138,    0, 1009,    2, 0x08 /* Private */,
     139,    0, 1010,    2, 0x08 /* Private */,
     140,    0, 1011,    2, 0x08 /* Private */,
     141,    0, 1012,    2, 0x08 /* Private */,
     142,    0, 1013,    2, 0x08 /* Private */,
     143,    0, 1014,    2, 0x08 /* Private */,
     144,    0, 1015,    2, 0x08 /* Private */,
     145,    0, 1016,    2, 0x08 /* Private */,
     146,    0, 1017,    2, 0x08 /* Private */,
     147,    0, 1018,    2, 0x08 /* Private */,
     148,    1, 1019,    2, 0x08 /* Private */,
     150,    1, 1022,    2, 0x08 /* Private */,
     151,    1, 1025,    2, 0x08 /* Private */,
     153,    0, 1028,    2, 0x08 /* Private */,
     154,    0, 1029,    2, 0x08 /* Private */,
     155,    0, 1030,    2, 0x08 /* Private */,
     156,    0, 1031,    2, 0x08 /* Private */,
     157,    0, 1032,    2, 0x08 /* Private */,
     158,    0, 1033,    2, 0x08 /* Private */,
     159,    0, 1034,    2, 0x08 /* Private */,
     160,    1, 1035,    2, 0x08 /* Private */,
     162,    2, 1038,    2, 0x08 /* Private */,
     165,    0, 1043,    2, 0x08 /* Private */,
     166,    0, 1044,    2, 0x08 /* Private */,
     167,    0, 1045,    2, 0x08 /* Private */,
     168,    0, 1046,    2, 0x08 /* Private */,
     169,    0, 1047,    2, 0x08 /* Private */,
     170,    0, 1048,    2, 0x08 /* Private */,
     171,    2, 1049,    2, 0x08 /* Private */,
     176,    2, 1054,    2, 0x08 /* Private */,
     177,    0, 1059,    2, 0x08 /* Private */,
     178,    0, 1060,    2, 0x08 /* Private */,
     179,    1, 1061,    2, 0x08 /* Private */,
     181,    0, 1064,    2, 0x08 /* Private */,
     182,    0, 1065,    2, 0x08 /* Private */,
     183,    0, 1066,    2, 0x08 /* Private */,
     184,    0, 1067,    2, 0x08 /* Private */,
     185,    0, 1068,    2, 0x08 /* Private */,
     186,    0, 1069,    2, 0x08 /* Private */,
     187,    0, 1070,    2, 0x08 /* Private */,
     188,    0, 1071,    2, 0x08 /* Private */,
     189,    0, 1072,    2, 0x08 /* Private */,
     190,    0, 1073,    2, 0x08 /* Private */,
     191,    0, 1074,    2, 0x08 /* Private */,
     192,    0, 1075,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 30, QMetaType::Bool,   31,   32,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 27, QMetaType::Bool,   31,   32,
    QMetaType::Void, 0x80000000 | 27,   31,
    QMetaType::Void, 0x80000000 | 27, QMetaType::Bool,   31,   32,
    QMetaType::Void, 0x80000000 | 27,   31,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 27,   39,
    QMetaType::Void, 0x80000000 | 27,   39,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   42,   43,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 35, QMetaType::Bool,   31,   36,   45,
    QMetaType::Void, 0x80000000 | 27,   39,
    QMetaType::Void, 0x80000000 | 27,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 54, QMetaType::Bool,   55,   56,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 66,   67,
    QMetaType::Void, QMetaType::Bool,   69,
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
    QMetaType::Void, 0x80000000 | 100, 0x80000000 | 100,  101,  102,
    QMetaType::Void, QMetaType::QPoint,  104,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,  104,
    QMetaType::Void, 0x80000000 | 100,   36,
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
    QMetaType::Void, QMetaType::QPoint,  104,
    QMetaType::Void, QMetaType::QPoint,  104,
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
    QMetaType::Void, QMetaType::Bool,  149,
    QMetaType::Void, QMetaType::Bool,  149,
    QMetaType::Void, QMetaType::Int,  152,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  161,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  163,  164,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 172, 0x80000000 | 174,  173,  175,
    QMetaType::Void, 0x80000000 | 172, 0x80000000 | 174,  173,  175,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  180,
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

void OBSBasic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSBasic *_t = static_cast<OBSBasic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StartStreaming(); break;
        case 1: _t->StopStreaming(); break;
        case 2: _t->ForceStopStreaming(); break;
        case 3: _t->StreamDelayStarting((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->StreamDelayStopping((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->StreamingStart(); break;
        case 6: _t->StreamStopping(); break;
        case 7: _t->StreamingStop((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->StartRecording(); break;
        case 9: _t->StopRecording(); break;
        case 10: _t->RecordingStart(); break;
        case 11: _t->RecordStopping(); break;
        case 12: _t->RecordingStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->StartReplayBuffer(); break;
        case 14: _t->StopReplayBuffer(); break;
        case 15: _t->ReplayBufferStart(); break;
        case 16: _t->ReplayBufferStopping(); break;
        case 17: _t->ReplayBufferStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->SaveProjectDeferred(); break;
        case 19: _t->SaveProject(); break;
        case 20: _t->SetTransition((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 21: _t->TransitionToScene((*reinterpret_cast< OBSScene(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 22: _t->TransitionToScene((*reinterpret_cast< OBSScene(*)>(_a[1]))); break;
        case 23: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 24: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 25: _t->SetCurrentScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 26: _t->SetCurrentScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 27: _t->AddSceneItem((*reinterpret_cast< OBSSceneItem(*)>(_a[1]))); break;
        case 28: _t->RemoveSceneItem((*reinterpret_cast< OBSSceneItem(*)>(_a[1]))); break;
        case 29: _t->AddScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 30: _t->RemoveScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 31: _t->RenameSources((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 32: _t->SelectSceneItem((*reinterpret_cast< OBSScene(*)>(_a[1])),(*reinterpret_cast< OBSSceneItem(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 33: _t->ActivateAudioSource((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 34: _t->DeactivateAudioSource((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 35: _t->DuplicateSelectedScene(); break;
        case 36: _t->RemoveSelectedScene(); break;
        case 37: _t->RemoveSelectedSceneItem(); break;
        case 38: _t->ToggleAlwaysOnTop(); break;
        case 39: _t->ReorderSources((*reinterpret_cast< OBSScene(*)>(_a[1]))); break;
        case 40: _t->ProcessHotkey((*reinterpret_cast< obs_hotkey_id(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 41: _t->AddTransition(); break;
        case 42: _t->RenameTransition(); break;
        case 43: _t->TransitionClicked(); break;
        case 44: _t->TransitionStopped(); break;
        case 45: _t->TriggerQuickTransition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->SetDeinterlacingMode(); break;
        case 47: _t->SetDeinterlacingOrder(); break;
        case 48: _t->SetScaleFilter(); break;
        case 49: _t->IconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 50: _t->SetShowing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->ToggleShowHide(); break;
        case 52: _t->on_actionCopySource_triggered(); break;
        case 53: _t->on_actionPasteRef_triggered(); break;
        case 54: _t->on_actionPasteDup_triggered(); break;
        case 55: _t->on_actionCopyFilters_triggered(); break;
        case 56: _t->on_actionPasteFilters_triggered(); break;
        case 57: _t->on_actionFullscreenInterface_triggered(); break;
        case 58: _t->on_actionShow_Recordings_triggered(); break;
        case 59: _t->on_actionRemux_triggered(); break;
        case 60: _t->on_action_Settings_triggered(); break;
        case 61: _t->on_actionAdvAudioProperties_triggered(); break;
        case 62: _t->on_advAudioProps_clicked(); break;
        case 63: _t->on_advAudioProps_destroyed(); break;
        case 64: _t->on_actionShowLogs_triggered(); break;
        case 65: _t->on_actionUploadCurrentLog_triggered(); break;
        case 66: _t->on_actionUploadLastLog_triggered(); break;
        case 67: _t->on_actionViewCurrentLog_triggered(); break;
        case 68: _t->on_actionCheckForUpdates_triggered(); break;
        case 69: _t->on_actionEditTransform_triggered(); break;
        case 70: _t->on_actionCopyTransform_triggered(); break;
        case 71: _t->on_actionPasteTransform_triggered(); break;
        case 72: _t->on_actionRotate90CW_triggered(); break;
        case 73: _t->on_actionRotate90CCW_triggered(); break;
        case 74: _t->on_actionRotate180_triggered(); break;
        case 75: _t->on_actionFlipHorizontal_triggered(); break;
        case 76: _t->on_actionFlipVertical_triggered(); break;
        case 77: _t->on_actionFitToScreen_triggered(); break;
        case 78: _t->on_actionStretchToScreen_triggered(); break;
        case 79: _t->on_actionCenterToScreen_triggered(); break;
        case 80: _t->on_scenes_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 81: _t->on_scenes_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 82: _t->on_actionAddScene_triggered(); break;
        case 83: _t->on_actionRemoveScene_triggered(); break;
        case 84: _t->on_actionSceneUp_triggered(); break;
        case 85: _t->on_actionSceneDown_triggered(); break;
        case 86: _t->on_sources_itemSelectionChanged(); break;
        case 87: _t->on_sources_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 88: _t->on_sources_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 89: _t->on_actionAddSource_triggered(); break;
        case 90: _t->on_actionRemoveSource_triggered(); break;
        case 91: _t->on_actionInteract_triggered(); break;
        case 92: _t->on_actionSourceProperties_triggered(); break;
        case 93: _t->on_actionSourceUp_triggered(); break;
        case 94: _t->on_actionSourceDown_triggered(); break;
        case 95: _t->on_actionMoveUp_triggered(); break;
        case 96: _t->on_actionMoveDown_triggered(); break;
        case 97: _t->on_actionMoveToTop_triggered(); break;
        case 98: _t->on_actionMoveToBottom_triggered(); break;
        case 99: _t->on_actionLockPreview_triggered(); break;
        case 100: _t->on_scalingMenu_aboutToShow(); break;
        case 101: _t->on_actionScaleWindow_triggered(); break;
        case 102: _t->on_actionScaleCanvas_triggered(); break;
        case 103: _t->on_actionScaleOutput_triggered(); break;
        case 104: _t->on_streamButton_clicked(); break;
        case 105: _t->on_recordButton_clicked(); break;
        case 106: _t->on_settingsButton_clicked(); break;
        case 107: _t->on_actionWebsite_triggered(); break;
        case 108: _t->on_preview_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 109: _t->on_previewDisabledLabel_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 110: _t->on_actionNewSceneCollection_triggered(); break;
        case 111: _t->on_actionDupSceneCollection_triggered(); break;
        case 112: _t->on_actionRenameSceneCollection_triggered(); break;
        case 113: _t->on_actionRemoveSceneCollection_triggered(); break;
        case 114: _t->on_actionImportSceneCollection_triggered(); break;
        case 115: _t->on_actionExportSceneCollection_triggered(); break;
        case 116: _t->on_actionNewProfile_triggered(); break;
        case 117: _t->on_actionDupProfile_triggered(); break;
        case 118: _t->on_actionRenameProfile_triggered(); break;
        case 119: _t->on_actionRemoveProfile_triggered(); break;
        case 120: _t->on_actionImportProfile_triggered(); break;
        case 121: _t->on_actionExportProfile_triggered(); break;
        case 122: _t->on_actionShowSettingsFolder_triggered(); break;
        case 123: _t->on_actionShowProfileFolder_triggered(); break;
        case 124: _t->on_actionAlwaysOnTop_triggered(); break;
        case 125: _t->on_toggleListboxToolbars_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 126: _t->on_toggleStatusBar_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 127: _t->on_transitions_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 128: _t->on_transitionAdd_clicked(); break;
        case 129: _t->on_transitionRemove_clicked(); break;
        case 130: _t->on_transitionProps_clicked(); break;
        case 131: _t->on_modeSwitch_clicked(); break;
        case 132: _t->on_autoConfigure_triggered(); break;
        case 133: _t->on_stats_triggered(); break;
        case 134: _t->on_resetUI_triggered(); break;
        case 135: _t->on_lockUI_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 136: _t->logUploadFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 137: _t->updateCheckFinished(); break;
        case 138: _t->AddSourceFromAction(); break;
        case 139: _t->MoveSceneToTop(); break;
        case 140: _t->MoveSceneToBottom(); break;
        case 141: _t->EditSceneName(); break;
        case 142: _t->EditSceneItemName(); break;
        case 143: _t->SceneNameEdited((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 144: _t->SceneItemNameEdited((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 145: _t->OpenSceneFilters(); break;
        case 146: _t->OpenFilters(); break;
        case 147: _t->EnablePreviewDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 148: _t->TogglePreview(); break;
        case 149: _t->NudgeUp(); break;
        case 150: _t->NudgeDown(); break;
        case 151: _t->NudgeLeft(); break;
        case 152: _t->NudgeRight(); break;
        case 153: _t->OpenPreviewProjector(); break;
        case 154: _t->OpenSourceProjector(); break;
        case 155: _t->OpenSceneProjector(); break;
        case 156: _t->OpenPreviewWindow(); break;
        case 157: _t->OpenSourceWindow(); break;
        case 158: _t->OpenSceneWindow(); break;
        case 159: _t->on_actionResetTransform_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 143:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 144:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject OBSBasic::staticMetaObject = {
    { &OBSMainWindow::staticMetaObject, qt_meta_stringdata_OBSBasic.data,
      qt_meta_data_OBSBasic,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSBasic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasic::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSBasic.stringdata0))
        return static_cast<void*>(const_cast< OBSBasic*>(this));
    return OBSMainWindow::qt_metacast(_clname);
}

int OBSBasic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OBSMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 160)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 160;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 160)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 160;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
