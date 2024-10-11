/* tslint:disable */
/* eslint-disable */
/**
 * Topic Mapping API
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
 * @interface TopicMappingTopics
 */
export interface TopicMappingTopics {
    /**
     * The queue where tasks are submitted
     * @type {string}
     * @memberof TopicMappingTopics
     */
    tASKQUEUE?: string;
    /**
     * The queue where responses to tasks are sent
     * @type {string}
     * @memberof TopicMappingTopics
     */
    rESPONSEQUEUE?: string;
}

/**
 * Check if a given object implements the TopicMappingTopics interface.
 */
export function instanceOfTopicMappingTopics(value: object): value is TopicMappingTopics {
    return true;
}

export function TopicMappingTopicsFromJSON(json: any): TopicMappingTopics {
    return TopicMappingTopicsFromJSONTyped(json, false);
}

export function TopicMappingTopicsFromJSONTyped(json: any, ignoreDiscriminator: boolean): TopicMappingTopics {
    if (json == null) {
        return json;
    }
    return {
        
        'tASKQUEUE': json['TASK_QUEUE'] == null ? undefined : json['TASK_QUEUE'],
        'rESPONSEQUEUE': json['RESPONSE_QUEUE'] == null ? undefined : json['RESPONSE_QUEUE'],
    };
}

  export function TopicMappingTopicsToJSON(json: any): TopicMappingTopics {
      return TopicMappingTopicsToJSONTyped(json, false);
  }

  export function TopicMappingTopicsToJSONTyped(value?: TopicMappingTopics | null, ignoreDiscriminator: boolean = false): any {
    if (value == null) {
        return value;
    }

    return {
        
        'TASK_QUEUE': value['tASKQUEUE'],
        'RESPONSE_QUEUE': value['rESPONSEQUEUE'],
    };
}

