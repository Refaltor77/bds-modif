#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::Leaves2 {
// NOLINTBEGIN
// symbol: ?get@Leaves2@FlatteningUtils@@YA?AUInstance@2@XZ
MCAPI struct FlatteningUtils::Instance get();

// symbol: ?getComplexAliasCallback@Leaves2@FlatteningUtils@@YA?AV?$function@$$A6APEBVBlock@@H@Z@std@@XZ
MCAPI std::function<class Block const*(int)> getComplexAliasCallback();
// NOLINTEND

}; // namespace FlatteningUtils::Leaves2
