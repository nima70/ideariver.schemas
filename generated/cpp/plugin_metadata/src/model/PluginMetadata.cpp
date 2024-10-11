/**
 * Plugin Metadata API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.9.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/PluginMetadata.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



PluginMetadata::PluginMetadata()
{
    m_NameTag = utility::conversions::to_string_t("");
    m_NameTagIsSet = false;
    m_Version = utility::conversions::to_string_t("");
    m_VersionIsSet = false;
    m_ExecutableFile = utility::conversions::to_string_t("");
    m_ExecutableFileIsSet = false;
    m_AuthorIsSet = false;
    m_InputsIsSet = false;
    m_OutputsIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
}

PluginMetadata::~PluginMetadata()
{
}

void PluginMetadata::validate()
{
    // TODO: implement validation
}

web::json::value PluginMetadata::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameTagIsSet)
    {
        val[utility::conversions::to_string_t(U("nameTag"))] = ModelBase::toJson(m_NameTag);
    }
    if(m_VersionIsSet)
    {
        val[utility::conversions::to_string_t(U("version"))] = ModelBase::toJson(m_Version);
    }
    if(m_ExecutableFileIsSet)
    {
        val[utility::conversions::to_string_t(U("executableFile"))] = ModelBase::toJson(m_ExecutableFile);
    }
    if(m_AuthorIsSet)
    {
        val[utility::conversions::to_string_t(U("author"))] = ModelBase::toJson(m_Author);
    }
    if(m_InputsIsSet)
    {
        val[utility::conversions::to_string_t(U("inputs"))] = ModelBase::toJson(m_Inputs);
    }
    if(m_OutputsIsSet)
    {
        val[utility::conversions::to_string_t(U("outputs"))] = ModelBase::toJson(m_Outputs);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }

    return val;
}

bool PluginMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("nameTag"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("nameTag")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setNameTag;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNameTag);
            setNameTag(refVal_setNameTag);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("version"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("version")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setVersion;
            ok &= ModelBase::fromJson(fieldValue, refVal_setVersion);
            setVersion(refVal_setVersion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("executableFile"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("executableFile")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setExecutableFile;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExecutableFile);
            setExecutableFile(refVal_setExecutableFile);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("author"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("author")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PluginMetadata_author> refVal_setAuthor;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAuthor);
            setAuthor(refVal_setAuthor);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("inputs"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("inputs")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::shared_ptr<AnyType>> refVal_setInputs;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInputs);
            setInputs(refVal_setInputs);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("outputs"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("outputs")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::shared_ptr<AnyType>> refVal_setOutputs;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOutputs);
            setOutputs(refVal_setOutputs);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDescription);
            setDescription(refVal_setDescription);
        }
    }
    return ok;
}

void PluginMetadata::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_NameTagIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("nameTag")), m_NameTag));
    }
    if(m_VersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("version")), m_Version));
    }
    if(m_ExecutableFileIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("executableFile")), m_ExecutableFile));
    }
    if(m_AuthorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("author")), m_Author));
    }
    if(m_InputsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inputs")), m_Inputs));
    }
    if(m_OutputsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("outputs")), m_Outputs));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
}

bool PluginMetadata::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("nameTag"))))
    {
        utility::string_t refVal_setNameTag;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("nameTag"))), refVal_setNameTag );
        setNameTag(refVal_setNameTag);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("version"))))
    {
        utility::string_t refVal_setVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("version"))), refVal_setVersion );
        setVersion(refVal_setVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("executableFile"))))
    {
        utility::string_t refVal_setExecutableFile;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("executableFile"))), refVal_setExecutableFile );
        setExecutableFile(refVal_setExecutableFile);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("author"))))
    {
        std::shared_ptr<PluginMetadata_author> refVal_setAuthor;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("author"))), refVal_setAuthor );
        setAuthor(refVal_setAuthor);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("inputs"))))
    {
        std::map<utility::string_t, std::shared_ptr<AnyType>> refVal_setInputs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inputs"))), refVal_setInputs );
        setInputs(refVal_setInputs);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("outputs"))))
    {
        std::map<utility::string_t, std::shared_ptr<AnyType>> refVal_setOutputs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("outputs"))), refVal_setOutputs );
        setOutputs(refVal_setOutputs);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    return ok;
}

utility::string_t PluginMetadata::getNameTag() const
{
    return m_NameTag;
}

void PluginMetadata::setNameTag(const utility::string_t& value)
{
    m_NameTag = value;
    m_NameTagIsSet = true;
}

bool PluginMetadata::nameTagIsSet() const
{
    return m_NameTagIsSet;
}

void PluginMetadata::unsetNameTag()
{
    m_NameTagIsSet = false;
}
utility::string_t PluginMetadata::getVersion() const
{
    return m_Version;
}

void PluginMetadata::setVersion(const utility::string_t& value)
{
    m_Version = value;
    m_VersionIsSet = true;
}

bool PluginMetadata::versionIsSet() const
{
    return m_VersionIsSet;
}

void PluginMetadata::unsetVersion()
{
    m_VersionIsSet = false;
}
utility::string_t PluginMetadata::getExecutableFile() const
{
    return m_ExecutableFile;
}

void PluginMetadata::setExecutableFile(const utility::string_t& value)
{
    m_ExecutableFile = value;
    m_ExecutableFileIsSet = true;
}

bool PluginMetadata::executableFileIsSet() const
{
    return m_ExecutableFileIsSet;
}

void PluginMetadata::unsetExecutableFile()
{
    m_ExecutableFileIsSet = false;
}
std::shared_ptr<PluginMetadata_author> PluginMetadata::getAuthor() const
{
    return m_Author;
}

void PluginMetadata::setAuthor(const std::shared_ptr<PluginMetadata_author>& value)
{
    m_Author = value;
    m_AuthorIsSet = true;
}

bool PluginMetadata::authorIsSet() const
{
    return m_AuthorIsSet;
}

void PluginMetadata::unsetAuthor()
{
    m_AuthorIsSet = false;
}
std::map<utility::string_t, std::shared_ptr<AnyType>>& PluginMetadata::getInputs()
{
    return m_Inputs;
}

void PluginMetadata::setInputs(const std::map<utility::string_t, std::shared_ptr<AnyType>>& value)
{
    m_Inputs = value;
    m_InputsIsSet = true;
}

bool PluginMetadata::inputsIsSet() const
{
    return m_InputsIsSet;
}

void PluginMetadata::unsetInputs()
{
    m_InputsIsSet = false;
}
std::map<utility::string_t, std::shared_ptr<AnyType>>& PluginMetadata::getOutputs()
{
    return m_Outputs;
}

void PluginMetadata::setOutputs(const std::map<utility::string_t, std::shared_ptr<AnyType>>& value)
{
    m_Outputs = value;
    m_OutputsIsSet = true;
}

bool PluginMetadata::outputsIsSet() const
{
    return m_OutputsIsSet;
}

void PluginMetadata::unsetOutputs()
{
    m_OutputsIsSet = false;
}
utility::string_t PluginMetadata::getDescription() const
{
    return m_Description;
}

void PluginMetadata::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool PluginMetadata::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void PluginMetadata::unsetDescription()
{
    m_DescriptionIsSet = false;
}
}
}
}
}


