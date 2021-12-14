#include </home/adryzz/Hokaku/external/obs-studio/libobs/obs-module.c>

#define MODULE_ID "hokaku"
#define MODULE_NAME "Hokaku"

OBS_DECLARE_MODULE()

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
    .icon_type = OBS_ICON_TYPE_CAMERA,
};

bool obs_module_load(void)
{
    blog(LOG_INFO, "plugin loaded successfully");
    obs_register_source(&hokaku_output);
    blog(LOG_INFO, "source registered successfully");
    return true;
}

void obs_module_unload(void)
{
    blog(LOG_INFO, "plugin unloaded");
}
