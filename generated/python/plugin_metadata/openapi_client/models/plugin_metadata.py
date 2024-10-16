# coding: utf-8

"""
    Plugin Management API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

    The version of the OpenAPI document: 1.0.0
    Generated by OpenAPI Generator (https://openapi-generator.tech)

    Do not edit the class manually.
"""  # noqa: E501


from __future__ import annotations
import pprint
import re  # noqa: F401
import json

from datetime import datetime
from pydantic import BaseModel, ConfigDict, Field, StrictStr, field_validator
from typing import Any, ClassVar, Dict, List, Optional
from openapi_client.models.plugin_metadata_author import PluginMetadataAuthor
from typing import Optional, Set
from typing_extensions import Self

class PluginMetadata(BaseModel):
    """
    PluginMetadata
    """ # noqa: E501
    id: StrictStr = Field(description="Unique identifier for the plugin")
    version: StrictStr = Field(description="Version of the plugin, following semantic versioning")
    executable_file: StrictStr = Field(description="Path to the main executable file for the plugin", alias="executableFile")
    author: PluginMetadataAuthor
    inputs: Dict[str, Any] = Field(description="Input validation schema for the plugin")
    outputs: Optional[Dict[str, Any]] = Field(default=None, description="Expected output from the plugin")
    description: StrictStr = Field(description="Brief description of the plugin's functionality")
    status: StrictStr = Field(description="The current status of the plugin")
    created_at: datetime = Field(description="Timestamp when the plugin was first created", alias="createdAt")
    updated_at: datetime = Field(description="Timestamp when the plugin was last updated", alias="updatedAt")
    tags: Optional[List[StrictStr]] = Field(default=None, description="Tags associated with the plugin for easy categorization")
    thumbnail_url: Optional[StrictStr] = Field(default=None, description="URL of the thumbnail image", alias="thumbnailUrl")
    image_urls: Optional[List[StrictStr]] = Field(default=None, description="List of URLs for additional images", alias="imageUrls")
    __properties: ClassVar[List[str]] = ["id", "version", "executableFile", "author", "inputs", "outputs", "description", "status", "createdAt", "updatedAt", "tags", "thumbnailUrl", "imageUrls"]

    @field_validator('status')
    def status_validate_enum(cls, value):
        """Validates the enum"""
        if value not in set(['active', 'deprecated', 'pending']):
            raise ValueError("must be one of enum values ('active', 'deprecated', 'pending')")
        return value

    model_config = ConfigDict(
        populate_by_name=True,
        validate_assignment=True,
        protected_namespaces=(),
    )


    def to_str(self) -> str:
        """Returns the string representation of the model using alias"""
        return pprint.pformat(self.model_dump(by_alias=True))

    def to_json(self) -> str:
        """Returns the JSON representation of the model using alias"""
        # TODO: pydantic v2: use .model_dump_json(by_alias=True, exclude_unset=True) instead
        return json.dumps(self.to_dict())

    @classmethod
    def from_json(cls, json_str: str) -> Optional[Self]:
        """Create an instance of PluginMetadata from a JSON string"""
        return cls.from_dict(json.loads(json_str))

    def to_dict(self) -> Dict[str, Any]:
        """Return the dictionary representation of the model using alias.

        This has the following differences from calling pydantic's
        `self.model_dump(by_alias=True)`:

        * `None` is only added to the output dict for nullable fields that
          were set at model initialization. Other fields with value `None`
          are ignored.
        """
        excluded_fields: Set[str] = set([
        ])

        _dict = self.model_dump(
            by_alias=True,
            exclude=excluded_fields,
            exclude_none=True,
        )
        # override the default output from pydantic by calling `to_dict()` of author
        if self.author:
            _dict['author'] = self.author.to_dict()
        return _dict

    @classmethod
    def from_dict(cls, obj: Optional[Dict[str, Any]]) -> Optional[Self]:
        """Create an instance of PluginMetadata from a dict"""
        if obj is None:
            return None

        if not isinstance(obj, dict):
            return cls.model_validate(obj)

        _obj = cls.model_validate({
            "id": obj.get("id"),
            "version": obj.get("version"),
            "executableFile": obj.get("executableFile"),
            "author": PluginMetadataAuthor.from_dict(obj["author"]) if obj.get("author") is not None else None,
            "inputs": obj.get("inputs"),
            "outputs": obj.get("outputs"),
            "description": obj.get("description"),
            "status": obj.get("status"),
            "createdAt": obj.get("createdAt"),
            "updatedAt": obj.get("updatedAt"),
            "tags": obj.get("tags"),
            "thumbnailUrl": obj.get("thumbnailUrl"),
            "imageUrls": obj.get("imageUrls")
        })
        return _obj


