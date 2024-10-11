# PluginMetadata


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name_tag** | **str** | Unique identifier for the plugin | 
**version** | **str** | Version of the plugin, following semantic versioning | 
**executable_file** | **str** | Path to the main executable file for the plugin | 
**author** | [**PluginMetadataAuthor**](PluginMetadataAuthor.md) |  | 
**inputs** | **Dict[str, object]** | Input validation schema for the plugin | 
**outputs** | **Dict[str, object]** | Output structure for the plugin | [optional] 
**description** | **str** | Brief description of the plugin&#39;s functionality | 

## Example

```python
from openapi_client.models.plugin_metadata import PluginMetadata

# TODO update the JSON string below
json = "{}"
# create an instance of PluginMetadata from a JSON string
plugin_metadata_instance = PluginMetadata.from_json(json)
# print the JSON string representation of the object
print(PluginMetadata.to_json())

# convert the object into a dict
plugin_metadata_dict = plugin_metadata_instance.to_dict()
# create an instance of PluginMetadata from a dict
plugin_metadata_from_dict = PluginMetadata.from_dict(plugin_metadata_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


