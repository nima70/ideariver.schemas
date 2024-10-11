/*
 * Topic Mapping API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.IO;
using System.Runtime.Serialization;
using System.Text;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using Newtonsoft.Json.Linq;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// TopicMappingTopics
    /// </summary>
    [DataContract(Name = "TopicMapping_topics")]
    public partial class TopicMappingTopics : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="TopicMappingTopics" /> class.
        /// </summary>
        /// <param name="taskQueue">The queue where tasks are submitted.</param>
        /// <param name="responseQueue">The queue where responses to tasks are sent.</param>
        public TopicMappingTopics(string taskQueue = default(string), string responseQueue = default(string))
        {
            this.TaskQueue = taskQueue;
            this.ResponseQueue = responseQueue;
        }

        /// <summary>
        /// The queue where tasks are submitted
        /// </summary>
        /// <value>The queue where tasks are submitted</value>
        [DataMember(Name = "taskQueue", EmitDefaultValue = false)]
        public string TaskQueue { get; set; }

        /// <summary>
        /// The queue where responses to tasks are sent
        /// </summary>
        /// <value>The queue where responses to tasks are sent</value>
        [DataMember(Name = "responseQueue", EmitDefaultValue = false)]
        public string ResponseQueue { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class TopicMappingTopics {\n");
            sb.Append("  TaskQueue: ").Append(TaskQueue).Append("\n");
            sb.Append("  ResponseQueue: ").Append(ResponseQueue).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
