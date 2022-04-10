#include "ClientTheme.h"
ClientTheme::ClientTheme() : IModule(0, Category::VISUAL, "Go for a retro style or streamline.") {
	registerEnumSetting("Client Theme", &Theme, 0);
	Theme = SettingEnum(this)
				.addEntry(EnumEntry("Current", 0))
				.addEntry(EnumEntry("Legacy", 1));
}
ClientTheme::~ClientTheme() {
}
const char* ClientTheme::getModuleName() {
	return ("ClientTheme");
}
//kek.club+ on top hoes mad