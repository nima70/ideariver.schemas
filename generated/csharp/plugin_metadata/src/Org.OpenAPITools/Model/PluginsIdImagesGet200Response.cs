/*
 * Plugin Management API
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
    /// PluginsIdImagesGet200Response
    /// </summary>
    [DataContract(Name = "_plugins__id__images_get_200_response")]
    public partial class PluginsIdImagesGet200Response : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PluginsIdImagesGet200Response" /> class.
        /// </summary>
        /// <param name="thumbnailUrl">URL of the thumbnail image.</param>
        /// <param name="imageUrls">List of image URLs.</param>
        public PluginsIdImagesGet200Response(string thumbnailUrl = default(string), List<string> imageUrls = default(List<string>))
        {
            this.ThumbnailUrl = thumbnailUrl;
            this.ImageUrls = imageUrls;
        }

        /// <summary>
        /// URL of the thumbnail image
        /// </summary>
        /// <value>URL of the thumbnail image</value>
        [DataMember(Name = "thumbnailUrl", EmitDefaultValue = false)]
        public string ThumbnailUrl { get; set; }

        /// <summary>
        /// List of image URLs
        /// </summary>
        /// <value>List of image URLs</value>
        [DataMember(Name = "imageUrls", EmitDefaultValue = false)]
        public List<string> ImageUrls { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class PluginsIdImagesGet200Response {\n");
            sb.Append("  ThumbnailUrl: ").Append(ThumbnailUrl).Append("\n");
            sb.Append("  ImageUrls: ").Append(ImageUrls).Append("\n");
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
