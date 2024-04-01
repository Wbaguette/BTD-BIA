// Don't modify, generated file from C:/aseprite/data/widgets/export_sprite_sheet.xml

#ifndef GENERATED_EXPORT_SPRITE_SHEET_H_INCLUDED
#define GENERATED_EXPORT_SPRITE_SHEET_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/button_set.h"
#include "app/ui/expr_entry.h"
#include "ui/box.h"
#include "ui/button.h"
#include "ui/combobox.h"
#include "ui/entry.h"
#include "ui/grid.h"
#include "ui/panel.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class ExportSpriteSheet : public ui::Window {
  public:
    ExportSpriteSheet() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("export_sprite_sheet.xml", "export_sprite_sheet", this);
      app::finder(this)
        >> "section_tabs" >> m_sectionTabs
        >> "section_layout_tab" >> m_sectionLayoutTab
        >> "section_sprite_tab" >> m_sectionSpriteTab
        >> "section_borders_tab" >> m_sectionBordersTab
        >> "section_output_tab" >> m_sectionOutputTab
        >> "expand_sections" >> m_expandSections
        >> "panel" >> m_panel
        >> "section_layout" >> m_sectionLayout
        >> "sheet_type" >> m_sheetType
        >> "constraint_type" >> m_constraintType
        >> "width_constraint" >> m_widthConstraint
        >> "height_constraint" >> m_heightConstraint
        >> "merge_dups" >> m_mergeDups
        >> "ignore_empty" >> m_ignoreEmpty
        >> "section_sprite_separator" >> m_sectionSpriteSeparator
        >> "close_sprite_section" >> m_closeSpriteSection
        >> "section_sprite" >> m_sectionSprite
        >> "source" >> m_source
        >> "layers" >> m_layers
        >> "split_layers" >> m_splitLayers
        >> "frames" >> m_frames
        >> "split_tags" >> m_splitTags
        >> "section_borders_separator" >> m_sectionBordersSeparator
        >> "close_borders_section" >> m_closeBordersSection
        >> "section_borders" >> m_sectionBorders
        >> "border_padding" >> m_borderPadding
        >> "shape_padding" >> m_shapePadding
        >> "inner_padding" >> m_innerPadding
        >> "trim_sprite_enabled" >> m_trimSpriteEnabled
        >> "trim_enabled" >> m_trimEnabled
        >> "trim_container" >> m_trimContainer
        >> "grid_trim_enabled" >> m_gridTrimEnabled
        >> "extrude_enabled" >> m_extrudeEnabled
        >> "section_output_separator" >> m_sectionOutputSeparator
        >> "close_output_section" >> m_closeOutputSection
        >> "section_output" >> m_sectionOutput
        >> "image_enabled" >> m_imageEnabled
        >> "image_filename" >> m_imageFilename
        >> "data_enabled" >> m_dataEnabled
        >> "data_filename" >> m_dataFilename
        >> "data_meta" >> m_dataMeta
        >> "data_format" >> m_dataFormat
        >> "list_layers" >> m_listLayers
        >> "list_tags" >> m_listTags
        >> "list_slices" >> m_listSlices
        >> "data_formats_placeholder" >> m_dataFormatsPlaceholder
        >> "data_filename_format" >> m_dataFilenameFormat
        >> "data_tagname_format" >> m_dataTagnameFormat
        >> "open_generated" >> m_openGenerated
        >> "preview" >> m_preview
        >> "export_button" >> m_exportButton
      ;
    }

    app::ButtonSet* sectionTabs() const { return m_sectionTabs; }
    app::ButtonSet::Item* sectionLayoutTab() const { return m_sectionLayoutTab; }
    app::ButtonSet::Item* sectionSpriteTab() const { return m_sectionSpriteTab; }
    app::ButtonSet::Item* sectionBordersTab() const { return m_sectionBordersTab; }
    app::ButtonSet::Item* sectionOutputTab() const { return m_sectionOutputTab; }
    ui::Button* expandSections() const { return m_expandSections; }
    ui::Panel* panel() const { return m_panel; }
    ui::Grid* sectionLayout() const { return m_sectionLayout; }
    ui::ComboBox* sheetType() const { return m_sheetType; }
    ui::ComboBox* constraintType() const { return m_constraintType; }
    app::ExprEntry* widthConstraint() const { return m_widthConstraint; }
    app::ExprEntry* heightConstraint() const { return m_heightConstraint; }
    ui::CheckBox* mergeDups() const { return m_mergeDups; }
    ui::CheckBox* ignoreEmpty() const { return m_ignoreEmpty; }
    ui::HBox* sectionSpriteSeparator() const { return m_sectionSpriteSeparator; }
    ui::Button* closeSpriteSection() const { return m_closeSpriteSection; }
    ui::Grid* sectionSprite() const { return m_sectionSprite; }
    ui::ComboBox* source() const { return m_source; }
    ui::ComboBox* layers() const { return m_layers; }
    ui::CheckBox* splitLayers() const { return m_splitLayers; }
    ui::ComboBox* frames() const { return m_frames; }
    ui::CheckBox* splitTags() const { return m_splitTags; }
    ui::HBox* sectionBordersSeparator() const { return m_sectionBordersSeparator; }
    ui::Button* closeBordersSection() const { return m_closeBordersSection; }
    ui::Grid* sectionBorders() const { return m_sectionBorders; }
    app::ExprEntry* borderPadding() const { return m_borderPadding; }
    app::ExprEntry* shapePadding() const { return m_shapePadding; }
    app::ExprEntry* innerPadding() const { return m_innerPadding; }
    ui::CheckBox* trimSpriteEnabled() const { return m_trimSpriteEnabled; }
    ui::CheckBox* trimEnabled() const { return m_trimEnabled; }
    ui::VBox* trimContainer() const { return m_trimContainer; }
    ui::CheckBox* gridTrimEnabled() const { return m_gridTrimEnabled; }
    ui::CheckBox* extrudeEnabled() const { return m_extrudeEnabled; }
    ui::HBox* sectionOutputSeparator() const { return m_sectionOutputSeparator; }
    ui::Button* closeOutputSection() const { return m_closeOutputSection; }
    ui::Grid* sectionOutput() const { return m_sectionOutput; }
    ui::CheckBox* imageEnabled() const { return m_imageEnabled; }
    ui::Button* imageFilename() const { return m_imageFilename; }
    ui::CheckBox* dataEnabled() const { return m_dataEnabled; }
    ui::Button* dataFilename() const { return m_dataFilename; }
    ui::HBox* dataMeta() const { return m_dataMeta; }
    ui::ComboBox* dataFormat() const { return m_dataFormat; }
    ui::CheckBox* listLayers() const { return m_listLayers; }
    ui::CheckBox* listTags() const { return m_listTags; }
    ui::CheckBox* listSlices() const { return m_listSlices; }
    ui::Grid* dataFormatsPlaceholder() const { return m_dataFormatsPlaceholder; }
    ui::Entry* dataFilenameFormat() const { return m_dataFilenameFormat; }
    ui::Entry* dataTagnameFormat() const { return m_dataTagnameFormat; }
    ui::CheckBox* openGenerated() const { return m_openGenerated; }
    ui::CheckBox* preview() const { return m_preview; }
    ui::Button* exportButton() const { return m_exportButton; }

  private:
    app::ButtonSet* m_sectionTabs;
    app::ButtonSet::Item* m_sectionLayoutTab;
    app::ButtonSet::Item* m_sectionSpriteTab;
    app::ButtonSet::Item* m_sectionBordersTab;
    app::ButtonSet::Item* m_sectionOutputTab;
    ui::Button* m_expandSections;
    ui::Panel* m_panel;
    ui::Grid* m_sectionLayout;
    ui::ComboBox* m_sheetType;
    ui::ComboBox* m_constraintType;
    app::ExprEntry* m_widthConstraint;
    app::ExprEntry* m_heightConstraint;
    ui::CheckBox* m_mergeDups;
    ui::CheckBox* m_ignoreEmpty;
    ui::HBox* m_sectionSpriteSeparator;
    ui::Button* m_closeSpriteSection;
    ui::Grid* m_sectionSprite;
    ui::ComboBox* m_source;
    ui::ComboBox* m_layers;
    ui::CheckBox* m_splitLayers;
    ui::ComboBox* m_frames;
    ui::CheckBox* m_splitTags;
    ui::HBox* m_sectionBordersSeparator;
    ui::Button* m_closeBordersSection;
    ui::Grid* m_sectionBorders;
    app::ExprEntry* m_borderPadding;
    app::ExprEntry* m_shapePadding;
    app::ExprEntry* m_innerPadding;
    ui::CheckBox* m_trimSpriteEnabled;
    ui::CheckBox* m_trimEnabled;
    ui::VBox* m_trimContainer;
    ui::CheckBox* m_gridTrimEnabled;
    ui::CheckBox* m_extrudeEnabled;
    ui::HBox* m_sectionOutputSeparator;
    ui::Button* m_closeOutputSection;
    ui::Grid* m_sectionOutput;
    ui::CheckBox* m_imageEnabled;
    ui::Button* m_imageFilename;
    ui::CheckBox* m_dataEnabled;
    ui::Button* m_dataFilename;
    ui::HBox* m_dataMeta;
    ui::ComboBox* m_dataFormat;
    ui::CheckBox* m_listLayers;
    ui::CheckBox* m_listTags;
    ui::CheckBox* m_listSlices;
    ui::Grid* m_dataFormatsPlaceholder;
    ui::Entry* m_dataFilenameFormat;
    ui::Entry* m_dataTagnameFormat;
    ui::CheckBox* m_openGenerated;
    ui::CheckBox* m_preview;
    ui::Button* m_exportButton;
  };

} // namespace gen
} // namespace app

#endif
