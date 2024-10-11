# openapi_client.DefaultApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**plugin_metadata_get**](DefaultApi.md#plugin_metadata_get) | **GET** /plugin-metadata | Get plugin metadata


# **plugin_metadata_get**
> PluginMetadata plugin_metadata_get()

Get plugin metadata

### Example


```python
import openapi_client
from openapi_client.models.plugin_metadata import PluginMetadata
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to http://localhost
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.DefaultApi(api_client)

    try:
        # Get plugin metadata
        api_response = api_instance.plugin_metadata_get()
        print("The response of DefaultApi->plugin_metadata_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling DefaultApi->plugin_metadata_get: %s\n" % e)
```



### Parameters

This endpoint does not need any parameter.

### Return type

[**PluginMetadata**](PluginMetadata.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Returns plugin metadata |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

