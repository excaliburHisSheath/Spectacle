#pragma once

#include <Entity/System.h>

namespace Spectacle
{
	struct FollowTargetLinearSystem : public Gunship::System< FollowTargetLinearSystem, Gunship::BehaviorSystemBase >
	{
		void Update( Gunship::Scene& scene,
		             float delta ) override;
	};
}
