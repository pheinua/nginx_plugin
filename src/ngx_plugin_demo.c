#include <nginx.h>

#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>

ngx_module_t ngx_plugin_demo;

static ngx_int_t ngx_plugin_demo_handler(ngx_http_request_t *req)
{
  return NGX_DECLINED;
}

static ngx_int_t ngx_plugin_demo_init(ngx_conf_t *conf)
{
  return NGX_OK;
}

static ngx_http_module_t ngx_plugin_demo_ctx = {
  NULL, ngx_plugin_demo_init, NULL, NULL, NULL, NULL, NULL, NULL
};

ngx_module_t ngx_plugin_demo = {
  NGX_MODULE_V1,
  &ngx_plugin_demo_ctx,
  NULL,
  NGX_HTTP_MODULE,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NGX_MODULE_V1_PADDING
};
