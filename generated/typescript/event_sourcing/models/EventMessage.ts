/* tslint:disable */
/* eslint-disable */
/**
 * Event Sourcing API
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
 * @interface EventMessage
 */
export interface EventMessage {
    /**
     * Unique identifier for the event
     * @type {string}
     * @memberof EventMessage
     */
    eventId: string;
    /**
     * ID of the entity (aggregate) that this event relates to
     * @type {string}
     * @memberof EventMessage
     */
    aggregateId: string;
    /**
     * Type of the aggregate, e.g., 'plugin', 'user', etc.
     * @type {string}
     * @memberof EventMessage
     */
    aggregateType?: string;
    /**
     * Version of the aggregate's state after this event
     * @type {number}
     * @memberof EventMessage
     */
    version: number;
    /**
     * Type of the event, e.g., 'PLUGIN_RUN', 'USER_ACTION'
     * @type {string}
     * @memberof EventMessage
     */
    eventType: string;
    /**
     * Version of the event schema
     * @type {string}
     * @memberof EventMessage
     */
    eventSchemaVersion: string;
    /**
     * Origin or source of the event, typically the service name
     * @type {string}
     * @memberof EventMessage
     */
    source: string;
    /**
     * ISO 8601 timestamp for when the event occurred
     * @type {Date}
     * @memberof EventMessage
     */
    timestamp: Date;
    /**
     * Data related to the event, this varies depending on event type
     * @type {{ [key: string]: any; }}
     * @memberof EventMessage
     */
    payload: { [key: string]: any; };
    /**
     * ID of the user initiating the event
     * @type {string}
     * @memberof EventMessage
     */
    userId?: string;
}

/**
 * Check if a given object implements the EventMessage interface.
 */
export function instanceOfEventMessage(value: object): value is EventMessage {
    if (!('eventId' in value) || value['eventId'] === undefined) return false;
    if (!('aggregateId' in value) || value['aggregateId'] === undefined) return false;
    if (!('version' in value) || value['version'] === undefined) return false;
    if (!('eventType' in value) || value['eventType'] === undefined) return false;
    if (!('eventSchemaVersion' in value) || value['eventSchemaVersion'] === undefined) return false;
    if (!('source' in value) || value['source'] === undefined) return false;
    if (!('timestamp' in value) || value['timestamp'] === undefined) return false;
    if (!('payload' in value) || value['payload'] === undefined) return false;
    return true;
}

export function EventMessageFromJSON(json: any): EventMessage {
    return EventMessageFromJSONTyped(json, false);
}

export function EventMessageFromJSONTyped(json: any, ignoreDiscriminator: boolean): EventMessage {
    if (json == null) {
        return json;
    }
    return {
        
        'eventId': json['event_id'],
        'aggregateId': json['aggregate_id'],
        'aggregateType': json['aggregate_type'] == null ? undefined : json['aggregate_type'],
        'version': json['version'],
        'eventType': json['event_type'],
        'eventSchemaVersion': json['event_schema_version'],
        'source': json['source'],
        'timestamp': (new Date(json['timestamp'])),
        'payload': json['payload'],
        'userId': json['user_id'] == null ? undefined : json['user_id'],
    };
}

  export function EventMessageToJSON(json: any): EventMessage {
      return EventMessageToJSONTyped(json, false);
  }

  export function EventMessageToJSONTyped(value?: EventMessage | null, ignoreDiscriminator: boolean = false): any {
    if (value == null) {
        return value;
    }

    return {
        
        'event_id': value['eventId'],
        'aggregate_id': value['aggregateId'],
        'aggregate_type': value['aggregateType'],
        'version': value['version'],
        'event_type': value['eventType'],
        'event_schema_version': value['eventSchemaVersion'],
        'source': value['source'],
        'timestamp': ((value['timestamp']).toISOString()),
        'payload': value['payload'],
        'user_id': value['userId'],
    };
}

