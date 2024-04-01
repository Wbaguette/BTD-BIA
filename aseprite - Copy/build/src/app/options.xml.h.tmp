// Don't modify, generated file from C:/aseprite/data/widgets/options.xml

#ifndef GENERATED_OPTIONS_H_INCLUDED
#define GENERATED_OPTIONS_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/button_set.h"
#include "app/ui/color_button.h"
#include "app/ui/expr_entry.h"
#include "app/ui/pref_widget.h"
#include "ui/box.h"
#include "ui/button.h"
#include "ui/combobox.h"
#include "ui/label.h"
#include "ui/link_label.h"
#include "ui/listbox.h"
#include "ui/panel.h"
#include "ui/slider.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class Options : public ui::Window {
  public:
    Options() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("options.xml", "options", this);
      app::finder(this)
        >> "section_listbox" >> m_sectionListbox
        >> "panel" >> m_panel
        >> "section_general" >> m_sectionGeneral
        >> "ui_windows" >> m_uiWindows
        >> "theme_variants" >> m_themeVariants
        >> "screen_scale" >> m_screenScale
        >> "ui_scale" >> m_uiScale
        >> "language" >> m_language
        >> "gpu_acceleration" >> m_gpuAcceleration
        >> "show_menu_bar" >> m_showMenuBar
        >> "show_aseprite_file_dialog" >> m_showAsepriteFileDialog
        >> "show_home" >> m_showHome
        >> "expand_menubar_on_mouseover" >> m_expandMenubarOnMouseover
        >> "color_bar_entries_separator" >> m_colorBarEntriesSeparator
        >> "share_crashdb" >> m_shareCrashdb
        >> "locate_file" >> m_locateFile
        >> "locate_crash_folder" >> m_locateCrashFolder
        >> "section_tablet" >> m_sectionTablet
        >> "tablet_api_windows_pointer" >> m_tabletApiWindowsPointer
        >> "tablet_api_wintab_system" >> m_tabletApiWintabSystem
        >> "tablet_api_wintab_direct" >> m_tabletApiWintabDirect
        >> "one_finger_as_mouse_movement" >> m_oneFingerAsMouseMovement
        >> "load_wintab_driver" >> m_loadWintabDriver
        >> "section_files" >> m_sectionFiles
        >> "default_extension" >> m_defaultExtension
        >> "export_image_default_extension" >> m_exportImageDefaultExtension
        >> "export_animation_default_extension" >> m_exportAnimationDefaultExtension
        >> "export_sprite_sheet_default_extension" >> m_exportSpriteSheetDefaultExtension
        >> "recent_files" >> m_recentFiles
        >> "clear_recent_files" >> m_clearRecentFiles
        >> "show_full_path" >> m_showFullPath
        >> "enable_data_recovery" >> m_enableDataRecovery
        >> "data_recovery_period" >> m_dataRecoveryPeriod
        >> "keep_edited_sprite_data" >> m_keepEditedSpriteData
        >> "keep_edited_sprite_data_for" >> m_keepEditedSpriteDataFor
        >> "keep_closed_sprite_on_memory" >> m_keepClosedSpriteOnMemory
        >> "keep_closed_sprite_on_memory_for" >> m_keepClosedSpriteOnMemoryFor
        >> "section_color" >> m_sectionColor
        >> "color_management" >> m_colorManagement
        >> "window_cs_label" >> m_windowCsLabel
        >> "window_cs" >> m_windowCs
        >> "working_rgb_cs_label" >> m_workingRgbCsLabel
        >> "working_rgb_cs" >> m_workingRgbCs
        >> "files_with_cs_label" >> m_filesWithCsLabel
        >> "files_with_cs" >> m_filesWithCs
        >> "missing_cs_label" >> m_missingCsLabel
        >> "missing_cs" >> m_missingCs
        >> "reset_color_management" >> m_resetColorManagement
        >> "alpha_range_label" >> m_alphaRangeLabel
        >> "alpha" >> m_alpha
        >> "opacity_range_label" >> m_opacityRangeLabel
        >> "opacity" >> m_opacity
        >> "section_editor" >> m_sectionEditor
        >> "wheel_zoom" >> m_wheelZoom
        >> "slide_zoom" >> m_slideZoom
        >> "zoom_from_center_with_wheel" >> m_zoomFromCenterWithWheel
        >> "zoom_from_center_with_keys" >> m_zoomFromCenterWithKeys
        >> "show_scrollbars" >> m_showScrollbars
        >> "auto_scroll" >> m_autoScroll
        >> "auto_fit" >> m_autoFit
        >> "straight_line_preview" >> m_straightLinePreview
        >> "discard_brush" >> m_discardBrush
        >> "sampling_placeholder" >> m_samplingPlaceholder
        >> "right_click_behavior" >> m_rightClickBehavior
        >> "section_selection" >> m_sectionSelection
        >> "auto_opaque" >> m_autoOpaque
        >> "keep_selection_after_clear" >> m_keepSelectionAfterClear
        >> "auto_show_selection_edges" >> m_autoShowSelectionEdges
        >> "move_edges" >> m_moveEdges
        >> "modifiers_disable_handles" >> m_modifiersDisableHandles
        >> "move_on_add_mode" >> m_moveOnAddMode
        >> "select_tile_with_double_click" >> m_selectTileWithDoubleClick
        >> "force_rotsprite" >> m_forceRotsprite
        >> "multicel_when_layers_or_frames" >> m_multicelWhenLayersOrFrames
        >> "section_timeline" >> m_sectionTimeline
        >> "autotimeline" >> m_autotimeline
        >> "rewind_on_stop" >> m_rewindOnStop
        >> "first_frame" >> m_firstFrame
        >> "keep_selection" >> m_keepSelection
        >> "select_on_click" >> m_selectOnClick
        >> "select_on_click_with_key" >> m_selectOnClickWithKey
        >> "select_on_drag" >> m_selectOnDrag
        >> "drag_and_drop_from_edges" >> m_dragAndDropFromEdges
        >> "reset_timeline_sel" >> m_resetTimelineSel
        >> "section_cursors" >> m_sectionCursors
        >> "native_cursor" >> m_nativeCursor
        >> "cursor_scale_label" >> m_cursorScaleLabel
        >> "cursor_scale" >> m_cursorScale
        >> "painting_cursor_type" >> m_paintingCursorType
        >> "brush_preview" >> m_brushPreview
        >> "cursor_color_type" >> m_cursorColorType
        >> "cursor_color" >> m_cursorColor
        >> "section_bg" >> m_sectionBg
        >> "bg_scope" >> m_bgScope
        >> "checkered_bg_size" >> m_checkeredBgSize
        >> "checkered_bg_custom_w" >> m_checkeredBgCustomW
        >> "checkered_bg_custom_h" >> m_checkeredBgCustomH
        >> "checkered_bg_zoom" >> m_checkeredBgZoom
        >> "checkered_bg_color1" >> m_checkeredBgColor1
        >> "checkered_bg_color2" >> m_checkeredBgColor2
        >> "reset_bg" >> m_resetBg
        >> "section_grid" >> m_sectionGrid
        >> "grid_scope" >> m_gridScope
        >> "grid_visible" >> m_gridVisible
        >> "grid_x" >> m_gridX
        >> "grid_y" >> m_gridY
        >> "grid_w" >> m_gridW
        >> "grid_h" >> m_gridH
        >> "grid_color" >> m_gridColor
        >> "grid_opacity" >> m_gridOpacity
        >> "grid_auto_opacity" >> m_gridAutoOpacity
        >> "pixel_grid_visible" >> m_pixelGridVisible
        >> "pixel_grid_color" >> m_pixelGridColor
        >> "pixel_grid_opacity" >> m_pixelGridOpacity
        >> "pixel_grid_auto_opacity" >> m_pixelGridAutoOpacity
        >> "reset_grid" >> m_resetGrid
        >> "section_guides_and_slices" >> m_sectionGuidesAndSlices
        >> "layer_edges_color" >> m_layerEdgesColor
        >> "auto_guides_color" >> m_autoGuidesColor
        >> "default_slice_color" >> m_defaultSliceColor
        >> "section_undo" >> m_sectionUndo
        >> "limit_undo" >> m_limitUndo
        >> "undo_size_limit" >> m_undoSizeLimit
        >> "undo_goto_modified" >> m_undoGotoModified
        >> "undo_allow_nonlinear_history" >> m_undoAllowNonlinearHistory
        >> "undo_show_tooltip" >> m_undoShowTooltip
        >> "section_alerts" >> m_sectionAlerts
        >> "open_sequence" >> m_openSequence
        >> "file_format_doesnt_support_alert" >> m_fileFormatDoesntSupportAlert
        >> "export_animation_in_sequence_alert" >> m_exportAnimationInSequenceAlert
        >> "overwrite_files_on_export_alert" >> m_overwriteFilesOnExportAlert
        >> "overwrite_files_on_export_sprite_sheet_alert" >> m_overwriteFilesOnExportSpriteSheetAlert
        >> "delete_tilemap_delete_unused_tileset_alert" >> m_deleteTilemapDeleteUnusedTilesetAlert
        >> "advanced_mode_alert" >> m_advancedModeAlert
        >> "invalid_fg_bg_color_alert" >> m_invalidFgBgColorAlert
        >> "run_script_alert" >> m_runScriptAlert
        >> "css_options_alert" >> m_cssOptionsAlert
        >> "gif_options_alert" >> m_gifOptionsAlert
        >> "jpeg_options_alert" >> m_jpegOptionsAlert
        >> "svg_options_alert" >> m_svgOptionsAlert
        >> "tga_options_alert" >> m_tgaOptionsAlert
        >> "reset_alerts" >> m_resetAlerts
        >> "section_theme" >> m_sectionTheme
        >> "theme_list" >> m_themeList
        >> "select_theme" >> m_selectTheme
        >> "open_theme_folder" >> m_openThemeFolder
        >> "section_extensions" >> m_sectionExtensions
        >> "extensions_list" >> m_extensionsList
        >> "add_extension" >> m_addExtension
        >> "disable_extension" >> m_disableExtension
        >> "uninstall_extension" >> m_uninstallExtension
        >> "open_extension_folder" >> m_openExtensionFolder
        >> "section_experimental" >> m_sectionExperimental
        >> "multiple_windows" >> m_multipleWindows
        >> "new_render_engine" >> m_newRenderEngine
        >> "native_clipboard" >> m_nativeClipboard
        >> "native_file_dialog" >> m_nativeFileDialog
        >> "tint_shade_tone_hue_with_sat_value" >> m_tintShadeToneHueWithSatValue
        >> "load_wintab_driver_box" >> m_loadWintabDriverBox
        >> "load_wintab_driver2" >> m_loadWintabDriver2
        >> "flash_layer" >> m_flashLayer
        >> "nonactive_layers_opacity" >> m_nonactiveLayersOpacity
        >> "rgbmap_algorithm_placeholder" >> m_rgbmapAlgorithmPlaceholder
        >> "shaders_for_color_selectors" >> m_shadersForColorSelectors
        >> "cache_compressed_tilesets" >> m_cacheCompressedTilesets
        >> "button_ok" >> m_buttonOk
        >> "button_apply" >> m_buttonApply
      ;
    }

    ui::ListBox* sectionListbox() const { return m_sectionListbox; }
    ui::Panel* panel() const { return m_panel; }
    ui::VBox* sectionGeneral() const { return m_sectionGeneral; }
    app::ButtonSet* uiWindows() const { return m_uiWindows; }
    ui::HBox* themeVariants() const { return m_themeVariants; }
    ui::ComboBox* screenScale() const { return m_screenScale; }
    ui::ComboBox* uiScale() const { return m_uiScale; }
    ui::ComboBox* language() const { return m_language; }
    ui::CheckBox* gpuAcceleration() const { return m_gpuAcceleration; }
    ui::CheckBox* showMenuBar() const { return m_showMenuBar; }
    ui::CheckBox* showAsepriteFileDialog() const { return m_showAsepriteFileDialog; }
    ui::CheckBox* showHome() const { return m_showHome; }
    ui::CheckBox* expandMenubarOnMouseover() const { return m_expandMenubarOnMouseover; }
    BoolPrefWidget<ui::CheckBox>* colorBarEntriesSeparator() const { return m_colorBarEntriesSeparator; }
    ui::CheckBox* shareCrashdb() const { return m_shareCrashdb; }
    ui::LinkLabel* locateFile() const { return m_locateFile; }
    ui::LinkLabel* locateCrashFolder() const { return m_locateCrashFolder; }
    ui::VBox* sectionTablet() const { return m_sectionTablet; }
    ui::RadioButton* tabletApiWindowsPointer() const { return m_tabletApiWindowsPointer; }
    ui::RadioButton* tabletApiWintabSystem() const { return m_tabletApiWintabSystem; }
    ui::RadioButton* tabletApiWintabDirect() const { return m_tabletApiWintabDirect; }
    BoolPrefWidget<ui::CheckBox>* oneFingerAsMouseMovement() const { return m_oneFingerAsMouseMovement; }
    ui::CheckBox* loadWintabDriver() const { return m_loadWintabDriver; }
    ui::VBox* sectionFiles() const { return m_sectionFiles; }
    ui::ComboBox* defaultExtension() const { return m_defaultExtension; }
    ui::ComboBox* exportImageDefaultExtension() const { return m_exportImageDefaultExtension; }
    ui::ComboBox* exportAnimationDefaultExtension() const { return m_exportAnimationDefaultExtension; }
    ui::ComboBox* exportSpriteSheetDefaultExtension() const { return m_exportSpriteSheetDefaultExtension; }
    ui::Slider* recentFiles() const { return m_recentFiles; }
    ui::Button* clearRecentFiles() const { return m_clearRecentFiles; }
    ui::CheckBox* showFullPath() const { return m_showFullPath; }
    ui::CheckBox* enableDataRecovery() const { return m_enableDataRecovery; }
    ui::ComboBox* dataRecoveryPeriod() const { return m_dataRecoveryPeriod; }
    ui::CheckBox* keepEditedSpriteData() const { return m_keepEditedSpriteData; }
    ui::ComboBox* keepEditedSpriteDataFor() const { return m_keepEditedSpriteDataFor; }
    ui::CheckBox* keepClosedSpriteOnMemory() const { return m_keepClosedSpriteOnMemory; }
    ui::ComboBox* keepClosedSpriteOnMemoryFor() const { return m_keepClosedSpriteOnMemoryFor; }
    ui::VBox* sectionColor() const { return m_sectionColor; }
    BoolPrefWidget<ui::CheckBox>* colorManagement() const { return m_colorManagement; }
    ui::Label* windowCsLabel() const { return m_windowCsLabel; }
    ui::ComboBox* windowCs() const { return m_windowCs; }
    ui::Label* workingRgbCsLabel() const { return m_workingRgbCsLabel; }
    ui::ComboBox* workingRgbCs() const { return m_workingRgbCs; }
    ui::Label* filesWithCsLabel() const { return m_filesWithCsLabel; }
    ui::ComboBox* filesWithCs() const { return m_filesWithCs; }
    ui::Label* missingCsLabel() const { return m_missingCsLabel; }
    ui::ComboBox* missingCs() const { return m_missingCs; }
    ui::Button* resetColorManagement() const { return m_resetColorManagement; }
    ui::Label* alphaRangeLabel() const { return m_alphaRangeLabel; }
    ui::ComboBox* alpha() const { return m_alpha; }
    ui::Label* opacityRangeLabel() const { return m_opacityRangeLabel; }
    ui::ComboBox* opacity() const { return m_opacity; }
    ui::VBox* sectionEditor() const { return m_sectionEditor; }
    BoolPrefWidget<ui::CheckBox>* wheelZoom() const { return m_wheelZoom; }
    BoolPrefWidget<ui::CheckBox>* slideZoom() const { return m_slideZoom; }
    ui::CheckBox* zoomFromCenterWithWheel() const { return m_zoomFromCenterWithWheel; }
    ui::CheckBox* zoomFromCenterWithKeys() const { return m_zoomFromCenterWithKeys; }
    ui::CheckBox* showScrollbars() const { return m_showScrollbars; }
    ui::CheckBox* autoScroll() const { return m_autoScroll; }
    BoolPrefWidget<ui::CheckBox>* autoFit() const { return m_autoFit; }
    ui::CheckBox* straightLinePreview() const { return m_straightLinePreview; }
    ui::CheckBox* discardBrush() const { return m_discardBrush; }
    ui::HBox* samplingPlaceholder() const { return m_samplingPlaceholder; }
    ui::ComboBox* rightClickBehavior() const { return m_rightClickBehavior; }
    ui::VBox* sectionSelection() const { return m_sectionSelection; }
    ui::CheckBox* autoOpaque() const { return m_autoOpaque; }
    ui::CheckBox* keepSelectionAfterClear() const { return m_keepSelectionAfterClear; }
    ui::CheckBox* autoShowSelectionEdges() const { return m_autoShowSelectionEdges; }
    ui::CheckBox* moveEdges() const { return m_moveEdges; }
    ui::CheckBox* modifiersDisableHandles() const { return m_modifiersDisableHandles; }
    ui::CheckBox* moveOnAddMode() const { return m_moveOnAddMode; }
    BoolPrefWidget<ui::CheckBox>* selectTileWithDoubleClick() const { return m_selectTileWithDoubleClick; }
    BoolPrefWidget<ui::CheckBox>* forceRotsprite() const { return m_forceRotsprite; }
    BoolPrefWidget<ui::CheckBox>* multicelWhenLayersOrFrames() const { return m_multicelWhenLayersOrFrames; }
    ui::VBox* sectionTimeline() const { return m_sectionTimeline; }
    BoolPrefWidget<ui::CheckBox>* autotimeline() const { return m_autotimeline; }
    BoolPrefWidget<ui::CheckBox>* rewindOnStop() const { return m_rewindOnStop; }
    app::ExprEntry* firstFrame() const { return m_firstFrame; }
    BoolPrefWidget<ui::CheckBox>* keepSelection() const { return m_keepSelection; }
    BoolPrefWidget<ui::CheckBox>* selectOnClick() const { return m_selectOnClick; }
    BoolPrefWidget<ui::CheckBox>* selectOnClickWithKey() const { return m_selectOnClickWithKey; }
    BoolPrefWidget<ui::CheckBox>* selectOnDrag() const { return m_selectOnDrag; }
    BoolPrefWidget<ui::CheckBox>* dragAndDropFromEdges() const { return m_dragAndDropFromEdges; }
    ui::Button* resetTimelineSel() const { return m_resetTimelineSel; }
    ui::VBox* sectionCursors() const { return m_sectionCursors; }
    ui::CheckBox* nativeCursor() const { return m_nativeCursor; }
    ui::Label* cursorScaleLabel() const { return m_cursorScaleLabel; }
    ui::ComboBox* cursorScale() const { return m_cursorScale; }
    ui::ComboBox* paintingCursorType() const { return m_paintingCursorType; }
    ui::ComboBox* brushPreview() const { return m_brushPreview; }
    ui::ComboBox* cursorColorType() const { return m_cursorColorType; }
    app::ColorButton* cursorColor() const { return m_cursorColor; }
    ui::VBox* sectionBg() const { return m_sectionBg; }
    ui::ComboBox* bgScope() const { return m_bgScope; }
    ui::ComboBox* checkeredBgSize() const { return m_checkeredBgSize; }
    app::ExprEntry* checkeredBgCustomW() const { return m_checkeredBgCustomW; }
    app::ExprEntry* checkeredBgCustomH() const { return m_checkeredBgCustomH; }
    ui::CheckBox* checkeredBgZoom() const { return m_checkeredBgZoom; }
    app::ColorButton* checkeredBgColor1() const { return m_checkeredBgColor1; }
    app::ColorButton* checkeredBgColor2() const { return m_checkeredBgColor2; }
    ui::Button* resetBg() const { return m_resetBg; }
    ui::VBox* sectionGrid() const { return m_sectionGrid; }
    ui::ComboBox* gridScope() const { return m_gridScope; }
    ui::CheckBox* gridVisible() const { return m_gridVisible; }
    app::ExprEntry* gridX() const { return m_gridX; }
    app::ExprEntry* gridY() const { return m_gridY; }
    app::ExprEntry* gridW() const { return m_gridW; }
    app::ExprEntry* gridH() const { return m_gridH; }
    app::ColorButton* gridColor() const { return m_gridColor; }
    ui::Slider* gridOpacity() const { return m_gridOpacity; }
    ui::CheckBox* gridAutoOpacity() const { return m_gridAutoOpacity; }
    ui::CheckBox* pixelGridVisible() const { return m_pixelGridVisible; }
    app::ColorButton* pixelGridColor() const { return m_pixelGridColor; }
    ui::Slider* pixelGridOpacity() const { return m_pixelGridOpacity; }
    ui::CheckBox* pixelGridAutoOpacity() const { return m_pixelGridAutoOpacity; }
    ui::Button* resetGrid() const { return m_resetGrid; }
    ui::VBox* sectionGuidesAndSlices() const { return m_sectionGuidesAndSlices; }
    app::ColorButton* layerEdgesColor() const { return m_layerEdgesColor; }
    app::ColorButton* autoGuidesColor() const { return m_autoGuidesColor; }
    app::ColorButton* defaultSliceColor() const { return m_defaultSliceColor; }
    ui::VBox* sectionUndo() const { return m_sectionUndo; }
    ui::CheckBox* limitUndo() const { return m_limitUndo; }
    app::ExprEntry* undoSizeLimit() const { return m_undoSizeLimit; }
    ui::CheckBox* undoGotoModified() const { return m_undoGotoModified; }
    ui::CheckBox* undoAllowNonlinearHistory() const { return m_undoAllowNonlinearHistory; }
    BoolPrefWidget<ui::CheckBox>* undoShowTooltip() const { return m_undoShowTooltip; }
    ui::VBox* sectionAlerts() const { return m_sectionAlerts; }
    ui::ComboBox* openSequence() const { return m_openSequence; }
    BoolPrefWidget<ui::CheckBox>* fileFormatDoesntSupportAlert() const { return m_fileFormatDoesntSupportAlert; }
    BoolPrefWidget<ui::CheckBox>* exportAnimationInSequenceAlert() const { return m_exportAnimationInSequenceAlert; }
    BoolPrefWidget<ui::CheckBox>* overwriteFilesOnExportAlert() const { return m_overwriteFilesOnExportAlert; }
    BoolPrefWidget<ui::CheckBox>* overwriteFilesOnExportSpriteSheetAlert() const { return m_overwriteFilesOnExportSpriteSheetAlert; }
    BoolPrefWidget<ui::CheckBox>* deleteTilemapDeleteUnusedTilesetAlert() const { return m_deleteTilemapDeleteUnusedTilesetAlert; }
    BoolPrefWidget<ui::CheckBox>* advancedModeAlert() const { return m_advancedModeAlert; }
    BoolPrefWidget<ui::CheckBox>* invalidFgBgColorAlert() const { return m_invalidFgBgColorAlert; }
    BoolPrefWidget<ui::CheckBox>* runScriptAlert() const { return m_runScriptAlert; }
    BoolPrefWidget<ui::CheckBox>* cssOptionsAlert() const { return m_cssOptionsAlert; }
    BoolPrefWidget<ui::CheckBox>* gifOptionsAlert() const { return m_gifOptionsAlert; }
    BoolPrefWidget<ui::CheckBox>* jpegOptionsAlert() const { return m_jpegOptionsAlert; }
    BoolPrefWidget<ui::CheckBox>* svgOptionsAlert() const { return m_svgOptionsAlert; }
    BoolPrefWidget<ui::CheckBox>* tgaOptionsAlert() const { return m_tgaOptionsAlert; }
    ui::Button* resetAlerts() const { return m_resetAlerts; }
    ui::VBox* sectionTheme() const { return m_sectionTheme; }
    ui::ListBox* themeList() const { return m_themeList; }
    ui::Button* selectTheme() const { return m_selectTheme; }
    ui::Button* openThemeFolder() const { return m_openThemeFolder; }
    ui::VBox* sectionExtensions() const { return m_sectionExtensions; }
    ui::ListBox* extensionsList() const { return m_extensionsList; }
    ui::Button* addExtension() const { return m_addExtension; }
    ui::Button* disableExtension() const { return m_disableExtension; }
    ui::Button* uninstallExtension() const { return m_uninstallExtension; }
    ui::Button* openExtensionFolder() const { return m_openExtensionFolder; }
    ui::VBox* sectionExperimental() const { return m_sectionExperimental; }
    BoolPrefWidget<ui::CheckBox>* multipleWindows() const { return m_multipleWindows; }
    BoolPrefWidget<ui::CheckBox>* newRenderEngine() const { return m_newRenderEngine; }
    BoolPrefWidget<ui::CheckBox>* nativeClipboard() const { return m_nativeClipboard; }
    BoolPrefWidget<ui::CheckBox>* nativeFileDialog() const { return m_nativeFileDialog; }
    BoolPrefWidget<ui::CheckBox>* tintShadeToneHueWithSatValue() const { return m_tintShadeToneHueWithSatValue; }
    ui::HBox* loadWintabDriverBox() const { return m_loadWintabDriverBox; }
    ui::CheckBox* loadWintabDriver2() const { return m_loadWintabDriver2; }
    ui::CheckBox* flashLayer() const { return m_flashLayer; }
    ui::Slider* nonactiveLayersOpacity() const { return m_nonactiveLayersOpacity; }
    ui::HBox* rgbmapAlgorithmPlaceholder() const { return m_rgbmapAlgorithmPlaceholder; }
    BoolPrefWidget<ui::CheckBox>* shadersForColorSelectors() const { return m_shadersForColorSelectors; }
    BoolPrefWidget<ui::CheckBox>* cacheCompressedTilesets() const { return m_cacheCompressedTilesets; }
    ui::Button* buttonOk() const { return m_buttonOk; }
    ui::Button* buttonApply() const { return m_buttonApply; }

  private:
    ui::ListBox* m_sectionListbox;
    ui::Panel* m_panel;
    ui::VBox* m_sectionGeneral;
    app::ButtonSet* m_uiWindows;
    ui::HBox* m_themeVariants;
    ui::ComboBox* m_screenScale;
    ui::ComboBox* m_uiScale;
    ui::ComboBox* m_language;
    ui::CheckBox* m_gpuAcceleration;
    ui::CheckBox* m_showMenuBar;
    ui::CheckBox* m_showAsepriteFileDialog;
    ui::CheckBox* m_showHome;
    ui::CheckBox* m_expandMenubarOnMouseover;
    BoolPrefWidget<ui::CheckBox>* m_colorBarEntriesSeparator;
    ui::CheckBox* m_shareCrashdb;
    ui::LinkLabel* m_locateFile;
    ui::LinkLabel* m_locateCrashFolder;
    ui::VBox* m_sectionTablet;
    ui::RadioButton* m_tabletApiWindowsPointer;
    ui::RadioButton* m_tabletApiWintabSystem;
    ui::RadioButton* m_tabletApiWintabDirect;
    BoolPrefWidget<ui::CheckBox>* m_oneFingerAsMouseMovement;
    ui::CheckBox* m_loadWintabDriver;
    ui::VBox* m_sectionFiles;
    ui::ComboBox* m_defaultExtension;
    ui::ComboBox* m_exportImageDefaultExtension;
    ui::ComboBox* m_exportAnimationDefaultExtension;
    ui::ComboBox* m_exportSpriteSheetDefaultExtension;
    ui::Slider* m_recentFiles;
    ui::Button* m_clearRecentFiles;
    ui::CheckBox* m_showFullPath;
    ui::CheckBox* m_enableDataRecovery;
    ui::ComboBox* m_dataRecoveryPeriod;
    ui::CheckBox* m_keepEditedSpriteData;
    ui::ComboBox* m_keepEditedSpriteDataFor;
    ui::CheckBox* m_keepClosedSpriteOnMemory;
    ui::ComboBox* m_keepClosedSpriteOnMemoryFor;
    ui::VBox* m_sectionColor;
    BoolPrefWidget<ui::CheckBox>* m_colorManagement;
    ui::Label* m_windowCsLabel;
    ui::ComboBox* m_windowCs;
    ui::Label* m_workingRgbCsLabel;
    ui::ComboBox* m_workingRgbCs;
    ui::Label* m_filesWithCsLabel;
    ui::ComboBox* m_filesWithCs;
    ui::Label* m_missingCsLabel;
    ui::ComboBox* m_missingCs;
    ui::Button* m_resetColorManagement;
    ui::Label* m_alphaRangeLabel;
    ui::ComboBox* m_alpha;
    ui::Label* m_opacityRangeLabel;
    ui::ComboBox* m_opacity;
    ui::VBox* m_sectionEditor;
    BoolPrefWidget<ui::CheckBox>* m_wheelZoom;
    BoolPrefWidget<ui::CheckBox>* m_slideZoom;
    ui::CheckBox* m_zoomFromCenterWithWheel;
    ui::CheckBox* m_zoomFromCenterWithKeys;
    ui::CheckBox* m_showScrollbars;
    ui::CheckBox* m_autoScroll;
    BoolPrefWidget<ui::CheckBox>* m_autoFit;
    ui::CheckBox* m_straightLinePreview;
    ui::CheckBox* m_discardBrush;
    ui::HBox* m_samplingPlaceholder;
    ui::ComboBox* m_rightClickBehavior;
    ui::VBox* m_sectionSelection;
    ui::CheckBox* m_autoOpaque;
    ui::CheckBox* m_keepSelectionAfterClear;
    ui::CheckBox* m_autoShowSelectionEdges;
    ui::CheckBox* m_moveEdges;
    ui::CheckBox* m_modifiersDisableHandles;
    ui::CheckBox* m_moveOnAddMode;
    BoolPrefWidget<ui::CheckBox>* m_selectTileWithDoubleClick;
    BoolPrefWidget<ui::CheckBox>* m_forceRotsprite;
    BoolPrefWidget<ui::CheckBox>* m_multicelWhenLayersOrFrames;
    ui::VBox* m_sectionTimeline;
    BoolPrefWidget<ui::CheckBox>* m_autotimeline;
    BoolPrefWidget<ui::CheckBox>* m_rewindOnStop;
    app::ExprEntry* m_firstFrame;
    BoolPrefWidget<ui::CheckBox>* m_keepSelection;
    BoolPrefWidget<ui::CheckBox>* m_selectOnClick;
    BoolPrefWidget<ui::CheckBox>* m_selectOnClickWithKey;
    BoolPrefWidget<ui::CheckBox>* m_selectOnDrag;
    BoolPrefWidget<ui::CheckBox>* m_dragAndDropFromEdges;
    ui::Button* m_resetTimelineSel;
    ui::VBox* m_sectionCursors;
    ui::CheckBox* m_nativeCursor;
    ui::Label* m_cursorScaleLabel;
    ui::ComboBox* m_cursorScale;
    ui::ComboBox* m_paintingCursorType;
    ui::ComboBox* m_brushPreview;
    ui::ComboBox* m_cursorColorType;
    app::ColorButton* m_cursorColor;
    ui::VBox* m_sectionBg;
    ui::ComboBox* m_bgScope;
    ui::ComboBox* m_checkeredBgSize;
    app::ExprEntry* m_checkeredBgCustomW;
    app::ExprEntry* m_checkeredBgCustomH;
    ui::CheckBox* m_checkeredBgZoom;
    app::ColorButton* m_checkeredBgColor1;
    app::ColorButton* m_checkeredBgColor2;
    ui::Button* m_resetBg;
    ui::VBox* m_sectionGrid;
    ui::ComboBox* m_gridScope;
    ui::CheckBox* m_gridVisible;
    app::ExprEntry* m_gridX;
    app::ExprEntry* m_gridY;
    app::ExprEntry* m_gridW;
    app::ExprEntry* m_gridH;
    app::ColorButton* m_gridColor;
    ui::Slider* m_gridOpacity;
    ui::CheckBox* m_gridAutoOpacity;
    ui::CheckBox* m_pixelGridVisible;
    app::ColorButton* m_pixelGridColor;
    ui::Slider* m_pixelGridOpacity;
    ui::CheckBox* m_pixelGridAutoOpacity;
    ui::Button* m_resetGrid;
    ui::VBox* m_sectionGuidesAndSlices;
    app::ColorButton* m_layerEdgesColor;
    app::ColorButton* m_autoGuidesColor;
    app::ColorButton* m_defaultSliceColor;
    ui::VBox* m_sectionUndo;
    ui::CheckBox* m_limitUndo;
    app::ExprEntry* m_undoSizeLimit;
    ui::CheckBox* m_undoGotoModified;
    ui::CheckBox* m_undoAllowNonlinearHistory;
    BoolPrefWidget<ui::CheckBox>* m_undoShowTooltip;
    ui::VBox* m_sectionAlerts;
    ui::ComboBox* m_openSequence;
    BoolPrefWidget<ui::CheckBox>* m_fileFormatDoesntSupportAlert;
    BoolPrefWidget<ui::CheckBox>* m_exportAnimationInSequenceAlert;
    BoolPrefWidget<ui::CheckBox>* m_overwriteFilesOnExportAlert;
    BoolPrefWidget<ui::CheckBox>* m_overwriteFilesOnExportSpriteSheetAlert;
    BoolPrefWidget<ui::CheckBox>* m_deleteTilemapDeleteUnusedTilesetAlert;
    BoolPrefWidget<ui::CheckBox>* m_advancedModeAlert;
    BoolPrefWidget<ui::CheckBox>* m_invalidFgBgColorAlert;
    BoolPrefWidget<ui::CheckBox>* m_runScriptAlert;
    BoolPrefWidget<ui::CheckBox>* m_cssOptionsAlert;
    BoolPrefWidget<ui::CheckBox>* m_gifOptionsAlert;
    BoolPrefWidget<ui::CheckBox>* m_jpegOptionsAlert;
    BoolPrefWidget<ui::CheckBox>* m_svgOptionsAlert;
    BoolPrefWidget<ui::CheckBox>* m_tgaOptionsAlert;
    ui::Button* m_resetAlerts;
    ui::VBox* m_sectionTheme;
    ui::ListBox* m_themeList;
    ui::Button* m_selectTheme;
    ui::Button* m_openThemeFolder;
    ui::VBox* m_sectionExtensions;
    ui::ListBox* m_extensionsList;
    ui::Button* m_addExtension;
    ui::Button* m_disableExtension;
    ui::Button* m_uninstallExtension;
    ui::Button* m_openExtensionFolder;
    ui::VBox* m_sectionExperimental;
    BoolPrefWidget<ui::CheckBox>* m_multipleWindows;
    BoolPrefWidget<ui::CheckBox>* m_newRenderEngine;
    BoolPrefWidget<ui::CheckBox>* m_nativeClipboard;
    BoolPrefWidget<ui::CheckBox>* m_nativeFileDialog;
    BoolPrefWidget<ui::CheckBox>* m_tintShadeToneHueWithSatValue;
    ui::HBox* m_loadWintabDriverBox;
    ui::CheckBox* m_loadWintabDriver2;
    ui::CheckBox* m_flashLayer;
    ui::Slider* m_nonactiveLayersOpacity;
    ui::HBox* m_rgbmapAlgorithmPlaceholder;
    BoolPrefWidget<ui::CheckBox>* m_shadersForColorSelectors;
    BoolPrefWidget<ui::CheckBox>* m_cacheCompressedTilesets;
    ui::Button* m_buttonOk;
    ui::Button* m_buttonApply;
  };

} // namespace gen
} // namespace app

#endif
