#include "AttachmentRule.h"
#include "iw4/weapon.h"
#include <imgui/imgui.h>

AttachmentRule::AttachmentRule(const std::string& name)
    : m_allowed{ true }
    , m_name{ name }
    , m_translated{ TranslateWeaponAttachment(name) }
{
}

void AttachmentRule::drawAttachmentRule()
{
    ImGui::Checkbox(m_translated.c_str(), &m_allowed);
}
