#include <obs-module.h>

OBS_DECLARE_MODULE()
OBS_MODULE_USE_DEFAULT_LOCALE("hokaku", "en-US")

bool obs_module_load(void)
{
  //TODO: Initialize named pipe and source
}

void obs_module_unload(void)
{
  //TODO: Notify app that it has been unloaded
}
