// Don't modify, generated file from C:/aseprite/data/widgets/home_view.xml

#ifndef GENERATED_HOME_VIEW_H_INCLUDED
#define GENERATED_HOME_VIEW_H_INCLUDED
#pragma once

#include "app/find_widget.h"
#include "app/load_widget.h"
#include "ui/box.h"
#include "ui/button.h"
#include "ui/link_label.h"
#include "ui/view.h"

namespace app {
namespace gen {

  class HomeView : public ui::VBox {
  public:
    HomeView() {
      app::load_widget("home_view.xml", "home_view", this);
      app::finder(this)
        >> "header_placeholder" >> m_headerPlaceholder
        >> "aseprite_face" >> m_asepriteFace
        >> "new_file" >> m_newFile
        >> "open_file" >> m_openFile
        >> "recover_sprites" >> m_recoverSprites
        >> "share_crashdb" >> m_shareCrashdb
        >> "check_update" >> m_checkUpdate
        >> "files_placeholder" >> m_filesPlaceholder
        >> "files_view" >> m_filesView
        >> "folders_placeholder" >> m_foldersPlaceholder
        >> "folders_view" >> m_foldersView
        >> "news_placeholder" >> m_newsPlaceholder
        >> "news_view" >> m_newsView
      ;
    }

    ui::HBox* headerPlaceholder() const { return m_headerPlaceholder; }
    ui::LinkLabel* asepriteFace() const { return m_asepriteFace; }
    ui::LinkLabel* newFile() const { return m_newFile; }
    ui::LinkLabel* openFile() const { return m_openFile; }
    ui::LinkLabel* recoverSprites() const { return m_recoverSprites; }
    ui::CheckBox* shareCrashdb() const { return m_shareCrashdb; }
    ui::LinkLabel* checkUpdate() const { return m_checkUpdate; }
    ui::VBox* filesPlaceholder() const { return m_filesPlaceholder; }
    ui::View* filesView() const { return m_filesView; }
    ui::VBox* foldersPlaceholder() const { return m_foldersPlaceholder; }
    ui::View* foldersView() const { return m_foldersView; }
    ui::VBox* newsPlaceholder() const { return m_newsPlaceholder; }
    ui::View* newsView() const { return m_newsView; }

  private:
    ui::HBox* m_headerPlaceholder;
    ui::LinkLabel* m_asepriteFace;
    ui::LinkLabel* m_newFile;
    ui::LinkLabel* m_openFile;
    ui::LinkLabel* m_recoverSprites;
    ui::CheckBox* m_shareCrashdb;
    ui::LinkLabel* m_checkUpdate;
    ui::VBox* m_filesPlaceholder;
    ui::View* m_filesView;
    ui::VBox* m_foldersPlaceholder;
    ui::View* m_foldersView;
    ui::VBox* m_newsPlaceholder;
    ui::View* m_newsView;
  };

} // namespace gen
} // namespace app

#endif
