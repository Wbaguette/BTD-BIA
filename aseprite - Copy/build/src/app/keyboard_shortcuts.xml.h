// Don't modify, generated file from C:/aseprite/data/widgets/keyboard_shortcuts.xml

#ifndef GENERATED_KEYBOARD_SHORTCUTS_H_INCLUDED
#define GENERATED_KEYBOARD_SHORTCUTS_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "app/ui/button_set.h"
#include "app/ui/pref_widget.h"
#include "app/ui/search_entry.h"
#include "ui/box.h"
#include "ui/button.h"
#include "ui/listbox.h"
#include "ui/slider.h"
#include "ui/splitter.h"
#include "ui/view.h"
#include "ui/window.h"

namespace app {
namespace gen {

  class KeyboardShortcuts : public ui::Window {
  public:
    KeyboardShortcuts() : ui::Window(ui::Window::WithTitleBar) {
      app::load_widget("keyboard_shortcuts.xml", "keyboard_shortcuts", this);
      app::finder(this)
        >> "section_splitter" >> m_sectionSplitter
        >> "search" >> m_search
        >> "section" >> m_section
        >> "import_button" >> m_importButton
        >> "export_button" >> m_exportButton
        >> "reset_button" >> m_resetButton
        >> "lists_placeholder" >> m_listsPlaceholder
        >> "search_view" >> m_searchView
        >> "search_list" >> m_searchList
        >> "menus_view" >> m_menusView
        >> "menus" >> m_menus
        >> "commands_view" >> m_commandsView
        >> "commands" >> m_commands
        >> "tools_view" >> m_toolsView
        >> "tools" >> m_tools
        >> "actions_view" >> m_actionsView
        >> "actions" >> m_actions
        >> "wheel_section" >> m_wheelSection
        >> "wheel_behavior" >> m_wheelBehavior
        >> "wheel_zoom" >> m_wheelZoom
        >> "slide_zoom" >> m_slideZoom
        >> "invert_brush_size_scroll" >> m_invertBrushSizeScroll
        >> "wheel_actions" >> m_wheelActions
        >> "drag_section" >> m_dragSection
        >> "drag_actions" >> m_dragActions
        >> "drag_angle" >> m_dragAngle
        >> "drag_distance" >> m_dragDistance
        >> "ok" >> m_ok
      ;
    }

    ui::Splitter* sectionSplitter() const { return m_sectionSplitter; }
    app::SearchEntry* search() const { return m_search; }
    ui::ListBox* section() const { return m_section; }
    ui::Button* importButton() const { return m_importButton; }
    ui::Button* exportButton() const { return m_exportButton; }
    ui::Button* resetButton() const { return m_resetButton; }
    ui::VBox* listsPlaceholder() const { return m_listsPlaceholder; }
    ui::View* searchView() const { return m_searchView; }
    ui::ListBox* searchList() const { return m_searchList; }
    ui::View* menusView() const { return m_menusView; }
    ui::ListBox* menus() const { return m_menus; }
    ui::View* commandsView() const { return m_commandsView; }
    ui::ListBox* commands() const { return m_commands; }
    ui::View* toolsView() const { return m_toolsView; }
    ui::ListBox* tools() const { return m_tools; }
    ui::View* actionsView() const { return m_actionsView; }
    ui::ListBox* actions() const { return m_actions; }
    ui::VBox* wheelSection() const { return m_wheelSection; }
    app::ButtonSet* wheelBehavior() const { return m_wheelBehavior; }
    BoolPrefWidget<ui::CheckBox>* wheelZoom() const { return m_wheelZoom; }
    BoolPrefWidget<ui::CheckBox>* slideZoom() const { return m_slideZoom; }
    BoolPrefWidget<ui::CheckBox>* invertBrushSizeScroll() const { return m_invertBrushSizeScroll; }
    ui::ListBox* wheelActions() const { return m_wheelActions; }
    ui::VBox* dragSection() const { return m_dragSection; }
    ui::ListBox* dragActions() const { return m_dragActions; }
    app::ButtonSet* dragAngle() const { return m_dragAngle; }
    ui::Slider* dragDistance() const { return m_dragDistance; }
    ui::Button* ok() const { return m_ok; }

  private:
    ui::Splitter* m_sectionSplitter;
    app::SearchEntry* m_search;
    ui::ListBox* m_section;
    ui::Button* m_importButton;
    ui::Button* m_exportButton;
    ui::Button* m_resetButton;
    ui::VBox* m_listsPlaceholder;
    ui::View* m_searchView;
    ui::ListBox* m_searchList;
    ui::View* m_menusView;
    ui::ListBox* m_menus;
    ui::View* m_commandsView;
    ui::ListBox* m_commands;
    ui::View* m_toolsView;
    ui::ListBox* m_tools;
    ui::View* m_actionsView;
    ui::ListBox* m_actions;
    ui::VBox* m_wheelSection;
    app::ButtonSet* m_wheelBehavior;
    BoolPrefWidget<ui::CheckBox>* m_wheelZoom;
    BoolPrefWidget<ui::CheckBox>* m_slideZoom;
    BoolPrefWidget<ui::CheckBox>* m_invertBrushSizeScroll;
    ui::ListBox* m_wheelActions;
    ui::VBox* m_dragSection;
    ui::ListBox* m_dragActions;
    app::ButtonSet* m_dragAngle;
    ui::Slider* m_dragDistance;
    ui::Button* m_ok;
  };

} // namespace gen
} // namespace app

#endif
