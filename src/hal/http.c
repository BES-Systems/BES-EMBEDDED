#include "bes/http.h"
#include "bes/log.h"

#include "esp_http_server.h"


static esp_err_t index_handler(
    httpd_req_t *req
)
{
    const char *html =
        "<html>"
        "<head><title>BES</title></head>"
        "<body>"
        "<h1>BES Embedded</h1>"
        "<p>System online</p>"
        "</body>"
        "</html>";


    httpd_resp_send(
        req,
        html,
        HTTPD_RESP_USE_STRLEN
    );


    return ESP_OK;
}



void bes_http_start(void)
{
    httpd_config_t config =
        HTTPD_DEFAULT_CONFIG();


    httpd_handle_t server = NULL;


    httpd_start(
        &server,
        &config
    );


    httpd_uri_t root =
    {
        .uri = "/",
        .method = HTTP_GET,
        .handler = index_handler,
        .user_ctx = NULL
    };


    httpd_register_uri_handler(
        server,
        &root
    );


    bes_log("HTTP server started");
}