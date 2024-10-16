/* tslint:disable */
/* eslint-disable */
/**
 * Plugin Management API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { mapValues } from '../runtime';
/**
 * 
 * @export
 * @interface PluginsIdImagesThumbnailPutRequest
 */
export interface PluginsIdImagesThumbnailPutRequest {
    /**
     * URL of the thumbnail image
     * @type {string}
     * @memberof PluginsIdImagesThumbnailPutRequest
     */
    thumbnailUrl?: string;
}

/**
 * Check if a given object implements the PluginsIdImagesThumbnailPutRequest interface.
 */
export function instanceOfPluginsIdImagesThumbnailPutRequest(value: object): value is PluginsIdImagesThumbnailPutRequest {
    return true;
}

export function PluginsIdImagesThumbnailPutRequestFromJSON(json: any): PluginsIdImagesThumbnailPutRequest {
    return PluginsIdImagesThumbnailPutRequestFromJSONTyped(json, false);
}

export function PluginsIdImagesThumbnailPutRequestFromJSONTyped(json: any, ignoreDiscriminator: boolean): PluginsIdImagesThumbnailPutRequest {
    if (json == null) {
        return json;
    }
    return {
        
        'thumbnailUrl': json['thumbnailUrl'] == null ? undefined : json['thumbnailUrl'],
    };
}

  export function PluginsIdImagesThumbnailPutRequestToJSON(json: any): PluginsIdImagesThumbnailPutRequest {
      return PluginsIdImagesThumbnailPutRequestToJSONTyped(json, false);
  }

  export function PluginsIdImagesThumbnailPutRequestToJSONTyped(value?: PluginsIdImagesThumbnailPutRequest | null, ignoreDiscriminator: boolean = false): any {
    if (value == null) {
        return value;
    }

    return {
        
        'thumbnailUrl': value['thumbnailUrl'],
    };
}

