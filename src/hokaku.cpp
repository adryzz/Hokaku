#include <obs-module.h>
//#include <boost/interprocess/shared_memory_object.hpp>
//#include <boost/interprocess/mapped_region.hpp>

#define MODULE_ID "hokaku"
#define MODULE_NAME "Hokaku"
#define SHMEM_NAME "hokaku-input"

OBS_DECLARE_MODULE()
OBS_MODULE_USE_DEFAULT_LOCALE("hokaku", "en-US")

//using boost::interprocess;

//shared_memory_object shmem;

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
    .icon_type = OBS_ICON_TYPE_CAMERA,
    .create = output_create,
    .destroy = output_destroy,
);

bool obs_module_load(void)
{
    obs_register_source(&hokaku_output);
    
    //shmem = (create_only, SHMEM_NAME, read_write);
    
    return true;
}

void obs_module_unload(void)
{
    //shared_memory_object::remove(SHMEM_NAME);
}
