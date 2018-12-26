#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
//#include  "WCSaveGameArchive.generated.h"
/**
 * Save Game Archiver.
 */
struct FWCSaveGameArchive : public FObjectAndNameAsStringProxyArchive
{
	FWCSaveGameArchive(FArchive& InInnerArchive)
		: FObjectAndNameAsStringProxyArchive(InInnerArchive, true)
	{
		ArIsSaveGame = true;
		ArNoDelta = true; // Optional, useful when saving/loading variables without resetting the level.
						  // Serialize variables even if weren't modified and mantain their default values.
	}
};
// ArlsSaveGame = true 설정하면
// UPROPERTY()에 SaveGame 태그를 지정하여 저장해야함
// 이것은 클래스나 구조체의 계산되거나 임시 변수 저장을 Skip하게 해줌

