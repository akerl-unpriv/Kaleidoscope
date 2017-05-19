#pragma once

// System control mappings

#define Key_PowerDown (Key) { HID_SYSTEM_POWER_DOWN, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_Sleep (Key) { HID_SYSTEM_SLEEP, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_WakeUp (Key) { HID_SYSTEM_WAKE_UP, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_ContextMenu (Key) { HID_SYSTEM_CONTEXT_MENU, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_MainMenu (Key) { HID_SYSTEM_MAIN_MENU, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_AppMenu (Key) { HID_SYSTEM_APP_MENU, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_MenuHelp (Key) { HID_SYSTEM_MENU_HELP, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_MenuExit (Key) { HID_SYSTEM_MENU_EXIT, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_MenuSelect (Key) { HID_SYSTEM_MENU_SELECT, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_MenuRight (Key) { HID_SYSTEM_MENU_RIGHT, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_RTC
#define Key_MenuLeft (Key) { HID_SYSTEM_MENU_LEFT, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_RTC
#define Key_MenuUp (Key) { HID_SYSTEM_MENU_UP, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_RTC
#define Key_MenuDown (Key) { HID_SYSTEM_MENU_DOWN, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_RTC
#define Key_ColdRestart (Key) { HID_SYSTEM_COLD_RESTART, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_WarmRestart (Key) { HID_SYSTEM_WARM_RESTART, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_DPadUp (Key) { HID_D_PAD_UP, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OOC }
#define Key_DPadDown (Key) { HID_D_PAD_DOWN, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OOC }
#define Key_DPadRight (Key) { HID_D_PAD_RIGHT, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OOC }
#define Key_DPadLeft (Key) { HID_D_PAD_LEFT, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OOC }

#define Key_Dock (Key) { HID_SYSTEM_DOCK, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_Undock (Key) { HID_SYSTEM_UNDOCK, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_Setup (Key) { HID_SYSTEM_SETUP, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_Break (Key) { HID_SYSTEM_BREAK, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_DebuggerBreak (Key) { HID_SYSTEM_DEBUGGER_BREAK, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_ApplicationBreak (Key) { HID_APPLICATION_BREAK, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_ApplicationDebuggerBreak (Key) { HID_APPLICATION_DEBUGGER_BREAK | HID_TYPE_OSC }
#define Key_SpeakerMute (Key) { HID_SYSTEM_SPEAKER_MUTE, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_Hibernate (Key) { HID_SYSTEM_HIBERNATE, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }

#define Key_DisplayInvert (Key) { HID_SYSTEM_DISPLAY_INVERT, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_DisplayInternal (Key) { HID_SYSTEM_DISPLAY_INTERNAL, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_DisplayExternal (Key) { HID_SYSTEM_DISPLAY_EXTERNAL, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_DisplayBoth (Key) { HID_SYSTEM_DISPLAY_BOTH, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_DisplayDual (Key) { HID_SYSTEM_DISPLAY_DUAL, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_DisplayToggleIntSlashExt (Key) { HID_SYSTEM_DISPLAY_TOGGLE_INT_SLASH_EXT, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_DisplaySwapPrimarySlashSecondary (Key) { HID_SYSTEM_DISPLAY_SWAP_PRIMARY_SLASH_SECONDARY, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
#define Key_DisplayLCDAutoscale (Key) { HID_SYSTEM_DISPLAY_LCD_AUTOSCALE, KEY_FLAGS | SYNTHETIC|IS_SYSCTL | HID_TYPE_OSC }
