// © 2026 Ueno Shingo. All Rights Reserved. Developed with Unreal Engine and C++.

#pragma once

#include "WeaponTypes.generated.h"

// 武器種別定義
UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	EWT_Pistol     UMETA(DisplayName = "Pistol"),           // ピストル
	EWT_Rifle      UMETA(DisplayName = "Rifle"),            // ライフル
	EWT_Shotgun    UMETA(DisplayName = "Shotgun"),          // ショットガン
	EWT_Grenade    UMETA(DisplayName = "Grenade Launcher"), // グレネードランチャー
	EWT_Melee      UMETA(DisplayName = "Melee"),            // 近接武器
	EWT_MAX        UMETA(Hidden)                            // 最大数（内部用）
};