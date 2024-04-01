// Don't modify, generated file from C:/aseprite/data/pref.xml

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "app/pref/option_io.h"
#include "app/pref/preferences.h"

#include <cstring>

namespace app {
namespace gen {

GlobalPref::GlobalPref(const std::string& name)
  : Section(name)
  , general(name)
  , undo(name)
  , editor(name)
  , cels(name)
  , layers(name)
  , sprite(name)
  , tags(name)
  , timeline(name)
  , cursor(name)
  , preview(name)
  , theme(name)
  , tablet(name)
  , experimental(name)
  , news(name)
  , statusBar(name)
  , colorBar(name)
  , updater(name)
  , brush(name)
  , saveBrush(name)
  , selection(name)
  , quantization(name)
  , eyedropper(name)
  , shared(name)
  , newFile(name)
  , fileSelector(name)
  , textTool(name)
  , symmetryMode(name)
  , perf(name)
  , guides(name)
  , slices(name)
  , advancedMode(name)
  , openFile(name)
  , saveFile(name)
  , exportFile(name)
  , spriteSheet(name)
  , gif(name)
  , jpeg(name)
  , svg(name)
  , tga(name)
  , css(name)
  , webp(name)
  , hueSaturation(name)
  , filters(name)
  , scripts(name)
  , color(name)
  , range(name)
  , canvasSize(name)
  , tileset(name)
  , tilemap(name)
{
}

void GlobalPref::load()
{
  general.load();
  undo.load();
  editor.load();
  cels.load();
  layers.load();
  sprite.load();
  tags.load();
  timeline.load();
  cursor.load();
  preview.load();
  theme.load();
  tablet.load();
  experimental.load();
  news.load();
  statusBar.load();
  colorBar.load();
  updater.load();
  brush.load();
  saveBrush.load();
  selection.load();
  quantization.load();
  eyedropper.load();
  shared.load();
  newFile.load();
  fileSelector.load();
  textTool.load();
  symmetryMode.load();
  perf.load();
  guides.load();
  slices.load();
  advancedMode.load();
  openFile.load();
  saveFile.load();
  exportFile.load();
  spriteSheet.load();
  gif.load();
  jpeg.load();
  svg.load();
  tga.load();
  css.load();
  webp.load();
  hueSaturation.load();
  filters.load();
  scripts.load();
  color.load();
  range.load();
  canvasSize.load();
  tileset.load();
  tilemap.load();
}

void GlobalPref::save()
{
  general.save();
  undo.save();
  editor.save();
  cels.save();
  layers.save();
  sprite.save();
  tags.save();
  timeline.save();
  cursor.save();
  preview.save();
  theme.save();
  tablet.save();
  experimental.save();
  news.save();
  statusBar.save();
  colorBar.save();
  updater.save();
  brush.save();
  saveBrush.save();
  selection.save();
  quantization.save();
  eyedropper.save();
  shared.save();
  newFile.save();
  fileSelector.save();
  textTool.save();
  symmetryMode.save();
  perf.save();
  guides.save();
  slices.save();
  advancedMode.save();
  openFile.save();
  saveFile.save();
  exportFile.save();
  spriteSheet.save();
  gif.save();
  jpeg.save();
  svg.save();
  tga.save();
  css.save();
  webp.save();
  hueSaturation.save();
  filters.save();
  scripts.save();
  color.save();
  range.save();
  canvasSize.save();
  tileset.save();
  tilemap.save();
}

Section* GlobalPref::section(const char* id)
{
  if (std::strcmp(id, general.name()) == 0) return &general;
  if (std::strcmp(id, undo.name()) == 0) return &undo;
  if (std::strcmp(id, editor.name()) == 0) return &editor;
  if (std::strcmp(id, cels.name()) == 0) return &cels;
  if (std::strcmp(id, layers.name()) == 0) return &layers;
  if (std::strcmp(id, sprite.name()) == 0) return &sprite;
  if (std::strcmp(id, tags.name()) == 0) return &tags;
  if (std::strcmp(id, timeline.name()) == 0) return &timeline;
  if (std::strcmp(id, cursor.name()) == 0) return &cursor;
  if (std::strcmp(id, preview.name()) == 0) return &preview;
  if (std::strcmp(id, theme.name()) == 0) return &theme;
  if (std::strcmp(id, tablet.name()) == 0) return &tablet;
  if (std::strcmp(id, experimental.name()) == 0) return &experimental;
  if (std::strcmp(id, news.name()) == 0) return &news;
  if (std::strcmp(id, statusBar.name()) == 0) return &statusBar;
  if (std::strcmp(id, colorBar.name()) == 0) return &colorBar;
  if (std::strcmp(id, updater.name()) == 0) return &updater;
  if (std::strcmp(id, brush.name()) == 0) return &brush;
  if (std::strcmp(id, saveBrush.name()) == 0) return &saveBrush;
  if (std::strcmp(id, selection.name()) == 0) return &selection;
  if (std::strcmp(id, quantization.name()) == 0) return &quantization;
  if (std::strcmp(id, eyedropper.name()) == 0) return &eyedropper;
  if (std::strcmp(id, shared.name()) == 0) return &shared;
  if (std::strcmp(id, newFile.name()) == 0) return &newFile;
  if (std::strcmp(id, fileSelector.name()) == 0) return &fileSelector;
  if (std::strcmp(id, textTool.name()) == 0) return &textTool;
  if (std::strcmp(id, symmetryMode.name()) == 0) return &symmetryMode;
  if (std::strcmp(id, perf.name()) == 0) return &perf;
  if (std::strcmp(id, guides.name()) == 0) return &guides;
  if (std::strcmp(id, slices.name()) == 0) return &slices;
  if (std::strcmp(id, advancedMode.name()) == 0) return &advancedMode;
  if (std::strcmp(id, openFile.name()) == 0) return &openFile;
  if (std::strcmp(id, saveFile.name()) == 0) return &saveFile;
  if (std::strcmp(id, exportFile.name()) == 0) return &exportFile;
  if (std::strcmp(id, spriteSheet.name()) == 0) return &spriteSheet;
  if (std::strcmp(id, gif.name()) == 0) return &gif;
  if (std::strcmp(id, jpeg.name()) == 0) return &jpeg;
  if (std::strcmp(id, svg.name()) == 0) return &svg;
  if (std::strcmp(id, tga.name()) == 0) return &tga;
  if (std::strcmp(id, css.name()) == 0) return &css;
  if (std::strcmp(id, webp.name()) == 0) return &webp;
  if (std::strcmp(id, hueSaturation.name()) == 0) return &hueSaturation;
  if (std::strcmp(id, filters.name()) == 0) return &filters;
  if (std::strcmp(id, scripts.name()) == 0) return &scripts;
  if (std::strcmp(id, color.name()) == 0) return &color;
  if (std::strcmp(id, range.name()) == 0) return &range;
  if (std::strcmp(id, canvasSize.name()) == 0) return &canvasSize;
  if (std::strcmp(id, tileset.name()) == 0) return &tileset;
  if (std::strcmp(id, tilemap.name()) == 0) return &tilemap;
  return nullptr;
}

OptionBase* GlobalPref::option(const char* id)
{
  return nullptr;
}

GlobalPref::General::General(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "general")
  , language(this, "language", "en")
  , screenScale(this, "screen_scale", 0)
  , uiScale(this, "ui_scale", 1)
  , gpuAcceleration(this, "gpu_acceleration", false)
  , showHome(this, "show_home", true)
  , visibleTimeline(this, "visible_timeline", false)
  , autoshowTimeline(this, "autoshow_timeline", true)
  , rewindOnStop(this, "rewind_on_stop", false)
  , expandMenubarOnMouseover(this, "expand_menubar_on_mouseover", false)
  , dataRecovery(this, "data_recovery", true)
  , dataRecoveryPeriod(this, "data_recovery_period", 2.0)
  , keepEditedSpriteData(this, "keep_edited_sprite_data", true)
  , keepEditedSpriteDataFor(this, "keep_edited_sprite_data_for", 7)
  , keepClosedSpriteOnMemory(this, "keep_closed_sprite_on_memory", true)
  , keepClosedSpriteOnMemoryFor(this, "keep_closed_sprite_on_memory_for", 15.0)
  , showFullPath(this, "show_full_path", true)
  , timelinePosition(this, "timeline_position", TimelinePosition::BOTTOM)
  , timelineLayerPanelWidth(this, "timeline_layer_panel_width", 100)
  , showMenuBar(this, "show_menu_bar", true)
  , recentItems(this, "recent_items", 16)
  , osxAsyncView(this, "osx_async_view", true)
  , x11StylusId(this, "x11_stylus_id")
{
}

void GlobalPref::General::load()
{
  load_option(language);
  load_option(screenScale);
  load_option(uiScale);
  load_option(gpuAcceleration);
  load_option(showHome);
  load_option(visibleTimeline);
  load_option(autoshowTimeline);
  load_option(rewindOnStop);
  load_option(expandMenubarOnMouseover);
  load_option(dataRecovery);
  load_option(dataRecoveryPeriod);
  load_option(keepEditedSpriteData);
  load_option(keepEditedSpriteDataFor);
  load_option(keepClosedSpriteOnMemory);
  load_option(keepClosedSpriteOnMemoryFor);
  load_option(showFullPath);
  load_option(timelinePosition);
  load_option(timelineLayerPanelWidth);
  load_option(showMenuBar);
  load_option(recentItems);
  load_option(osxAsyncView);
  load_option(x11StylusId);
}

void GlobalPref::General::save()
{
  save_option(language);
  save_option(screenScale);
  save_option(uiScale);
  save_option(gpuAcceleration);
  save_option(showHome);
  save_option(visibleTimeline);
  save_option(autoshowTimeline);
  save_option(rewindOnStop);
  save_option(expandMenubarOnMouseover);
  save_option(dataRecovery);
  save_option(dataRecoveryPeriod);
  save_option(keepEditedSpriteData);
  save_option(keepEditedSpriteDataFor);
  save_option(keepClosedSpriteOnMemory);
  save_option(keepClosedSpriteOnMemoryFor);
  save_option(showFullPath);
  save_option(timelinePosition);
  save_option(timelineLayerPanelWidth);
  save_option(showMenuBar);
  save_option(recentItems);
  save_option(osxAsyncView);
  save_option(x11StylusId);
}

Section* GlobalPref::General::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::General::option(const char* id)
{
  if (std::strcmp(id, language.id()) == 0) return &language;
  if (std::strcmp(id, screenScale.id()) == 0) return &screenScale;
  if (std::strcmp(id, uiScale.id()) == 0) return &uiScale;
  if (std::strcmp(id, gpuAcceleration.id()) == 0) return &gpuAcceleration;
  if (std::strcmp(id, showHome.id()) == 0) return &showHome;
  if (std::strcmp(id, visibleTimeline.id()) == 0) return &visibleTimeline;
  if (std::strcmp(id, autoshowTimeline.id()) == 0) return &autoshowTimeline;
  if (std::strcmp(id, rewindOnStop.id()) == 0) return &rewindOnStop;
  if (std::strcmp(id, expandMenubarOnMouseover.id()) == 0) return &expandMenubarOnMouseover;
  if (std::strcmp(id, dataRecovery.id()) == 0) return &dataRecovery;
  if (std::strcmp(id, dataRecoveryPeriod.id()) == 0) return &dataRecoveryPeriod;
  if (std::strcmp(id, keepEditedSpriteData.id()) == 0) return &keepEditedSpriteData;
  if (std::strcmp(id, keepEditedSpriteDataFor.id()) == 0) return &keepEditedSpriteDataFor;
  if (std::strcmp(id, keepClosedSpriteOnMemory.id()) == 0) return &keepClosedSpriteOnMemory;
  if (std::strcmp(id, keepClosedSpriteOnMemoryFor.id()) == 0) return &keepClosedSpriteOnMemoryFor;
  if (std::strcmp(id, showFullPath.id()) == 0) return &showFullPath;
  if (std::strcmp(id, timelinePosition.id()) == 0) return &timelinePosition;
  if (std::strcmp(id, timelineLayerPanelWidth.id()) == 0) return &timelineLayerPanelWidth;
  if (std::strcmp(id, showMenuBar.id()) == 0) return &showMenuBar;
  if (std::strcmp(id, recentItems.id()) == 0) return &recentItems;
  if (std::strcmp(id, osxAsyncView.id()) == 0) return &osxAsyncView;
  if (std::strcmp(id, x11StylusId.id()) == 0) return &x11StylusId;
  return nullptr;
}

GlobalPref::Undo::Undo(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "undo")
  , sizeLimit(this, "size_limit", 0)
  , gotoModified(this, "goto_modified", true)
  , allowNonlinearHistory(this, "allow_nonlinear_history", false)
  , showTooltip(this, "show_tooltip", true)
{
}

void GlobalPref::Undo::load()
{
  load_option(sizeLimit);
  load_option(gotoModified);
  load_option(allowNonlinearHistory);
  load_option(showTooltip);
}

void GlobalPref::Undo::save()
{
  save_option(sizeLimit);
  save_option(gotoModified);
  save_option(allowNonlinearHistory);
  save_option(showTooltip);
}

Section* GlobalPref::Undo::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Undo::option(const char* id)
{
  if (std::strcmp(id, sizeLimit.id()) == 0) return &sizeLimit;
  if (std::strcmp(id, gotoModified.id()) == 0) return &gotoModified;
  if (std::strcmp(id, allowNonlinearHistory.id()) == 0) return &allowNonlinearHistory;
  if (std::strcmp(id, showTooltip.id()) == 0) return &showTooltip;
  return nullptr;
}

GlobalPref::Editor::Editor(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "editor")
  , zoomWithWheel(this, "zoom_with_wheel", true)
  , zoomWithSlide(this, "zoom_with_slide", false)
  , zoomFromCenterWithWheel(this, "zoom_from_center_with_wheel", false)
  , zoomFromCenterWithKeys(this, "zoom_from_center_with_keys", false)
  , invertBrushSizeWheel(this, "invert_brush_size_wheel", false)
  , showScrollbars(this, "show_scrollbars", true)
  , autoScroll(this, "auto_scroll", true)
  , rightClickMode(this, "right_click_mode", RightClickMode::PAINT_BGCOLOR)
  , autoSelectLayer(this, "auto_select_layer", false)
  , autoSelectLayerQuick(this, "auto_select_layer_quick", true)
  , straightLinePreview(this, "straight_line_preview", true)
  , playOnce(this, "play_once", false)
  , playAll(this, "play_all", false)
  , playSubtags(this, "play_subtags", true)
  , autoFit(this, "auto_fit", false)
  , downsampling(this, "downsampling", Downsampling::BILINEAR_MIPMAP)
{
}

void GlobalPref::Editor::load()
{
  load_option(zoomWithWheel);
  load_option(zoomWithSlide);
  load_option(zoomFromCenterWithWheel);
  load_option(zoomFromCenterWithKeys);
  load_option(invertBrushSizeWheel);
  load_option(showScrollbars);
  load_option(autoScroll);
  load_option(rightClickMode);
  load_option(autoSelectLayer);
  load_option(autoSelectLayerQuick);
  load_option(straightLinePreview);
  load_option(playOnce);
  load_option(playAll);
  load_option(playSubtags);
  load_option(autoFit);
  load_option(downsampling);
}

void GlobalPref::Editor::save()
{
  save_option(zoomWithWheel);
  save_option(zoomWithSlide);
  save_option(zoomFromCenterWithWheel);
  save_option(zoomFromCenterWithKeys);
  save_option(invertBrushSizeWheel);
  save_option(showScrollbars);
  save_option(autoScroll);
  save_option(rightClickMode);
  save_option(autoSelectLayer);
  save_option(autoSelectLayerQuick);
  save_option(straightLinePreview);
  save_option(playOnce);
  save_option(playAll);
  save_option(playSubtags);
  save_option(autoFit);
  save_option(downsampling);
}

Section* GlobalPref::Editor::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Editor::option(const char* id)
{
  if (std::strcmp(id, zoomWithWheel.id()) == 0) return &zoomWithWheel;
  if (std::strcmp(id, zoomWithSlide.id()) == 0) return &zoomWithSlide;
  if (std::strcmp(id, zoomFromCenterWithWheel.id()) == 0) return &zoomFromCenterWithWheel;
  if (std::strcmp(id, zoomFromCenterWithKeys.id()) == 0) return &zoomFromCenterWithKeys;
  if (std::strcmp(id, invertBrushSizeWheel.id()) == 0) return &invertBrushSizeWheel;
  if (std::strcmp(id, showScrollbars.id()) == 0) return &showScrollbars;
  if (std::strcmp(id, autoScroll.id()) == 0) return &autoScroll;
  if (std::strcmp(id, rightClickMode.id()) == 0) return &rightClickMode;
  if (std::strcmp(id, autoSelectLayer.id()) == 0) return &autoSelectLayer;
  if (std::strcmp(id, autoSelectLayerQuick.id()) == 0) return &autoSelectLayerQuick;
  if (std::strcmp(id, straightLinePreview.id()) == 0) return &straightLinePreview;
  if (std::strcmp(id, playOnce.id()) == 0) return &playOnce;
  if (std::strcmp(id, playAll.id()) == 0) return &playAll;
  if (std::strcmp(id, playSubtags.id()) == 0) return &playSubtags;
  if (std::strcmp(id, autoFit.id()) == 0) return &autoFit;
  if (std::strcmp(id, downsampling.id()) == 0) return &downsampling;
  return nullptr;
}

GlobalPref::Cels::Cels(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "cels")
  , userDataVisibility(this, "user_data_visibility", false)
{
}

void GlobalPref::Cels::load()
{
  load_option(userDataVisibility);
}

void GlobalPref::Cels::save()
{
  save_option(userDataVisibility);
}

Section* GlobalPref::Cels::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Cels::option(const char* id)
{
  if (std::strcmp(id, userDataVisibility.id()) == 0) return &userDataVisibility;
  return nullptr;
}

GlobalPref::Layers::Layers(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "layers")
  , userDataVisibility(this, "user_data_visibility", false)
{
}

void GlobalPref::Layers::load()
{
  load_option(userDataVisibility);
}

void GlobalPref::Layers::save()
{
  save_option(userDataVisibility);
}

Section* GlobalPref::Layers::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Layers::option(const char* id)
{
  if (std::strcmp(id, userDataVisibility.id()) == 0) return &userDataVisibility;
  return nullptr;
}

GlobalPref::Sprite::Sprite(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "sprite")
  , userDataVisibility(this, "user_data_visibility", false)
{
}

void GlobalPref::Sprite::load()
{
  load_option(userDataVisibility);
}

void GlobalPref::Sprite::save()
{
  save_option(userDataVisibility);
}

Section* GlobalPref::Sprite::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Sprite::option(const char* id)
{
  if (std::strcmp(id, userDataVisibility.id()) == 0) return &userDataVisibility;
  return nullptr;
}

GlobalPref::Tags::Tags(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "tags")
  , userDataVisibility(this, "user_data_visibility", false)
{
}

void GlobalPref::Tags::load()
{
  load_option(userDataVisibility);
}

void GlobalPref::Tags::save()
{
  save_option(userDataVisibility);
}

Section* GlobalPref::Tags::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Tags::option(const char* id)
{
  if (std::strcmp(id, userDataVisibility.id()) == 0) return &userDataVisibility;
  return nullptr;
}

GlobalPref::Timeline::Timeline(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "timeline")
  , keepSelection(this, "keep_selection", false)
  , selectOnClick(this, "select_on_click", true)
  , selectOnClickWithKey(this, "select_on_click_with_key", true)
  , selectOnDrag(this, "select_on_drag", true)
  , dragAndDropFromEdges(this, "drag_and_drop_from_edges", true)
{
}

void GlobalPref::Timeline::load()
{
  load_option(keepSelection);
  load_option(selectOnClick);
  load_option(selectOnClickWithKey);
  load_option(selectOnDrag);
  load_option(dragAndDropFromEdges);
}

void GlobalPref::Timeline::save()
{
  save_option(keepSelection);
  save_option(selectOnClick);
  save_option(selectOnClickWithKey);
  save_option(selectOnDrag);
  save_option(dragAndDropFromEdges);
}

Section* GlobalPref::Timeline::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Timeline::option(const char* id)
{
  if (std::strcmp(id, keepSelection.id()) == 0) return &keepSelection;
  if (std::strcmp(id, selectOnClick.id()) == 0) return &selectOnClick;
  if (std::strcmp(id, selectOnClickWithKey.id()) == 0) return &selectOnClickWithKey;
  if (std::strcmp(id, selectOnDrag.id()) == 0) return &selectOnDrag;
  if (std::strcmp(id, dragAndDropFromEdges.id()) == 0) return &dragAndDropFromEdges;
  return nullptr;
}

GlobalPref::Cursor::Cursor(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "cursor")
  , useNativeCursor(this, "use_native_cursor", false)
  , cursorScale(this, "cursor_scale", 1)
  , cursorColor(this, "cursor_color", app::Color::fromMask())
  , paintingCursorType(this, "painting_cursor_type", PaintingCursorType::CROSSHAIR_ON_SPRITE)
  , brushPreview(this, "brush_preview", BrushPreview::FULL)
  , snapToGrid(this, "snap_to_grid", false)
{
}

void GlobalPref::Cursor::load()
{
  load_option(useNativeCursor);
  load_option(cursorScale);
  load_option(cursorColor);
  load_option(paintingCursorType);
  load_option(brushPreview);
  load_option(snapToGrid);
}

void GlobalPref::Cursor::save()
{
  save_option(useNativeCursor);
  save_option(cursorScale);
  save_option(cursorColor);
  save_option(paintingCursorType);
  save_option(brushPreview);
  save_option(snapToGrid);
}

Section* GlobalPref::Cursor::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Cursor::option(const char* id)
{
  if (std::strcmp(id, useNativeCursor.id()) == 0) return &useNativeCursor;
  if (std::strcmp(id, cursorScale.id()) == 0) return &cursorScale;
  if (std::strcmp(id, cursorColor.id()) == 0) return &cursorColor;
  if (std::strcmp(id, paintingCursorType.id()) == 0) return &paintingCursorType;
  if (std::strcmp(id, brushPreview.id()) == 0) return &brushPreview;
  if (std::strcmp(id, snapToGrid.id()) == 0) return &snapToGrid;
  return nullptr;
}

GlobalPref::Preview::Preview(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "preview")
  , playOnce(this, "play_once", false)
  , playAll(this, "play_all", false)
  , playSubtags(this, "play_subtags", true)
{
}

void GlobalPref::Preview::load()
{
  load_option(playOnce);
  load_option(playAll);
  load_option(playSubtags);
}

void GlobalPref::Preview::save()
{
  save_option(playOnce);
  save_option(playAll);
  save_option(playSubtags);
}

Section* GlobalPref::Preview::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Preview::option(const char* id)
{
  if (std::strcmp(id, playOnce.id()) == 0) return &playOnce;
  if (std::strcmp(id, playAll.id()) == 0) return &playAll;
  if (std::strcmp(id, playSubtags.id()) == 0) return &playSubtags;
  return nullptr;
}

GlobalPref::Theme::Theme(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "theme")
  , selected(this, "selected", "default")
  , font(this, "font")
  , miniFont(this, "mini_font")
{
}

void GlobalPref::Theme::load()
{
  load_option(selected);
  load_option(font);
  load_option(miniFont);
}

void GlobalPref::Theme::save()
{
  save_option(selected);
  save_option(font);
  save_option(miniFont);
}

Section* GlobalPref::Theme::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Theme::option(const char* id)
{
  if (std::strcmp(id, selected.id()) == 0) return &selected;
  if (std::strcmp(id, font.id()) == 0) return &font;
  if (std::strcmp(id, miniFont.id()) == 0) return &miniFont;
  return nullptr;
}

GlobalPref::Tablet::Tablet(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "tablet")
  , api(this, "api")
{
}

void GlobalPref::Tablet::load()
{
  load_option(api);
}

void GlobalPref::Tablet::save()
{
  save_option(api);
}

Section* GlobalPref::Tablet::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Tablet::option(const char* id)
{
  if (std::strcmp(id, api.id()) == 0) return &api;
  return nullptr;
}

GlobalPref::Experimental::Experimental(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "experimental")
  , multipleWindows(this, "multiple_windows", false)
  , newRenderEngine(this, "new_render_engine", true)
  , newBlend(this, "new_blend", true)
  , useNativeClipboard(this, "use_native_clipboard", true)
  , useNativeFileDialog(this, "use_native_file_dialog", true)
  , useShadersForColorSelectors(this, "use_shaders_for_color_selectors", true)
  , hueWithSatValueForColorSelector(this, "hue_with_sat_value_for_color_selector", false)
  , oneFingerAsMouseMovement(this, "one_finger_as_mouse_movement", true)
  , loadWintabDriver(this, "load_wintab_driver", false)
  , flashLayer(this, "flash_layer", false)
  , nonactiveLayersOpacity(this, "nonactive_layers_opacity", 255)
  , nonactiveLayersOpacityPreview(this, "nonactive_layers_opacity_preview", 255)
{
}

void GlobalPref::Experimental::load()
{
  load_option(multipleWindows);
  load_option(newRenderEngine);
  load_option(newBlend);
  load_option(useNativeClipboard);
  load_option(useNativeFileDialog);
  load_option(useShadersForColorSelectors);
  load_option(hueWithSatValueForColorSelector);
  load_option(oneFingerAsMouseMovement);
  load_option(loadWintabDriver);
  load_option(flashLayer);
  load_option(nonactiveLayersOpacity);
  load_option(nonactiveLayersOpacityPreview);
}

void GlobalPref::Experimental::save()
{
  save_option(multipleWindows);
  save_option(newRenderEngine);
  save_option(newBlend);
  save_option(useNativeClipboard);
  save_option(useNativeFileDialog);
  save_option(useShadersForColorSelectors);
  save_option(hueWithSatValueForColorSelector);
  save_option(oneFingerAsMouseMovement);
  save_option(loadWintabDriver);
  save_option(flashLayer);
  save_option(nonactiveLayersOpacity);
  save_option(nonactiveLayersOpacityPreview);
}

Section* GlobalPref::Experimental::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Experimental::option(const char* id)
{
  if (std::strcmp(id, multipleWindows.id()) == 0) return &multipleWindows;
  if (std::strcmp(id, newRenderEngine.id()) == 0) return &newRenderEngine;
  if (std::strcmp(id, newBlend.id()) == 0) return &newBlend;
  if (std::strcmp(id, useNativeClipboard.id()) == 0) return &useNativeClipboard;
  if (std::strcmp(id, useNativeFileDialog.id()) == 0) return &useNativeFileDialog;
  if (std::strcmp(id, useShadersForColorSelectors.id()) == 0) return &useShadersForColorSelectors;
  if (std::strcmp(id, hueWithSatValueForColorSelector.id()) == 0) return &hueWithSatValueForColorSelector;
  if (std::strcmp(id, oneFingerAsMouseMovement.id()) == 0) return &oneFingerAsMouseMovement;
  if (std::strcmp(id, loadWintabDriver.id()) == 0) return &loadWintabDriver;
  if (std::strcmp(id, flashLayer.id()) == 0) return &flashLayer;
  if (std::strcmp(id, nonactiveLayersOpacity.id()) == 0) return &nonactiveLayersOpacity;
  if (std::strcmp(id, nonactiveLayersOpacityPreview.id()) == 0) return &nonactiveLayersOpacityPreview;
  return nullptr;
}

GlobalPref::News::News(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "news")
  , cacheFile(this, "cache_file")
{
}

void GlobalPref::News::load()
{
  load_option(cacheFile);
}

void GlobalPref::News::save()
{
  save_option(cacheFile);
}

Section* GlobalPref::News::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::News::option(const char* id)
{
  if (std::strcmp(id, cacheFile.id()) == 0) return &cacheFile;
  return nullptr;
}

GlobalPref::StatusBar::StatusBar(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "status_bar")
  , focusFrameFieldOnMouseover(this, "focus_frame_field_on_mouseover", false)
{
}

void GlobalPref::StatusBar::load()
{
  load_option(focusFrameFieldOnMouseover);
}

void GlobalPref::StatusBar::save()
{
  save_option(focusFrameFieldOnMouseover);
}

Section* GlobalPref::StatusBar::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::StatusBar::option(const char* id)
{
  if (std::strcmp(id, focusFrameFieldOnMouseover.id()) == 0) return &focusFrameFieldOnMouseover;
  return nullptr;
}

GlobalPref::ColorBar::ColorBar(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "color_bar")
  , boxSize(this, "box_size", 11)
  , tilesBoxSize(this, "tiles_box_size", 16)
  , fgColor(this, "fg_color", app::Color::fromRgb(255, 255, 255))
  , bgColor(this, "bg_color", app::Color::fromRgb(0, 0, 0))
  , fgTile(this, "fg_tile", doc::notile)
  , bgTile(this, "bg_tile", doc::notile)
  , selector(this, "selector", app::ColorBar::ColorSelector::TINT_SHADE_TONE)
  , discreteWheel(this, "discrete_wheel", false)
  , wheelModel(this, "wheel_model", 0)
  , harmony(this, "harmony", 0)
  , showInvalidFgBgColorAlert(this, "show_invalid_fg_bg_color_alert", true)
  , entriesSeparator(this, "entries_separator", true)
  , showColorAndTiles(this, "show_color_and_tiles", true)
  , defaultTilesetMode(this, "default_tileset_mode", app::TilesetMode::Auto)
{
}

void GlobalPref::ColorBar::load()
{
  load_option(boxSize);
  load_option(tilesBoxSize);
  load_option(fgColor);
  load_option(bgColor);
  load_option(fgTile);
  load_option(bgTile);
  load_option(selector);
  load_option(discreteWheel);
  load_option(wheelModel);
  load_option(harmony);
  load_option(showInvalidFgBgColorAlert);
  load_option(entriesSeparator);
  load_option(showColorAndTiles);
  load_option(defaultTilesetMode);
}

void GlobalPref::ColorBar::save()
{
  save_option(boxSize);
  save_option(tilesBoxSize);
  save_option(fgColor);
  save_option(bgColor);
  save_option(fgTile);
  save_option(bgTile);
  save_option(selector);
  save_option(discreteWheel);
  save_option(wheelModel);
  save_option(harmony);
  save_option(showInvalidFgBgColorAlert);
  save_option(entriesSeparator);
  save_option(showColorAndTiles);
  save_option(defaultTilesetMode);
}

Section* GlobalPref::ColorBar::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::ColorBar::option(const char* id)
{
  if (std::strcmp(id, boxSize.id()) == 0) return &boxSize;
  if (std::strcmp(id, tilesBoxSize.id()) == 0) return &tilesBoxSize;
  if (std::strcmp(id, fgColor.id()) == 0) return &fgColor;
  if (std::strcmp(id, bgColor.id()) == 0) return &bgColor;
  if (std::strcmp(id, fgTile.id()) == 0) return &fgTile;
  if (std::strcmp(id, bgTile.id()) == 0) return &bgTile;
  if (std::strcmp(id, selector.id()) == 0) return &selector;
  if (std::strcmp(id, discreteWheel.id()) == 0) return &discreteWheel;
  if (std::strcmp(id, wheelModel.id()) == 0) return &wheelModel;
  if (std::strcmp(id, harmony.id()) == 0) return &harmony;
  if (std::strcmp(id, showInvalidFgBgColorAlert.id()) == 0) return &showInvalidFgBgColorAlert;
  if (std::strcmp(id, entriesSeparator.id()) == 0) return &entriesSeparator;
  if (std::strcmp(id, showColorAndTiles.id()) == 0) return &showColorAndTiles;
  if (std::strcmp(id, defaultTilesetMode.id()) == 0) return &defaultTilesetMode;
  return nullptr;
}

GlobalPref::Updater::Updater(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "updater")
  , inits(this, "inits", 0)
  , exits(this, "exits", 0)
  , isDeveloper(this, "is_developer", false)
  , waitDays(this, "wait_days", 0.0)
  , lastCheck(this, "last_check", 0)
  , uuid(this, "uuid")
  , currentVersion(this, "current_version")
  , newVersion(this, "new_version")
  , newUrl(this, "new_url")
{
}

void GlobalPref::Updater::load()
{
  load_option(inits);
  load_option(exits);
  load_option(isDeveloper);
  load_option(waitDays);
  load_option(lastCheck);
  load_option(uuid);
  load_option(currentVersion);
  load_option(newVersion);
  load_option(newUrl);
}

void GlobalPref::Updater::save()
{
  save_option(inits);
  save_option(exits);
  save_option(isDeveloper);
  save_option(waitDays);
  save_option(lastCheck);
  save_option(uuid);
  save_option(currentVersion);
  save_option(newVersion);
  save_option(newUrl);
}

Section* GlobalPref::Updater::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Updater::option(const char* id)
{
  if (std::strcmp(id, inits.id()) == 0) return &inits;
  if (std::strcmp(id, exits.id()) == 0) return &exits;
  if (std::strcmp(id, isDeveloper.id()) == 0) return &isDeveloper;
  if (std::strcmp(id, waitDays.id()) == 0) return &waitDays;
  if (std::strcmp(id, lastCheck.id()) == 0) return &lastCheck;
  if (std::strcmp(id, uuid.id()) == 0) return &uuid;
  if (std::strcmp(id, currentVersion.id()) == 0) return &currentVersion;
  if (std::strcmp(id, newVersion.id()) == 0) return &newVersion;
  if (std::strcmp(id, newUrl.id()) == 0) return &newUrl;
  return nullptr;
}

GlobalPref::Brush::Brush(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "brush")
  , pattern(this, "pattern", doc::BrushPattern::DEFAULT)
{
}

void GlobalPref::Brush::load()
{
  load_option(pattern);
}

void GlobalPref::Brush::save()
{
  save_option(pattern);
}

Section* GlobalPref::Brush::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Brush::option(const char* id)
{
  if (std::strcmp(id, pattern.id()) == 0) return &pattern;
  return nullptr;
}

GlobalPref::SaveBrush::SaveBrush(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "save_brush")
  , brushType(this, "brush_type", true)
  , brushSize(this, "brush_size", true)
  , brushAngle(this, "brush_angle", true)
  , fgColor(this, "fg_color", false)
  , bgColor(this, "bg_color", false)
  , imageColor(this, "image_color", true)
  , inkType(this, "ink_type", true)
  , inkOpacity(this, "ink_opacity", true)
  , shade(this, "shade", true)
  , pixelPerfect(this, "pixel_perfect", false)
{
}

void GlobalPref::SaveBrush::load()
{
  load_option(brushType);
  load_option(brushSize);
  load_option(brushAngle);
  load_option(fgColor);
  load_option(bgColor);
  load_option(imageColor);
  load_option(inkType);
  load_option(inkOpacity);
  load_option(shade);
  load_option(pixelPerfect);
}

void GlobalPref::SaveBrush::save()
{
  save_option(brushType);
  save_option(brushSize);
  save_option(brushAngle);
  save_option(fgColor);
  save_option(bgColor);
  save_option(imageColor);
  save_option(inkType);
  save_option(inkOpacity);
  save_option(shade);
  save_option(pixelPerfect);
}

Section* GlobalPref::SaveBrush::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::SaveBrush::option(const char* id)
{
  if (std::strcmp(id, brushType.id()) == 0) return &brushType;
  if (std::strcmp(id, brushSize.id()) == 0) return &brushSize;
  if (std::strcmp(id, brushAngle.id()) == 0) return &brushAngle;
  if (std::strcmp(id, fgColor.id()) == 0) return &fgColor;
  if (std::strcmp(id, bgColor.id()) == 0) return &bgColor;
  if (std::strcmp(id, imageColor.id()) == 0) return &imageColor;
  if (std::strcmp(id, inkType.id()) == 0) return &inkType;
  if (std::strcmp(id, inkOpacity.id()) == 0) return &inkOpacity;
  if (std::strcmp(id, shade.id()) == 0) return &shade;
  if (std::strcmp(id, pixelPerfect.id()) == 0) return &pixelPerfect;
  return nullptr;
}

GlobalPref::Selection::Selection(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "selection")
  , mode(this, "mode", SelectionMode::DEFAULT)
  , moveEdges(this, "move_edges", true)
  , modifiersDisableHandles(this, "modifiers_disable_handles", true)
  , moveOnAddMode(this, "move_on_add_mode", true)
  , pivotVisibility(this, "pivot_visibility", false)
  , pivotPosition(this, "pivot_position", PivotPosition::CENTER)
  , opaque(this, "opaque", false)
  , autoOpaque(this, "auto_opaque", true)
  , keepSelectionAfterClear(this, "keep_selection_after_clear", false)
  , autoShowSelectionEdges(this, "auto_show_selection_edges", true)
  , transparentColor(this, "transparent_color")
  , rotationAlgorithm(this, "rotation_algorithm", app::tools::RotationAlgorithm::DEFAULT)
  , modifySelectionQuantity(this, "modify_selection_quantity", 1)
  , modifySelectionBrush(this, "modify_selection_brush", BrushType::CIRCLE)
  , doubleclickSelectTile(this, "doubleclick_select_tile", true)
  , forceRotsprite(this, "force_rotsprite", false)
  , multicelWhenLayersOrFrames(this, "multicel_when_layers_or_frames", true)
  , snapToGrid(this, "snap_to_grid", true)
{
}

void GlobalPref::Selection::load()
{
  load_option(mode);
  load_option(moveEdges);
  load_option(modifiersDisableHandles);
  load_option(moveOnAddMode);
  load_option(pivotVisibility);
  load_option(pivotPosition);
  load_option(opaque);
  load_option(autoOpaque);
  load_option(keepSelectionAfterClear);
  load_option(autoShowSelectionEdges);
  load_option(transparentColor);
  load_option(rotationAlgorithm);
  load_option(modifySelectionQuantity);
  load_option(modifySelectionBrush);
  load_option(doubleclickSelectTile);
  load_option(forceRotsprite);
  load_option(multicelWhenLayersOrFrames);
  load_option(snapToGrid);
}

void GlobalPref::Selection::save()
{
  save_option(mode);
  save_option(moveEdges);
  save_option(modifiersDisableHandles);
  save_option(moveOnAddMode);
  save_option(pivotVisibility);
  save_option(pivotPosition);
  save_option(opaque);
  save_option(autoOpaque);
  save_option(keepSelectionAfterClear);
  save_option(autoShowSelectionEdges);
  save_option(transparentColor);
  save_option(rotationAlgorithm);
  save_option(modifySelectionQuantity);
  save_option(modifySelectionBrush);
  save_option(doubleclickSelectTile);
  save_option(forceRotsprite);
  save_option(multicelWhenLayersOrFrames);
  save_option(snapToGrid);
}

Section* GlobalPref::Selection::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Selection::option(const char* id)
{
  if (std::strcmp(id, mode.id()) == 0) return &mode;
  if (std::strcmp(id, moveEdges.id()) == 0) return &moveEdges;
  if (std::strcmp(id, modifiersDisableHandles.id()) == 0) return &modifiersDisableHandles;
  if (std::strcmp(id, moveOnAddMode.id()) == 0) return &moveOnAddMode;
  if (std::strcmp(id, pivotVisibility.id()) == 0) return &pivotVisibility;
  if (std::strcmp(id, pivotPosition.id()) == 0) return &pivotPosition;
  if (std::strcmp(id, opaque.id()) == 0) return &opaque;
  if (std::strcmp(id, autoOpaque.id()) == 0) return &autoOpaque;
  if (std::strcmp(id, keepSelectionAfterClear.id()) == 0) return &keepSelectionAfterClear;
  if (std::strcmp(id, autoShowSelectionEdges.id()) == 0) return &autoShowSelectionEdges;
  if (std::strcmp(id, transparentColor.id()) == 0) return &transparentColor;
  if (std::strcmp(id, rotationAlgorithm.id()) == 0) return &rotationAlgorithm;
  if (std::strcmp(id, modifySelectionQuantity.id()) == 0) return &modifySelectionQuantity;
  if (std::strcmp(id, modifySelectionBrush.id()) == 0) return &modifySelectionBrush;
  if (std::strcmp(id, doubleclickSelectTile.id()) == 0) return &doubleclickSelectTile;
  if (std::strcmp(id, forceRotsprite.id()) == 0) return &forceRotsprite;
  if (std::strcmp(id, multicelWhenLayersOrFrames.id()) == 0) return &multicelWhenLayersOrFrames;
  if (std::strcmp(id, snapToGrid.id()) == 0) return &snapToGrid;
  return nullptr;
}

GlobalPref::Quantization::Quantization(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "quantization")
  , withAlpha(this, "with_alpha", true)
  , ditheringAlgorithm(this, "dithering_algorithm")
  , ditheringFactor(this, "dithering_factor", 100)
  , toGray(this, "to_gray", ToGrayAlgorithm::DEFAULT)
  , advanced(this, "advanced", false)
  , rgbmapAlgorithm(this, "rgbmap_algorithm", doc::RgbMapAlgorithm::DEFAULT)
{
}

void GlobalPref::Quantization::load()
{
  load_option(withAlpha);
  load_option(ditheringAlgorithm);
  load_option(ditheringFactor);
  load_option(toGray);
  load_option(advanced);
  load_option(rgbmapAlgorithm);
}

void GlobalPref::Quantization::save()
{
  save_option(withAlpha);
  save_option(ditheringAlgorithm);
  save_option(ditheringFactor);
  save_option(toGray);
  save_option(advanced);
  save_option(rgbmapAlgorithm);
}

Section* GlobalPref::Quantization::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Quantization::option(const char* id)
{
  if (std::strcmp(id, withAlpha.id()) == 0) return &withAlpha;
  if (std::strcmp(id, ditheringAlgorithm.id()) == 0) return &ditheringAlgorithm;
  if (std::strcmp(id, ditheringFactor.id()) == 0) return &ditheringFactor;
  if (std::strcmp(id, toGray.id()) == 0) return &toGray;
  if (std::strcmp(id, advanced.id()) == 0) return &advanced;
  if (std::strcmp(id, rgbmapAlgorithm.id()) == 0) return &rgbmapAlgorithm;
  return nullptr;
}

GlobalPref::Eyedropper::Eyedropper(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "eyedropper")
  , channel(this, "channel", EyedropperChannel::COLOR_ALPHA)
  , sample(this, "sample", EyedropperSample::ALL_LAYERS)
  , discardBrush(this, "discard_brush", false)
{
}

void GlobalPref::Eyedropper::load()
{
  load_option(channel);
  load_option(sample);
  load_option(discardBrush);
}

void GlobalPref::Eyedropper::save()
{
  save_option(channel);
  save_option(sample);
  save_option(discardBrush);
}

Section* GlobalPref::Eyedropper::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Eyedropper::option(const char* id)
{
  if (std::strcmp(id, channel.id()) == 0) return &channel;
  if (std::strcmp(id, sample.id()) == 0) return &sample;
  if (std::strcmp(id, discardBrush.id()) == 0) return &discardBrush;
  return nullptr;
}

GlobalPref::Shared::Shared(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "shared")
  , shareDynamics(this, "share_dynamics", true)
  , shareInk(this, "share_ink", false)
  , ink(this, "ink", app::tools::InkType::DEFAULT)
{
}

void GlobalPref::Shared::load()
{
  load_option(shareDynamics);
  load_option(shareInk);
  load_option(ink);
}

void GlobalPref::Shared::save()
{
  save_option(shareDynamics);
  save_option(shareInk);
  save_option(ink);
}

Section* GlobalPref::Shared::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Shared::option(const char* id)
{
  if (std::strcmp(id, shareDynamics.id()) == 0) return &shareDynamics;
  if (std::strcmp(id, shareInk.id()) == 0) return &shareInk;
  if (std::strcmp(id, ink.id()) == 0) return &ink;
  return nullptr;
}

GlobalPref::NewFile::NewFile(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "new_file")
  , width(this, "width", 32)
  , height(this, "height", 32)
  , colorMode(this, "color_mode", doc::ColorMode::RGB)
  , backgroundColor(this, "background_color", 0)
  , advanced(this, "advanced", false)
  , pixelRatio(this, "pixel_ratio")
{
}

void GlobalPref::NewFile::load()
{
  load_option(width);
  load_option(height);
  load_option(colorMode);
  load_option(backgroundColor);
  load_option(advanced);
  load_option(pixelRatio);
}

void GlobalPref::NewFile::save()
{
  save_option(width);
  save_option(height);
  save_option(colorMode);
  save_option(backgroundColor);
  save_option(advanced);
  save_option(pixelRatio);
}

Section* GlobalPref::NewFile::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::NewFile::option(const char* id)
{
  if (std::strcmp(id, width.id()) == 0) return &width;
  if (std::strcmp(id, height.id()) == 0) return &height;
  if (std::strcmp(id, colorMode.id()) == 0) return &colorMode;
  if (std::strcmp(id, backgroundColor.id()) == 0) return &backgroundColor;
  if (std::strcmp(id, advanced.id()) == 0) return &advanced;
  if (std::strcmp(id, pixelRatio.id()) == 0) return &pixelRatio;
  return nullptr;
}

GlobalPref::FileSelector::FileSelector(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "file_selector")
  , currentFolder(this, "current_folder", "<empty>")
  , zoom(this, "zoom", 1.0)
{
}

void GlobalPref::FileSelector::load()
{
  load_option(currentFolder);
  load_option(zoom);
}

void GlobalPref::FileSelector::save()
{
  save_option(currentFolder);
  save_option(zoom);
}

Section* GlobalPref::FileSelector::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::FileSelector::option(const char* id)
{
  if (std::strcmp(id, currentFolder.id()) == 0) return &currentFolder;
  if (std::strcmp(id, zoom.id()) == 0) return &zoom;
  return nullptr;
}

GlobalPref::TextTool::TextTool(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "text_tool")
  , fontFace(this, "font_face")
  , fontSize(this, "font_size", 12)
  , antialias(this, "antialias", false)
{
}

void GlobalPref::TextTool::load()
{
  load_option(fontFace);
  load_option(fontSize);
  load_option(antialias);
}

void GlobalPref::TextTool::save()
{
  save_option(fontFace);
  save_option(fontSize);
  save_option(antialias);
}

Section* GlobalPref::TextTool::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::TextTool::option(const char* id)
{
  if (std::strcmp(id, fontFace.id()) == 0) return &fontFace;
  if (std::strcmp(id, fontSize.id()) == 0) return &fontSize;
  if (std::strcmp(id, antialias.id()) == 0) return &antialias;
  return nullptr;
}

GlobalPref::SymmetryMode::SymmetryMode(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "symmetry_mode")
  , enabled(this, "enabled", false)
{
}

void GlobalPref::SymmetryMode::load()
{
  load_option(enabled);
}

void GlobalPref::SymmetryMode::save()
{
  save_option(enabled);
}

Section* GlobalPref::SymmetryMode::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::SymmetryMode::option(const char* id)
{
  if (std::strcmp(id, enabled.id()) == 0) return &enabled;
  return nullptr;
}

GlobalPref::Perf::Perf(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "perf")
  , showRenderTime(this, "show_render_time", false)
{
}

void GlobalPref::Perf::load()
{
  load_option(showRenderTime);
}

void GlobalPref::Perf::save()
{
  save_option(showRenderTime);
}

Section* GlobalPref::Perf::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Perf::option(const char* id)
{
  if (std::strcmp(id, showRenderTime.id()) == 0) return &showRenderTime;
  return nullptr;
}

GlobalPref::Guides::Guides(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "guides")
  , layerEdgesColor(this, "layer_edges_color", app::Color::fromRgb(0, 0, 255))
  , autoGuidesColor(this, "auto_guides_color", app::Color::fromRgb(0, 0, 255, 128))
{
}

void GlobalPref::Guides::load()
{
  load_option(layerEdgesColor);
  load_option(autoGuidesColor);
}

void GlobalPref::Guides::save()
{
  save_option(layerEdgesColor);
  save_option(autoGuidesColor);
}

Section* GlobalPref::Guides::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Guides::option(const char* id)
{
  if (std::strcmp(id, layerEdgesColor.id()) == 0) return &layerEdgesColor;
  if (std::strcmp(id, autoGuidesColor.id()) == 0) return &autoGuidesColor;
  return nullptr;
}

GlobalPref::Slices::Slices(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "slices")
  , defaultColor(this, "default_color", app::Color::fromRgb(0, 0, 255))
  , userDataVisibility(this, "user_data_visibility", false)
{
}

void GlobalPref::Slices::load()
{
  load_option(defaultColor);
  load_option(userDataVisibility);
}

void GlobalPref::Slices::save()
{
  save_option(defaultColor);
  save_option(userDataVisibility);
}

Section* GlobalPref::Slices::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Slices::option(const char* id)
{
  if (std::strcmp(id, defaultColor.id()) == 0) return &defaultColor;
  if (std::strcmp(id, userDataVisibility.id()) == 0) return &userDataVisibility;
  return nullptr;
}

GlobalPref::AdvancedMode::AdvancedMode(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "advanced_mode")
  , showAlert(this, "show_alert", true)
{
}

void GlobalPref::AdvancedMode::load()
{
  load_option(showAlert);
}

void GlobalPref::AdvancedMode::save()
{
  save_option(showAlert);
}

Section* GlobalPref::AdvancedMode::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::AdvancedMode::option(const char* id)
{
  if (std::strcmp(id, showAlert.id()) == 0) return &showAlert;
  return nullptr;
}

GlobalPref::OpenFile::OpenFile(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "open_file")
  , openSequence(this, "open_sequence", SequenceDecision::ASK)
{
}

void GlobalPref::OpenFile::load()
{
  load_option(openSequence);
}

void GlobalPref::OpenFile::save()
{
  save_option(openSequence);
}

Section* GlobalPref::OpenFile::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::OpenFile::option(const char* id)
{
  if (std::strcmp(id, openSequence.id()) == 0) return &openSequence;
  return nullptr;
}

GlobalPref::SaveFile::SaveFile(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "save_file")
  , showFileFormatDoesntSupportAlert(this, "show_file_format_doesnt_support_alert", true)
  , showExportAnimationInSequenceAlert(this, "show_export_animation_in_sequence_alert", true)
  , defaultExtension(this, "default_extension", "aseprite")
{
}

void GlobalPref::SaveFile::load()
{
  load_option(showFileFormatDoesntSupportAlert);
  load_option(showExportAnimationInSequenceAlert);
  load_option(defaultExtension);
}

void GlobalPref::SaveFile::save()
{
  save_option(showFileFormatDoesntSupportAlert);
  save_option(showExportAnimationInSequenceAlert);
  save_option(defaultExtension);
}

Section* GlobalPref::SaveFile::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::SaveFile::option(const char* id)
{
  if (std::strcmp(id, showFileFormatDoesntSupportAlert.id()) == 0) return &showFileFormatDoesntSupportAlert;
  if (std::strcmp(id, showExportAnimationInSequenceAlert.id()) == 0) return &showExportAnimationInSequenceAlert;
  if (std::strcmp(id, defaultExtension.id()) == 0) return &defaultExtension;
  return nullptr;
}

GlobalPref::ExportFile::ExportFile(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "export_file")
  , showOverwriteFilesAlert(this, "show_overwrite_files_alert", true)
  , imageDefaultExtension(this, "image_default_extension", "png")
  , animationDefaultExtension(this, "animation_default_extension", "gif")
{
}

void GlobalPref::ExportFile::load()
{
  load_option(showOverwriteFilesAlert);
  load_option(imageDefaultExtension);
  load_option(animationDefaultExtension);
}

void GlobalPref::ExportFile::save()
{
  save_option(showOverwriteFilesAlert);
  save_option(imageDefaultExtension);
  save_option(animationDefaultExtension);
}

Section* GlobalPref::ExportFile::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::ExportFile::option(const char* id)
{
  if (std::strcmp(id, showOverwriteFilesAlert.id()) == 0) return &showOverwriteFilesAlert;
  if (std::strcmp(id, imageDefaultExtension.id()) == 0) return &imageDefaultExtension;
  if (std::strcmp(id, animationDefaultExtension.id()) == 0) return &animationDefaultExtension;
  return nullptr;
}

GlobalPref::SpriteSheet::SpriteSheet(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "sprite_sheet")
  , showOverwriteFilesAlert(this, "show_overwrite_files_alert", true)
  , defaultExtension(this, "default_extension", "png")
  , preview(this, "preview", true)
  , sections(this, "sections")
{
}

void GlobalPref::SpriteSheet::load()
{
  load_option(showOverwriteFilesAlert);
  load_option(defaultExtension);
  load_option(preview);
  load_option(sections);
}

void GlobalPref::SpriteSheet::save()
{
  save_option(showOverwriteFilesAlert);
  save_option(defaultExtension);
  save_option(preview);
  save_option(sections);
}

Section* GlobalPref::SpriteSheet::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::SpriteSheet::option(const char* id)
{
  if (std::strcmp(id, showOverwriteFilesAlert.id()) == 0) return &showOverwriteFilesAlert;
  if (std::strcmp(id, defaultExtension.id()) == 0) return &defaultExtension;
  if (std::strcmp(id, preview.id()) == 0) return &preview;
  if (std::strcmp(id, sections.id()) == 0) return &sections;
  return nullptr;
}

GlobalPref::Gif::Gif(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "gif")
  , showAlert(this, "show_alert", true)
  , interlaced(this, "interlaced", false)
  , loop(this, "loop", true)
  , preservePaletteOrder(this, "preserve_palette_order", true)
{
}

void GlobalPref::Gif::load()
{
  load_option(showAlert);
  load_option(interlaced);
  load_option(loop);
  load_option(preservePaletteOrder);
}

void GlobalPref::Gif::save()
{
  save_option(showAlert);
  save_option(interlaced);
  save_option(loop);
  save_option(preservePaletteOrder);
}

Section* GlobalPref::Gif::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Gif::option(const char* id)
{
  if (std::strcmp(id, showAlert.id()) == 0) return &showAlert;
  if (std::strcmp(id, interlaced.id()) == 0) return &interlaced;
  if (std::strcmp(id, loop.id()) == 0) return &loop;
  if (std::strcmp(id, preservePaletteOrder.id()) == 0) return &preservePaletteOrder;
  return nullptr;
}

GlobalPref::Jpeg::Jpeg(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "jpeg")
  , showAlert(this, "show_alert", true)
  , quality(this, "quality", 1.0)
{
}

void GlobalPref::Jpeg::load()
{
  load_option(showAlert);
  load_option(quality);
}

void GlobalPref::Jpeg::save()
{
  save_option(showAlert);
  save_option(quality);
}

Section* GlobalPref::Jpeg::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Jpeg::option(const char* id)
{
  if (std::strcmp(id, showAlert.id()) == 0) return &showAlert;
  if (std::strcmp(id, quality.id()) == 0) return &quality;
  return nullptr;
}

GlobalPref::Svg::Svg(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "svg")
  , showAlert(this, "show_alert", true)
  , pixelScale(this, "pixel_scale", 1)
{
}

void GlobalPref::Svg::load()
{
  load_option(showAlert);
  load_option(pixelScale);
}

void GlobalPref::Svg::save()
{
  save_option(showAlert);
  save_option(pixelScale);
}

Section* GlobalPref::Svg::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Svg::option(const char* id)
{
  if (std::strcmp(id, showAlert.id()) == 0) return &showAlert;
  if (std::strcmp(id, pixelScale.id()) == 0) return &pixelScale;
  return nullptr;
}

GlobalPref::Tga::Tga(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "tga")
  , showAlert(this, "show_alert", true)
  , bitsPerPixel(this, "bits_per_pixel", 0)
  , compress(this, "compress", true)
{
}

void GlobalPref::Tga::load()
{
  load_option(showAlert);
  load_option(bitsPerPixel);
  load_option(compress);
}

void GlobalPref::Tga::save()
{
  save_option(showAlert);
  save_option(bitsPerPixel);
  save_option(compress);
}

Section* GlobalPref::Tga::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Tga::option(const char* id)
{
  if (std::strcmp(id, showAlert.id()) == 0) return &showAlert;
  if (std::strcmp(id, bitsPerPixel.id()) == 0) return &bitsPerPixel;
  if (std::strcmp(id, compress.id()) == 0) return &compress;
  return nullptr;
}

GlobalPref::Css::Css(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "css")
  , showAlert(this, "show_alert", true)
  , pixelScale(this, "pixel_scale", 1)
  , withVars(this, "with_vars", false)
  , generateHtml(this, "generate_html", false)
{
}

void GlobalPref::Css::load()
{
  load_option(showAlert);
  load_option(pixelScale);
  load_option(withVars);
  load_option(generateHtml);
}

void GlobalPref::Css::save()
{
  save_option(showAlert);
  save_option(pixelScale);
  save_option(withVars);
  save_option(generateHtml);
}

Section* GlobalPref::Css::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Css::option(const char* id)
{
  if (std::strcmp(id, showAlert.id()) == 0) return &showAlert;
  if (std::strcmp(id, pixelScale.id()) == 0) return &pixelScale;
  if (std::strcmp(id, withVars.id()) == 0) return &withVars;
  if (std::strcmp(id, generateHtml.id()) == 0) return &generateHtml;
  return nullptr;
}

GlobalPref::Webp::Webp(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "webp")
  , showAlert(this, "show_alert", true)
  , loop(this, "loop", true)
  , type(this, "type", 0)
  , quality(this, "quality", 100)
  , compression(this, "compression", 6)
  , imageHint(this, "image_hint", 0)
  , imagePreset(this, "image_preset", 0)
{
}

void GlobalPref::Webp::load()
{
  load_option(showAlert);
  load_option(loop);
  load_option(type);
  load_option(quality);
  load_option(compression);
  load_option(imageHint);
  load_option(imagePreset);
}

void GlobalPref::Webp::save()
{
  save_option(showAlert);
  save_option(loop);
  save_option(type);
  save_option(quality);
  save_option(compression);
  save_option(imageHint);
  save_option(imagePreset);
}

Section* GlobalPref::Webp::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Webp::option(const char* id)
{
  if (std::strcmp(id, showAlert.id()) == 0) return &showAlert;
  if (std::strcmp(id, loop.id()) == 0) return &loop;
  if (std::strcmp(id, type.id()) == 0) return &type;
  if (std::strcmp(id, quality.id()) == 0) return &quality;
  if (std::strcmp(id, compression.id()) == 0) return &compression;
  if (std::strcmp(id, imageHint.id()) == 0) return &imageHint;
  if (std::strcmp(id, imagePreset.id()) == 0) return &imagePreset;
  return nullptr;
}

GlobalPref::HueSaturation::HueSaturation(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "hue_saturation")
  , mode(this, "mode", filters::HueSaturationFilter::Mode::HSL_MUL)
{
}

void GlobalPref::HueSaturation::load()
{
  load_option(mode);
}

void GlobalPref::HueSaturation::save()
{
  save_option(mode);
}

Section* GlobalPref::HueSaturation::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::HueSaturation::option(const char* id)
{
  if (std::strcmp(id, mode.id()) == 0) return &mode;
  return nullptr;
}

GlobalPref::Filters::Filters(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "filters")
  , celsTarget(this, "cels_target", CelsTarget::Selected)
{
}

void GlobalPref::Filters::load()
{
  load_option(celsTarget);
}

void GlobalPref::Filters::save()
{
  save_option(celsTarget);
}

Section* GlobalPref::Filters::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Filters::option(const char* id)
{
  if (std::strcmp(id, celsTarget.id()) == 0) return &celsTarget;
  return nullptr;
}

GlobalPref::Scripts::Scripts(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "scripts")
  , showRunScriptAlert(this, "show_run_script_alert", true)
{
}

void GlobalPref::Scripts::load()
{
  load_option(showRunScriptAlert);
}

void GlobalPref::Scripts::save()
{
  save_option(showRunScriptAlert);
}

Section* GlobalPref::Scripts::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Scripts::option(const char* id)
{
  if (std::strcmp(id, showRunScriptAlert.id()) == 0) return &showRunScriptAlert;
  return nullptr;
}

GlobalPref::Color::Color(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "color")
  , manage(this, "manage", true)
  , workingRgbSpace(this, "working_rgb_space", "sRGB")
  , filesWithProfile(this, "files_with_profile", ColorProfileBehavior::EMBEDDED)
  , missingProfile(this, "missing_profile", ColorProfileBehavior::ASSIGN)
  , windowProfile(this, "window_profile", WindowColorProfile::MONITOR)
  , windowProfileName(this, "window_profile_name")
{
}

void GlobalPref::Color::load()
{
  load_option(manage);
  load_option(workingRgbSpace);
  load_option(filesWithProfile);
  load_option(missingProfile);
  load_option(windowProfile);
  load_option(windowProfileName);
}

void GlobalPref::Color::save()
{
  save_option(manage);
  save_option(workingRgbSpace);
  save_option(filesWithProfile);
  save_option(missingProfile);
  save_option(windowProfile);
  save_option(windowProfileName);
}

Section* GlobalPref::Color::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Color::option(const char* id)
{
  if (std::strcmp(id, manage.id()) == 0) return &manage;
  if (std::strcmp(id, workingRgbSpace.id()) == 0) return &workingRgbSpace;
  if (std::strcmp(id, filesWithProfile.id()) == 0) return &filesWithProfile;
  if (std::strcmp(id, missingProfile.id()) == 0) return &missingProfile;
  if (std::strcmp(id, windowProfile.id()) == 0) return &windowProfile;
  if (std::strcmp(id, windowProfileName.id()) == 0) return &windowProfileName;
  return nullptr;
}

GlobalPref::Range::Range(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "range")
  , alpha(this, "alpha", AlphaRange::EIGHT_BIT)
  , opacity(this, "opacity", AlphaRange::PERCENTAGE)
{
}

void GlobalPref::Range::load()
{
  load_option(alpha);
  load_option(opacity);
}

void GlobalPref::Range::save()
{
  save_option(alpha);
  save_option(opacity);
}

Section* GlobalPref::Range::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Range::option(const char* id)
{
  if (std::strcmp(id, alpha.id()) == 0) return &alpha;
  if (std::strcmp(id, opacity.id()) == 0) return &opacity;
  return nullptr;
}

GlobalPref::CanvasSize::CanvasSize(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "canvas_size")
  , trimOutside(this, "trim_outside", false)
{
}

void GlobalPref::CanvasSize::load()
{
  load_option(trimOutside);
}

void GlobalPref::CanvasSize::save()
{
  save_option(trimOutside);
}

Section* GlobalPref::CanvasSize::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::CanvasSize::option(const char* id)
{
  if (std::strcmp(id, trimOutside.id()) == 0) return &trimOutside;
  return nullptr;
}

GlobalPref::Tileset::Tileset(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "tileset")
  , baseIndex(this, "base_index", 1)
  , cacheCompressedTilesets(this, "cache_compressed_tilesets", true)
  , advanced(this, "advanced", false)
{
}

void GlobalPref::Tileset::load()
{
  load_option(baseIndex);
  load_option(cacheCompressedTilesets);
  load_option(advanced);
}

void GlobalPref::Tileset::save()
{
  save_option(baseIndex);
  save_option(cacheCompressedTilesets);
  save_option(advanced);
}

Section* GlobalPref::Tileset::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Tileset::option(const char* id)
{
  if (std::strcmp(id, baseIndex.id()) == 0) return &baseIndex;
  if (std::strcmp(id, cacheCompressedTilesets.id()) == 0) return &cacheCompressedTilesets;
  if (std::strcmp(id, advanced.id()) == 0) return &advanced;
  return nullptr;
}

GlobalPref::Tilemap::Tilemap(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "tilemap")
  , showDeleteUnusedTilesetAlert(this, "show_delete_unused_tileset_alert", true)
{
}

void GlobalPref::Tilemap::load()
{
  load_option(showDeleteUnusedTilesetAlert);
}

void GlobalPref::Tilemap::save()
{
  save_option(showDeleteUnusedTilesetAlert);
}

Section* GlobalPref::Tilemap::section(const char* id)
{
  return nullptr;
}

OptionBase* GlobalPref::Tilemap::option(const char* id)
{
  if (std::strcmp(id, showDeleteUnusedTilesetAlert.id()) == 0) return &showDeleteUnusedTilesetAlert;
  return nullptr;
}

ToolPref::ToolPref(const std::string& name)
  : Section(name)
  , opacity(this, "opacity", 255)
  , tolerance(this, "tolerance", 0)
  , contiguous(this, "contiguous", true)
  , filled(this, "filled", false)
  , filledPreview(this, "filled_preview", false)
  , ink(this, "ink", app::tools::InkType::DEFAULT)
  , freehandAlgorithm(this, "freehand_algorithm", app::tools::FreehandAlgorithm::DEFAULT)
  , brush(name)
  , spray(name)
  , floodfill(name)
  , dynamics(name)
{
}

void ToolPref::load()
{
  load_option(opacity);
  load_option(tolerance);
  load_option(contiguous);
  load_option(filled);
  load_option(filledPreview);
  load_option(ink);
  load_option(freehandAlgorithm);
  brush.load();
  spray.load();
  floodfill.load();
  dynamics.load();
}

void ToolPref::save()
{
  save_option(opacity);
  save_option(tolerance);
  save_option(contiguous);
  save_option(filled);
  save_option(filledPreview);
  save_option(ink);
  save_option(freehandAlgorithm);
  brush.save();
  spray.save();
  floodfill.save();
  dynamics.save();
}

Section* ToolPref::section(const char* id)
{
  if (std::strcmp(id, brush.name()) == 0) return &brush;
  if (std::strcmp(id, spray.name()) == 0) return &spray;
  if (std::strcmp(id, floodfill.name()) == 0) return &floodfill;
  if (std::strcmp(id, dynamics.name()) == 0) return &dynamics;
  return nullptr;
}

OptionBase* ToolPref::option(const char* id)
{
  if (std::strcmp(id, opacity.id()) == 0) return &opacity;
  if (std::strcmp(id, tolerance.id()) == 0) return &tolerance;
  if (std::strcmp(id, contiguous.id()) == 0) return &contiguous;
  if (std::strcmp(id, filled.id()) == 0) return &filled;
  if (std::strcmp(id, filledPreview.id()) == 0) return &filledPreview;
  if (std::strcmp(id, ink.id()) == 0) return &ink;
  if (std::strcmp(id, freehandAlgorithm.id()) == 0) return &freehandAlgorithm;
  return nullptr;
}

ToolPref::Brush::Brush(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "brush")
  , type(this, "type", BrushType::CIRCLE)
  , size(this, "size", 1)
  , angle(this, "angle", 0)
{
}

void ToolPref::Brush::load()
{
  load_option(type);
  load_option(size);
  load_option(angle);
}

void ToolPref::Brush::save()
{
  save_option(type);
  save_option(size);
  save_option(angle);
}

Section* ToolPref::Brush::section(const char* id)
{
  return nullptr;
}

OptionBase* ToolPref::Brush::option(const char* id)
{
  if (std::strcmp(id, type.id()) == 0) return &type;
  if (std::strcmp(id, size.id()) == 0) return &size;
  if (std::strcmp(id, angle.id()) == 0) return &angle;
  return nullptr;
}

ToolPref::Spray::Spray(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "spray")
  , width(this, "width", 16)
  , speed(this, "speed", 32)
{
}

void ToolPref::Spray::load()
{
  load_option(width);
  load_option(speed);
}

void ToolPref::Spray::save()
{
  save_option(width);
  save_option(speed);
}

Section* ToolPref::Spray::section(const char* id)
{
  return nullptr;
}

OptionBase* ToolPref::Spray::option(const char* id)
{
  if (std::strcmp(id, width.id()) == 0) return &width;
  if (std::strcmp(id, speed.id()) == 0) return &speed;
  return nullptr;
}

ToolPref::Floodfill::Floodfill(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "floodfill")
  , stopAtGrid(this, "stop_at_grid", StopAtGrid::NEVER)
  , referTo(this, "refer_to", FillReferTo::ACTIVE_LAYER)
  , pixelConnectivity(this, "pixel_connectivity", PixelConnectivity::FOUR_CONNECTED)
{
}

void ToolPref::Floodfill::load()
{
  load_option(stopAtGrid);
  load_option(referTo);
  load_option(pixelConnectivity);
}

void ToolPref::Floodfill::save()
{
  save_option(stopAtGrid);
  save_option(referTo);
  save_option(pixelConnectivity);
}

Section* ToolPref::Floodfill::section(const char* id)
{
  return nullptr;
}

OptionBase* ToolPref::Floodfill::option(const char* id)
{
  if (std::strcmp(id, stopAtGrid.id()) == 0) return &stopAtGrid;
  if (std::strcmp(id, referTo.id()) == 0) return &referTo;
  if (std::strcmp(id, pixelConnectivity.id()) == 0) return &pixelConnectivity;
  return nullptr;
}

ToolPref::Dynamics::Dynamics(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "dynamics")
  , stabilizer(this, "stabilizer", false)
  , stabilizerFactor(this, "stabilizer_factor", 0)
  , size(this, "size", app::tools::DynamicSensor::Static)
  , angle(this, "angle", app::tools::DynamicSensor::Static)
  , gradient(this, "gradient", app::tools::DynamicSensor::Static)
  , minSize(this, "min_size", 1)
  , minAngle(this, "min_angle", 1)
  , colorFromTo(this, "color_from_to", app::tools::ColorFromTo::BgToFg)
  , matrixName(this, "matrix_name")
  , minPressureThreshold(this, "min_pressure_threshold", 0.1)
  , maxPressureThreshold(this, "max_pressure_threshold", 0.9)
  , minVelocityThreshold(this, "min_velocity_threshold", 0.1)
  , maxVelocityThreshold(this, "max_velocity_threshold", 0.9)
{
}

void ToolPref::Dynamics::load()
{
  load_option(stabilizer);
  load_option(stabilizerFactor);
  load_option(size);
  load_option(angle);
  load_option(gradient);
  load_option(minSize);
  load_option(minAngle);
  load_option(colorFromTo);
  load_option(matrixName);
  load_option(minPressureThreshold);
  load_option(maxPressureThreshold);
  load_option(minVelocityThreshold);
  load_option(maxVelocityThreshold);
}

void ToolPref::Dynamics::save()
{
  save_option(stabilizer);
  save_option(stabilizerFactor);
  save_option(size);
  save_option(angle);
  save_option(gradient);
  save_option(minSize);
  save_option(minAngle);
  save_option(colorFromTo);
  save_option(matrixName);
  save_option(minPressureThreshold);
  save_option(maxPressureThreshold);
  save_option(minVelocityThreshold);
  save_option(maxVelocityThreshold);
}

Section* ToolPref::Dynamics::section(const char* id)
{
  return nullptr;
}

OptionBase* ToolPref::Dynamics::option(const char* id)
{
  if (std::strcmp(id, stabilizer.id()) == 0) return &stabilizer;
  if (std::strcmp(id, stabilizerFactor.id()) == 0) return &stabilizerFactor;
  if (std::strcmp(id, size.id()) == 0) return &size;
  if (std::strcmp(id, angle.id()) == 0) return &angle;
  if (std::strcmp(id, gradient.id()) == 0) return &gradient;
  if (std::strcmp(id, minSize.id()) == 0) return &minSize;
  if (std::strcmp(id, minAngle.id()) == 0) return &minAngle;
  if (std::strcmp(id, colorFromTo.id()) == 0) return &colorFromTo;
  if (std::strcmp(id, matrixName.id()) == 0) return &matrixName;
  if (std::strcmp(id, minPressureThreshold.id()) == 0) return &minPressureThreshold;
  if (std::strcmp(id, maxPressureThreshold.id()) == 0) return &maxPressureThreshold;
  if (std::strcmp(id, minVelocityThreshold.id()) == 0) return &minVelocityThreshold;
  if (std::strcmp(id, maxVelocityThreshold.id()) == 0) return &maxVelocityThreshold;
  return nullptr;
}

DocPref::DocPref(const std::string& name)
  : Section(name)
  , site(name)
  , tiled(name)
  , symmetry(name)
  , grid(name)
  , pixelGrid(name)
  , bg(name)
  , timeline(name)
  , thumbnails(name)
  , onionskin(name)
  , saveCopy(name)
  , spriteSheet(name)
  , importSpriteSheet(name)
  , preview(name)
  , show(name)
{
}

void DocPref::load()
{
  site.load();
  tiled.load();
  symmetry.load();
  grid.load();
  pixelGrid.load();
  bg.load();
  timeline.load();
  thumbnails.load();
  onionskin.load();
  saveCopy.load();
  spriteSheet.load();
  importSpriteSheet.load();
  preview.load();
  show.load();
}

void DocPref::save()
{
  site.save();
  tiled.save();
  symmetry.save();
  grid.save();
  pixelGrid.save();
  bg.save();
  timeline.save();
  thumbnails.save();
  onionskin.save();
  saveCopy.save();
  spriteSheet.save();
  importSpriteSheet.save();
  preview.save();
  show.save();
}

Section* DocPref::section(const char* id)
{
  if (std::strcmp(id, site.name()) == 0) return &site;
  if (std::strcmp(id, tiled.name()) == 0) return &tiled;
  if (std::strcmp(id, symmetry.name()) == 0) return &symmetry;
  if (std::strcmp(id, grid.name()) == 0) return &grid;
  if (std::strcmp(id, pixelGrid.name()) == 0) return &pixelGrid;
  if (std::strcmp(id, bg.name()) == 0) return &bg;
  if (std::strcmp(id, timeline.name()) == 0) return &timeline;
  if (std::strcmp(id, thumbnails.name()) == 0) return &thumbnails;
  if (std::strcmp(id, onionskin.name()) == 0) return &onionskin;
  if (std::strcmp(id, saveCopy.name()) == 0) return &saveCopy;
  if (std::strcmp(id, spriteSheet.name()) == 0) return &spriteSheet;
  if (std::strcmp(id, importSpriteSheet.name()) == 0) return &importSpriteSheet;
  if (std::strcmp(id, preview.name()) == 0) return &preview;
  if (std::strcmp(id, show.name()) == 0) return &show;
  return nullptr;
}

OptionBase* DocPref::option(const char* id)
{
  return nullptr;
}

DocPref::Site::Site(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "site")
  , frame(this, "frame", doc::frame_t(0))
  , layer(this, "layer", doc::layer_t(0))
{
}

void DocPref::Site::load()
{
  load_option(frame);
  load_option(layer);
}

void DocPref::Site::save()
{
  save_option(frame);
  save_option(layer);
}

Section* DocPref::Site::section(const char* id)
{
  return nullptr;
}

OptionBase* DocPref::Site::option(const char* id)
{
  if (std::strcmp(id, frame.id()) == 0) return &frame;
  if (std::strcmp(id, layer.id()) == 0) return &layer;
  return nullptr;
}

DocPref::Tiled::Tiled(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "tiled")
  , mode(this, "mode", filters::TiledMode::NONE)
{
}

void DocPref::Tiled::load()
{
  load_option(mode);
}

void DocPref::Tiled::save()
{
  save_option(mode);
}

Section* DocPref::Tiled::section(const char* id)
{
  return nullptr;
}

OptionBase* DocPref::Tiled::option(const char* id)
{
  if (std::strcmp(id, mode.id()) == 0) return &mode;
  return nullptr;
}

DocPref::Symmetry::Symmetry(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "symmetry")
  , mode(this, "mode", SymmetryMode::NONE)
  , xAxis(this, "x_axis", 0)
  , yAxis(this, "y_axis", 0)
{
}

void DocPref::Symmetry::load()
{
  load_option(mode);
  load_option(xAxis);
  load_option(yAxis);
}

void DocPref::Symmetry::save()
{
  save_option(mode);
  save_option(xAxis);
  save_option(yAxis);
}

Section* DocPref::Symmetry::section(const char* id)
{
  return nullptr;
}

OptionBase* DocPref::Symmetry::option(const char* id)
{
  if (std::strcmp(id, mode.id()) == 0) return &mode;
  if (std::strcmp(id, xAxis.id()) == 0) return &xAxis;
  if (std::strcmp(id, yAxis.id()) == 0) return &yAxis;
  return nullptr;
}

DocPref::Grid::Grid(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "grid")
  , snap(this, "snap", false)
  , bounds(this, "bounds", doc::Sprite::DefaultGridBounds())
  , color(this, "color", app::Color::fromRgb(0, 0, 255))
  , opacity(this, "opacity", 160)
  , autoOpacity(this, "auto_opacity", true)
{
}

void DocPref::Grid::forceSection()
{
  snap.forceDirtyFlag();
  bounds.forceDirtyFlag();
  color.forceDirtyFlag();
  opacity.forceDirtyFlag();
  autoOpacity.forceDirtyFlag();
}

void DocPref::Grid::load()
{
  load_option(snap);
  load_option(bounds);
  load_option(color);
  load_option(opacity);
  load_option(autoOpacity);
}

void DocPref::Grid::save()
{
  save_option(snap);
  save_option(bounds);
  save_option(color);
  save_option(opacity);
  save_option(autoOpacity);
}

Section* DocPref::Grid::section(const char* id)
{
  return nullptr;
}

OptionBase* DocPref::Grid::option(const char* id)
{
  if (std::strcmp(id, snap.id()) == 0) return &snap;
  if (std::strcmp(id, bounds.id()) == 0) return &bounds;
  if (std::strcmp(id, color.id()) == 0) return &color;
  if (std::strcmp(id, opacity.id()) == 0) return &opacity;
  if (std::strcmp(id, autoOpacity.id()) == 0) return &autoOpacity;
  return nullptr;
}

DocPref::PixelGrid::PixelGrid(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "pixel_grid")
  , color(this, "color", app::Color::fromRgb(200, 200, 200))
  , opacity(this, "opacity", 160)
  , autoOpacity(this, "auto_opacity", true)
{
}

void DocPref::PixelGrid::forceSection()
{
  color.forceDirtyFlag();
  opacity.forceDirtyFlag();
  autoOpacity.forceDirtyFlag();
}

void DocPref::PixelGrid::load()
{
  load_option(color);
  load_option(opacity);
  load_option(autoOpacity);
}

void DocPref::PixelGrid::save()
{
  save_option(color);
  save_option(opacity);
  save_option(autoOpacity);
}

Section* DocPref::PixelGrid::section(const char* id)
{
  return nullptr;
}

OptionBase* DocPref::PixelGrid::option(const char* id)
{
  if (std::strcmp(id, color.id()) == 0) return &color;
  if (std::strcmp(id, opacity.id()) == 0) return &opacity;
  if (std::strcmp(id, autoOpacity.id()) == 0) return &autoOpacity;
  return nullptr;
}

DocPref::Bg::Bg(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "bg")
  , type(this, "type", BgType::CHECKERED_16x16)
  , size(this, "size", gfx::Size(16, 16))
  , zoom(this, "zoom", true)
  , color1(this, "color1", app::Color::fromRgb(128, 128, 128))
  , color2(this, "color2", app::Color::fromRgb(192, 192, 192))
{
}

void DocPref::Bg::forceSection()
{
  type.forceDirtyFlag();
  size.forceDirtyFlag();
  zoom.forceDirtyFlag();
  color1.forceDirtyFlag();
  color2.forceDirtyFlag();
}

void DocPref::Bg::load()
{
  load_option(type);
  load_option(size);
  load_option(zoom);
  load_option(color1);
  load_option(color2);
}

void DocPref::Bg::save()
{
  save_option(type);
  save_option(size);
  save_option(zoom);
  save_option(color1);
  save_option(color2);
}

Section* DocPref::Bg::section(const char* id)
{
  return nullptr;
}

OptionBase* DocPref::Bg::option(const char* id)
{
  if (std::strcmp(id, type.id()) == 0) return &type;
  if (std::strcmp(id, size.id()) == 0) return &size;
  if (std::strcmp(id, zoom.id()) == 0) return &zoom;
  if (std::strcmp(id, color1.id()) == 0) return &color1;
  if (std::strcmp(id, color2.id()) == 0) return &color2;
  return nullptr;
}

DocPref::Timeline::Timeline(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "timeline")
  , firstFrame(this, "first_frame", 1)
{
}

void DocPref::Timeline::load()
{
  load_option(firstFrame);
}

void DocPref::Timeline::save()
{
  save_option(firstFrame);
}

Section* DocPref::Timeline::section(const char* id)
{
  return nullptr;
}

OptionBase* DocPref::Timeline::option(const char* id)
{
  if (std::strcmp(id, firstFrame.id()) == 0) return &firstFrame;
  return nullptr;
}

DocPref::Thumbnails::Thumbnails(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "thumbnails")
  , zoom(this, "zoom", 1)
  , enabled(this, "enabled", false)
  , overlayEnabled(this, "overlay_enabled", false)
  , overlaySize(this, "overlay_size", 5)
{
}

void DocPref::Thumbnails::load()
{
  load_option(zoom);
  load_option(enabled);
  load_option(overlayEnabled);
  load_option(overlaySize);
}

void DocPref::Thumbnails::save()
{
  save_option(zoom);
  save_option(enabled);
  save_option(overlayEnabled);
  save_option(overlaySize);
}

Section* DocPref::Thumbnails::section(const char* id)
{
  return nullptr;
}

OptionBase* DocPref::Thumbnails::option(const char* id)
{
  if (std::strcmp(id, zoom.id()) == 0) return &zoom;
  if (std::strcmp(id, enabled.id()) == 0) return &enabled;
  if (std::strcmp(id, overlayEnabled.id()) == 0) return &overlayEnabled;
  if (std::strcmp(id, overlaySize.id()) == 0) return &overlaySize;
  return nullptr;
}

DocPref::Onionskin::Onionskin(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "onionskin")
  , active(this, "active", false)
  , prevFrames(this, "prev_frames", 1)
  , nextFrames(this, "next_frames", 1)
  , opacityBase(this, "opacity_base", 68)
  , opacityStep(this, "opacity_step", 28)
  , type(this, "type", OnionskinType::MERGE)
  , loopTag(this, "loop_tag", true)
  , currentLayer(this, "current_layer", false)
  , position(this, "position", render::OnionskinPosition::BEHIND)
{
}

void DocPref::Onionskin::load()
{
  load_option(active);
  load_option(prevFrames);
  load_option(nextFrames);
  load_option(opacityBase);
  load_option(opacityStep);
  load_option(type);
  load_option(loopTag);
  load_option(currentLayer);
  load_option(position);
}

void DocPref::Onionskin::save()
{
  save_option(active);
  save_option(prevFrames);
  save_option(nextFrames);
  save_option(opacityBase);
  save_option(opacityStep);
  save_option(type);
  save_option(loopTag);
  save_option(currentLayer);
  save_option(position);
}

Section* DocPref::Onionskin::section(const char* id)
{
  return nullptr;
}

OptionBase* DocPref::Onionskin::option(const char* id)
{
  if (std::strcmp(id, active.id()) == 0) return &active;
  if (std::strcmp(id, prevFrames.id()) == 0) return &prevFrames;
  if (std::strcmp(id, nextFrames.id()) == 0) return &nextFrames;
  if (std::strcmp(id, opacityBase.id()) == 0) return &opacityBase;
  if (std::strcmp(id, opacityStep.id()) == 0) return &opacityStep;
  if (std::strcmp(id, type.id()) == 0) return &type;
  if (std::strcmp(id, loopTag.id()) == 0) return &loopTag;
  if (std::strcmp(id, currentLayer.id()) == 0) return &currentLayer;
  if (std::strcmp(id, position.id()) == 0) return &position;
  return nullptr;
}

DocPref::SaveCopy::SaveCopy(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "save_copy")
  , filename(this, "filename")
  , resizeScale(this, "resize_scale", 1)
  , area(this, "area")
  , layer(this, "layer")
  , layerIndex(this, "layer_index", -1)
  , frameTag(this, "frame_tag")
  , aniDir(this, "ani_dir", doc::AniDir::FORWARD)
  , applyPixelRatio(this, "apply_pixel_ratio", false)
  , forTwitter(this, "for_twitter", false)
  , playSubtags(this, "play_subtags", true)
{
}

void DocPref::SaveCopy::clearSection()
{
  filename.clearValue();
  resizeScale.clearValue();
  area.clearValue();
  layer.clearValue();
  layerIndex.clearValue();
  frameTag.clearValue();
  aniDir.clearValue();
  applyPixelRatio.clearValue();
  forTwitter.clearValue();
  playSubtags.clearValue();
}

void DocPref::SaveCopy::load()
{
  load_option(filename);
  load_option(resizeScale);
  load_option(area);
  load_option(layer);
  load_option(layerIndex);
  load_option(frameTag);
  load_option(aniDir);
  load_option(applyPixelRatio);
  load_option(forTwitter);
  load_option(playSubtags);
}

void DocPref::SaveCopy::save()
{
  save_option(filename);
  save_option(resizeScale);
  save_option(area);
  save_option(layer);
  save_option(layerIndex);
  save_option(frameTag);
  save_option(aniDir);
  save_option(applyPixelRatio);
  save_option(forTwitter);
  save_option(playSubtags);
}

Section* DocPref::SaveCopy::section(const char* id)
{
  return nullptr;
}

OptionBase* DocPref::SaveCopy::option(const char* id)
{
  if (std::strcmp(id, filename.id()) == 0) return &filename;
  if (std::strcmp(id, resizeScale.id()) == 0) return &resizeScale;
  if (std::strcmp(id, area.id()) == 0) return &area;
  if (std::strcmp(id, layer.id()) == 0) return &layer;
  if (std::strcmp(id, layerIndex.id()) == 0) return &layerIndex;
  if (std::strcmp(id, frameTag.id()) == 0) return &frameTag;
  if (std::strcmp(id, aniDir.id()) == 0) return &aniDir;
  if (std::strcmp(id, applyPixelRatio.id()) == 0) return &applyPixelRatio;
  if (std::strcmp(id, forTwitter.id()) == 0) return &forTwitter;
  if (std::strcmp(id, playSubtags.id()) == 0) return &playSubtags;
  return nullptr;
}

DocPref::SpriteSheet::SpriteSheet(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "sprite_sheet")
  , defined(this, "defined", false)
  , type(this, "type", app::SpriteSheetType::None)
  , columns(this, "columns", 0)
  , rows(this, "rows", 0)
  , width(this, "width", 0)
  , height(this, "height", 0)
  , textureFilename(this, "texture_filename")
  , dataFilename(this, "data_filename")
  , dataFormat(this, "data_format", SpriteSheetDataFormat::Default)
  , filenameFormat(this, "filename_format")
  , tagnameFormat(this, "tagname_format")
  , borderPadding(this, "border_padding", 0)
  , shapePadding(this, "shape_padding", 0)
  , innerPadding(this, "inner_padding", 0)
  , trimSprite(this, "trim_sprite", false)
  , trim(this, "trim", false)
  , trimByGrid(this, "trim_by_grid", false)
  , extrude(this, "extrude", false)
  , mergeDuplicates(this, "merge_duplicates", false)
  , ignoreEmpty(this, "ignore_empty", false)
  , openGenerated(this, "open_generated", false)
  , layer(this, "layer")
  , layerIndex(this, "layer_index", -1)
  , frameTag(this, "frame_tag")
  , splitLayers(this, "split_layers", false)
  , splitTags(this, "split_tags", false)
  , splitGrid(this, "split_grid", false)
  , listLayers(this, "list_layers", true)
  , listFrameTags(this, "list_frame_tags", true)
  , listSlices(this, "list_slices", true)
{
}

void DocPref::SpriteSheet::load()
{
  load_option(defined);
  load_option(type);
  load_option(columns);
  load_option(rows);
  load_option(width);
  load_option(height);
  load_option(textureFilename);
  load_option(dataFilename);
  load_option(dataFormat);
  load_option(filenameFormat);
  load_option(tagnameFormat);
  load_option(borderPadding);
  load_option(shapePadding);
  load_option(innerPadding);
  load_option(trimSprite);
  load_option(trim);
  load_option(trimByGrid);
  load_option(extrude);
  load_option(mergeDuplicates);
  load_option(ignoreEmpty);
  load_option(openGenerated);
  load_option(layer);
  load_option(layerIndex);
  load_option(frameTag);
  load_option(splitLayers);
  load_option(splitTags);
  load_option(splitGrid);
  load_option(listLayers);
  load_option(listFrameTags);
  load_option(listSlices);
}

void DocPref::SpriteSheet::save()
{
  save_option(defined);
  save_option(type);
  save_option(columns);
  save_option(rows);
  save_option(width);
  save_option(height);
  save_option(textureFilename);
  save_option(dataFilename);
  save_option(dataFormat);
  save_option(filenameFormat);
  save_option(tagnameFormat);
  save_option(borderPadding);
  save_option(shapePadding);
  save_option(innerPadding);
  save_option(trimSprite);
  save_option(trim);
  save_option(trimByGrid);
  save_option(extrude);
  save_option(mergeDuplicates);
  save_option(ignoreEmpty);
  save_option(openGenerated);
  save_option(layer);
  save_option(layerIndex);
  save_option(frameTag);
  save_option(splitLayers);
  save_option(splitTags);
  save_option(splitGrid);
  save_option(listLayers);
  save_option(listFrameTags);
  save_option(listSlices);
}

Section* DocPref::SpriteSheet::section(const char* id)
{
  return nullptr;
}

OptionBase* DocPref::SpriteSheet::option(const char* id)
{
  if (std::strcmp(id, defined.id()) == 0) return &defined;
  if (std::strcmp(id, type.id()) == 0) return &type;
  if (std::strcmp(id, columns.id()) == 0) return &columns;
  if (std::strcmp(id, rows.id()) == 0) return &rows;
  if (std::strcmp(id, width.id()) == 0) return &width;
  if (std::strcmp(id, height.id()) == 0) return &height;
  if (std::strcmp(id, textureFilename.id()) == 0) return &textureFilename;
  if (std::strcmp(id, dataFilename.id()) == 0) return &dataFilename;
  if (std::strcmp(id, dataFormat.id()) == 0) return &dataFormat;
  if (std::strcmp(id, filenameFormat.id()) == 0) return &filenameFormat;
  if (std::strcmp(id, tagnameFormat.id()) == 0) return &tagnameFormat;
  if (std::strcmp(id, borderPadding.id()) == 0) return &borderPadding;
  if (std::strcmp(id, shapePadding.id()) == 0) return &shapePadding;
  if (std::strcmp(id, innerPadding.id()) == 0) return &innerPadding;
  if (std::strcmp(id, trimSprite.id()) == 0) return &trimSprite;
  if (std::strcmp(id, trim.id()) == 0) return &trim;
  if (std::strcmp(id, trimByGrid.id()) == 0) return &trimByGrid;
  if (std::strcmp(id, extrude.id()) == 0) return &extrude;
  if (std::strcmp(id, mergeDuplicates.id()) == 0) return &mergeDuplicates;
  if (std::strcmp(id, ignoreEmpty.id()) == 0) return &ignoreEmpty;
  if (std::strcmp(id, openGenerated.id()) == 0) return &openGenerated;
  if (std::strcmp(id, layer.id()) == 0) return &layer;
  if (std::strcmp(id, layerIndex.id()) == 0) return &layerIndex;
  if (std::strcmp(id, frameTag.id()) == 0) return &frameTag;
  if (std::strcmp(id, splitLayers.id()) == 0) return &splitLayers;
  if (std::strcmp(id, splitTags.id()) == 0) return &splitTags;
  if (std::strcmp(id, splitGrid.id()) == 0) return &splitGrid;
  if (std::strcmp(id, listLayers.id()) == 0) return &listLayers;
  if (std::strcmp(id, listFrameTags.id()) == 0) return &listFrameTags;
  if (std::strcmp(id, listSlices.id()) == 0) return &listSlices;
  return nullptr;
}

DocPref::ImportSpriteSheet::ImportSpriteSheet(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "import_sprite_sheet")
  , type(this, "type", app::SpriteSheetType::Rows)
  , bounds(this, "bounds", gfx::Rect(0, 0, 0, 0))
  , paddingEnabled(this, "padding_enabled", false)
  , paddingBounds(this, "padding_bounds", gfx::Size(0, 0))
  , partialTiles(this, "partial_tiles", false)
{
}

void DocPref::ImportSpriteSheet::load()
{
  load_option(type);
  load_option(bounds);
  load_option(paddingEnabled);
  load_option(paddingBounds);
  load_option(partialTiles);
}

void DocPref::ImportSpriteSheet::save()
{
  save_option(type);
  save_option(bounds);
  save_option(paddingEnabled);
  save_option(paddingBounds);
  save_option(partialTiles);
}

Section* DocPref::ImportSpriteSheet::section(const char* id)
{
  return nullptr;
}

OptionBase* DocPref::ImportSpriteSheet::option(const char* id)
{
  if (std::strcmp(id, type.id()) == 0) return &type;
  if (std::strcmp(id, bounds.id()) == 0) return &bounds;
  if (std::strcmp(id, paddingEnabled.id()) == 0) return &paddingEnabled;
  if (std::strcmp(id, paddingBounds.id()) == 0) return &paddingBounds;
  if (std::strcmp(id, partialTiles.id()) == 0) return &partialTiles;
  return nullptr;
}

DocPref::Preview::Preview(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "preview")
  , zoom(this, "zoom", 1.0)
  , scroll(this, "scroll")
  , autoScroll(this, "auto_scroll", true)
{
}

void DocPref::Preview::load()
{
  load_option(zoom);
  load_option(scroll);
  load_option(autoScroll);
}

void DocPref::Preview::save()
{
  save_option(zoom);
  save_option(scroll);
  save_option(autoScroll);
}

Section* DocPref::Preview::section(const char* id)
{
  return nullptr;
}

OptionBase* DocPref::Preview::option(const char* id)
{
  if (std::strcmp(id, zoom.id()) == 0) return &zoom;
  if (std::strcmp(id, scroll.id()) == 0) return &scroll;
  if (std::strcmp(id, autoScroll.id()) == 0) return &autoScroll;
  return nullptr;
}

DocPref::Show::Show(const std::string& name)
  : Section(std::string(!name.empty() ? name + ".": "") + "show")
  , layerEdges(this, "layer_edges", false)
  , selectionEdges(this, "selection_edges", true)
  , grid(this, "grid", false)
  , pixelGrid(this, "pixel_grid", false)
  , brushPreview(this, "brush_preview", true)
  , slices(this, "slices", true)
  , autoGuides(this, "auto_guides", true)
  , tileNumbers(this, "tile_numbers", true)
{
}

void DocPref::Show::load()
{
  load_option(layerEdges);
  load_option(selectionEdges);
  load_option(grid);
  load_option(pixelGrid);
  load_option(brushPreview);
  load_option(slices);
  load_option(autoGuides);
  load_option(tileNumbers);
}

void DocPref::Show::save()
{
  save_option(layerEdges);
  save_option(selectionEdges);
  save_option(grid);
  save_option(pixelGrid);
  save_option(brushPreview);
  save_option(slices);
  save_option(autoGuides);
  save_option(tileNumbers);
}

Section* DocPref::Show::section(const char* id)
{
  return nullptr;
}

OptionBase* DocPref::Show::option(const char* id)
{
  if (std::strcmp(id, layerEdges.id()) == 0) return &layerEdges;
  if (std::strcmp(id, selectionEdges.id()) == 0) return &selectionEdges;
  if (std::strcmp(id, grid.id()) == 0) return &grid;
  if (std::strcmp(id, pixelGrid.id()) == 0) return &pixelGrid;
  if (std::strcmp(id, brushPreview.id()) == 0) return &brushPreview;
  if (std::strcmp(id, slices.id()) == 0) return &slices;
  if (std::strcmp(id, autoGuides.id()) == 0) return &autoGuides;
  if (std::strcmp(id, tileNumbers.id()) == 0) return &tileNumbers;
  return nullptr;
}

} // namespace gen
} // namespace app
