#include <obs-module.h>

OBS_DECLARE_MODULE()
OBS_MODULE_USE_DEFAULT_LOCALE("hokaku", "en-US")

static void* output_create(obs_data_t* settings, obs_source_t* context)
{
}

static void output_destroy(void* data)
{
}

static void output_defaults(obs_data_t *settings)
{
}

obs_source_info hokaku_output = (hokaku_output = obs_source_info(),
    hokaku_output.id = "hokaku",
    hokaku_output.type = OBS_SOURCE_TYPE_INPUT,
    hokaku_output.output_flags = OBS_SOURCE_ASYNC_VIDEO | OBS_SOURCE_DO_NOT_DUPLICATE,
    hokaku_output.get_name = "Hokaku",
    hokaku_output.create = output_create,
    hokaku_output.destroy = output_destroy,
    hokaku_output.get_defaults = output_defaults,
    hokaku_output
);

bool obs_module_load(void)
{
    obs_register_source(&hokaku_output);

    return true;
  //TODO: Initialize named pipe
}

void obs_module_unload(void)
{
  //TODO: Notify app that it has been unloaded
}
