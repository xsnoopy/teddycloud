#ifndef _HANDLER_API_H
#define _HANDLER_API_H

#include "debug.h"

#include "core/net.h"
#include "core/ethernet.h"
#include "core/ip.h"
#include "core/tcp.h"
#include "http/http_server.h"
#include "http/http_server_misc.h"

#include "handler.h"

typedef struct
{
    const char *overlay;
    const char *root_path;
    char *filename;
    FsFile *file;
} file_save_ctx;

void stats_update(const char *item, int count);

error_t handleApiUploadCert(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *ctx);
error_t handleApiUploadFirmware(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *ctx);
error_t handleApiPatchFirmware(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *ctx);
error_t handleApiStats(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *ctx);
error_t handleApiGetIndex(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *ctx);
error_t handleApiGetBoxes(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *ctx);
error_t handleApiGet(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *ctx);
error_t handleApiSet(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *ctx);
error_t handleApiTrigger(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *ctx);
error_t handleApiFileIndex(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *ctx);
error_t handleApiFileIndexV2(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *ctx);
error_t handleApiFileUpload(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *ctx);
error_t handleApiDirectoryCreate(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *ctx);
error_t handleApiFileDelete(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *ctx);
error_t handleApiDirectoryDelete(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *ctx);
error_t handleApiAssignUnknown(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *client_ctx);
error_t handleApiPcmUpload(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *client_ctx);
error_t handleApiContent(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *client_ctx);
error_t handleApiContentDownload(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *client_ctx);
error_t handleApiToniesJson(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *client_ctx);
error_t handleApiToniesJsonUpdate(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *client_ctx);
error_t handleApiToniesCustomJson(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *client_ctx);
error_t handleApiToniesJsonSearch(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *client_ctx);
error_t handleApiContentJson(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *client_ctx);
error_t handleApiContentJsonGet(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *client_ctx);
error_t handleApiContentJsonSet(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *client_ctx);
error_t handleApiTagIndex(HttpConnection *connection, const char_t *uri, const char_t *queryString, client_ctx_t *client_ctx);

#endif