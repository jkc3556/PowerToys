#pragma once
// Start the Tray Icon
void start_tray_icon();
// Open the Settings Window
void open_settings_window();
// Callback type to be called by the tray icon loop
typedef void(*main_loop_callback_function)(PVOID);
// Calls a callback in _callback
bool postmessage_on_ui_thread(main_loop_callback_function _callback, PVOID data);
