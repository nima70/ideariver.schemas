/**
 * Topic Mapping API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.9.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * TopicMapping_topics.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_TopicMapping_topics_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_TopicMapping_topics_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  TopicMapping_topics
    : public ModelBase
{
public:
    TopicMapping_topics();
    virtual ~TopicMapping_topics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TopicMapping_topics members

    /// <summary>
    /// The queue where tasks are submitted
    /// </summary>
    utility::string_t getTaskQueue() const;
    bool taskQueueIsSet() const;
    void unsetTaskQueue();

    void setTaskQueue(const utility::string_t& value);

    /// <summary>
    /// The queue where responses to tasks are sent
    /// </summary>
    utility::string_t getResponseQueue() const;
    bool responseQueueIsSet() const;
    void unsetResponseQueue();

    void setResponseQueue(const utility::string_t& value);


protected:
    utility::string_t m_TaskQueue;
    bool m_TaskQueueIsSet;
    utility::string_t m_ResponseQueue;
    bool m_ResponseQueueIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_TopicMapping_topics_H_ */
