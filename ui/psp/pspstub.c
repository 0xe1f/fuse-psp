#include "fuse.h"
#include "ui/ui.h"

/**************************/
/* STUB functions         */
/**************************/
void menu_machine_pause( int action )
{
}

char *ui_get_save_filename(const char *title)
{
  return NULL;
}

int ui_menu_item_set_active(const char *path, int active)
{
  return 1;
}

#ifdef USE_LIBPNG
void menu_file_movies_recordmovieaspng( int action )
{
}

void menu_file_savescreenaspng( int action )
{
}
#endif

void menu_file_loadbinarydata( int action )
{
}

void menu_file_savebinarydata( int action )
{
}

int ui_mouse_grab( int startup )
{
  return 0;
}

int ui_mouse_release( int suspend )
{
  return 0;
}

int ui_tape_browser_update(ui_tape_browser_update_type change,
                           libspectrum_tape_block *block)
{
  return 0;
}

ui_confirm_save_t ui_confirm_save_specific(const char *message)
{
  return UI_CONFIRM_SAVE_CANCEL;
}

ui_confirm_joystick_t ui_confirm_joystick(libspectrum_joystick libspectrum_type, int inputs)
{
  return UI_CONFIRM_JOYSTICK_NONE;
}

int ui_widgets_reset()
{
  return 0;
}

int ui_get_rollback_point(GSList *points)
{
  return -1;
}

int ui_error_specific(ui_error_level severity, const char *message) 
{
#ifdef PSP_DEBUG
  FILE *err_file = fopen("errors.txt", "a");
  switch( severity ) 
  {
  case UI_ERROR_INFO: break;    /* Shouldn't happen */
  case UI_ERROR_WARNING: fprintf( err_file, "warning: " ); break;
  case UI_ERROR_ERROR: fprintf( err_file, "error: " ); break;
  }
  fprintf(err_file, message);
  fclose(err_file);
#endif
  return 0;
}

int
ui_statusbar_update( ui_statusbar_item item, ui_statusbar_state state )
{
  return 0;
}

char*
ui_get_open_filename( const char *title )
{
  /* No filename */
  return NULL;
}

