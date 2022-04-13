#include "SphereBuilder.h"
#include "AutomationAPI_CADObject.h"
#include "..\AppLibrary\Journaling_BlockBuilder.h"
#include <exception>

namespace AutomationAPI
{
	class SphereBuilderImpl
	{
	public:

		virtual ~SphereBuilderImpl();
		SphereBuilderImpl() = delete;

		SphereBuilderImpl(int guid);
		int m_guid;

	};
}

// ShpereBuiler constructor which can create 

AutomationAPI::SphereBuilder::SphereBuilder(int guid)
{
	m_sphereBuilderImpl = new AutomationAPI::SphereBuilderImpl(guid);
}

AutomationAPI::SphereBuilder::~SphereBuilder()
{
	delete m_sphereBuilderImpl;
}

AutomationAPI::SphereBuilderImpl::SphereBuilderImpl(int guid)
{
	m_guid = guid;
}

AutomationAPI::SphereBuilderImpl::~SphereBuilderImpl()
{

}


AutomationAPI::SphereBuilder* AutomationAPI::SphereBuilder::CreateSphereBuilder(int guid)
{
	// We should check the guid being passed in, as this is public
	// but that is for another day

	return new AutomationAPI::SphereBuilder(guid);
}

AutomationAPI::CADObject* AutomationAPI::SphereBuilder::Commit()
{
	return nullptr;
}

void AutomationAPI::SphereBuilder::SetType(AutomationAPI::SphereBuilder::SphereBuilderTypes type)
{
	

}

AutomationAPI::SphereBuilder::SphereBuilderTypes AutomationAPI::SphereBuilder::GetType()
{
	
}

void AutomationAPI::SphereBuilder::SetRadius(int h)
{
}

int AutomationAPI::SphereBuilder::GetRadius()
{
	return 0;
}


void AutomationAPI::SphereBuilder::SetCentre(int x, int y, int z)
{
}

void AutomationAPI::SphereBuilder::GetCentre()
{
}
