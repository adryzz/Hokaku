#include <obs-module.h>

#define MODULE_ID "hokaku"
#define MODULE_NAME "Hokaku"
#define PIPE_NAME "hokaku-input"

OBS_DECLARE_MODULE()
OBS_MODULE_USE_DEFAULT_LOCALE("hokaku", "en-US")

static void* output_create(obs_data_t* settings, obs_source_t* context)
{
    UNUSED_PARAMETER(settings);
	UNUSED_PARAMETER(context);
}

static void output_destroy(void* data)
{
	UNUSED_PARAMETER(data);
}

struct obs_source_info hokaku_output = 
{
    .id = MODULE_ID,
    .type = OBS_SOURCE_TYPE_INPUT,
    .output_flags = OBS_SOURCE_ASYNC_VIDEO | OBS_SOURCE_DO_NOT_DUPLICATE,
    .get_name = MODULE_NAME,
    .create = output_create,
    .destroy = output_destroy,
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
