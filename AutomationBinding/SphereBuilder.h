#pragma once


#pragma once
#include "AutomationBindingExports.h"
#include "AutomationAPI_IBuilder.h"

namespace AutomationAPI
{
	class CADObject;
	class SphereBuilder;
	class SphereBuilderImpl;
	/// <summary>
	/// Sphere Builder comment
	/// </summary>
	class AUTOMATIONBINDING_API SphereBuilder : public IBuilder
	{
	public:
		enum SphereBuilderTypes
		{
			TypesCentreAndRadiusLength, /** Represents the sphere created by providing Centre and Radius Length. */
			TypesDiameterOrigins,  /** Represents the sphere created by providing Diameter Coordinates. */
		};

		/** set type of builder class
		Input: ShpereBuilderTypes 
		**/ 
		void SetType(SphereBuilderTypes type);
		SphereBuilderTypes GetType();


		/*
		* set radius of sphere *
		* Input: takes h as input *
		*/ 
		void SetRadius(int h);

		/*
		* get radius of sphere *
		* returns integer output *
		*/ 
		int GetRadius();

		/*
		*  set the coordinates of centre *
		* Input: x, y and z. 3d coordinates *
		*/ 
		void SetCentre(int x, int y, int z);

		/*
		* get centre of sphere *
		* Input: takes centre as input 
		*/
		void GetCentre();

		/**  commit changes **/
		CADObject* Commit() override;

		/*
		* Internal Usage only.
		*/
		static SphereBuilder* CreateSphereBuilder(int guid);
		virtual ~SphereBuilder();
		SphereBuilder() = delete;

	private:

		SphereBuilder(int guid);
		SphereBuilderImpl* m_sphereBuilderImpl;

	};
}


