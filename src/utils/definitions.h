#ifndef DEFINITIONS_H
#define DEFINITIONS_H

// ---- TEXTURAS ----
#define TextureAirplane 0
#define TextureCarrier 1
#define TextureIsland 2
#define TextureBullet 3
#define TextureSoldier 4
#define TextureTurretBase 5
#define TextureTurretGun 6
#define TextureEnemyBullet 7
#define TextureEnemy 8
#define TextureEnemyKamikaze 9
#define TextureEnemyBoss 10
#define TexturePortraitPlayer 11
#define TexturePortraitCommander 12
#define TexturePortraitSoldier 13
#define TexturePortraitBoss 14
#define TextureDialog 15

// ---- REGIONES ----
#define RegionAirplane 0
#define RegionAirplaneShadow 2
#define RegionCarrier 0
#define RegionIsland 0
#define RegionSoldier 0
#define RegionTurretBase 0
#define RegionTurretGun 1

// ---- DIMENSIONES DE SPRITES ----
// Avión
#define AirplaneSpriteWidth 128
#define AirplaneSpriteHeight 91
#define AirplaneFrameWidth 128
#define AirplaneFrameHeight 91
#define AirplaneFramesPerRow 1

// Soldado
#define SoldierWidth 32
#define SoldierHeight 32
#define PistolDamage 25
#define ShotgunDamage 15  // Por cada perdigón
#define SubmachineGunDamage 10

// Torreta
#define TurretBaseWidth 32
#define TurretBaseHeight 32
#define TurretGunWidth 32
#define TurretGunHeight 38

// ---- SISTEMA DE TILES ----
#define TileSize 64
#define MaxTilesX 4
#define MaxTilesY 3

// Tipos de tiles
#define TileEmpty 0
#define TileGround 1
#define TileEdgeTop 2
#define TileEdgeRight 3
#define TileEdgeBottom 4
#define TileEdgeLeft 5
#define TileCornerTL 6
#define TileCornerTR 7
#define TileCornerBR 8
#define TileCornerBL 9
#define TileHouse 10

// ---- CONFIGURACIÓN DE CÁMARA ----
#define CameraZoomAir 1.0
#define CameraZoomGround 0.5
#define CameraZoomSpeed 0.05

// ---- SISTEMA DE BOMBAS ----
#define BombTimerSeconds 5.0
#define MaxActiveBombs 5
#define BombExplosionRadius 50.0

// ---- SISTEMA DE PROYECTILES ----
#define MaxBullets 50
#define BulletSpeed 5.0
#define BulletSize 8

// ---- CONFIGURACIÓN DE TORRETAS ----
#define MaxTurrets 10
#define TurretVisionRange 300.0
#define TurretFireRate 10.0
#define TurretBulletSpeed 8.0
#define TurretBulletRange 400.0
#define TurretMinSpread 3
#define TurretMaxSpread 6
#define TurretDamagePerBullet 25

// ---- ENEMIGOS ----
#define MaxEnemies 20
#define EnemyTypeSoldier 0
#define EnemyTypeAirplane 1
#define EnemyBulletRange 300.0
#define EnemyBlinkTime 0.1
#define ReloadTime 2.0
#define ReloadTextOffset 30

#define SoldierBulletSpeed 0.5
#define KamikazeBulletSpeed 4.0
#define BossBulletSpeed 4.5
#define NormalEnemyBulletSpeed 4.0

// Soldados enemigos
#define MinSoldiersPerTurret 2
#define MaxSoldiersPerTurret 4
#define SoldierEnemyHealth 5
#define SoldierEnemyArmor 2
#define SoldierEnemySpeed 0.4
#define SoldierEnemyFireRate 1.0
#define SoldierEnemyDamage 10
#define SoldierBlinkTime 0.2
#define SoldierEnemyRange 150.0
#define SoldierSpawnRadius 100
#define EnemyCollisionRadius 40

#define BossPhase1Health 400   // Cambia de fase cuando baja a este valor
#define BossPhase2Health 200   // Y a este
#define BossPhase1FireRate 0.2 // Dispara rápido pero preciso
#define BossPhase2FireRate 0.5 // Más lento pero más disperso
#define BossPhase3FireRate 0.1

// Tipos de enemigos
#define EnemyTypeNormal 0
#define EnemyTypeKamikaze 1
#define EnemyTypeBoss 2
#define EnemyTypeSoldier 3

// Puntos de vida
#define EnemyHealthNormal 100
#define EnemyHealthKamikaze 50
#define EnemyHealthBoss 500

// Características de enemigos
#define EnemyBulletRange 300.0
#define EnemyBlinkTime 0.1
#define KamikazeDamage 5

// Velocidades de movimiento
#define EnemySpeedNormal 3.0
#define EnemySpeedKamikaze 2.0
#define EnemySpeedBoss 5.0

#define AIBehaviorChase 0       // Persigue al jugador
#define AIBehaviorShootAndRun 1 // Dispara y se aleja
#define EnemySpeedBoss 1.0

#define AIBehaviorChase 0     // Persigue al jugador
#define AIBehaviorShootAndRun 1  // Dispara y se aleja
#define AIBehaviorKamikaze 2    // Va directo a chocar
#define AIBehaviorBomber 3      // Bombardea al suelo

// Patrones de disparo
#define SpreadTypeNormal 0
#define SpreadTypeCircle 1  // 8 balas en círculo
#define SpreadTypeCross 2   // 4 balas en cruz
#define SpreadTypeWall 3    // Muro de balas con espacios
#define SpreadTypeShotgun 4 // Grupo de balas con dispersión
#define SpreadTypeSpiral 5
#define SpreadTypeSingle 6

#define EnemyHoverFrameWidth 114
#define EnemyHoverFrameHeight 80

#define EnemyBossFrameWidth 320
#define EnemyBossFrameHeight 240

#define EnemyKamikazeFrameWidth 96
#define EnemyKamikazeFrameHeight 144

// ---- DIMENSIONES DEL MUNDO ----
#define WorldWidth 2000
#define WorldHeight 2000
#define ScreenWidth 640
#define ScreenHeight 360
#define ScreenCenterX (ScreenWidth / 2)
#define ScreenCenterY (ScreenHeight / 2)

// ---- CONFIGURACIÓN DEL AVIÓN ----
#define NumAirplaneFrames 2
#define AirplaneAnimSpeed 10
#define AirplaneMaxHealth 100
#define RotationSpeed 0.05
#define MovementSpeed 3.0
#define AscendSpeed 0.005
#define DescentSpeed 0.005
#define MaxScale 0.6
#define MinScale 0.2
#define AirplaneShadowOffset 20
#define MaxFuel 1000
#define FuelConsumption 0.5
#define RefuelRate 2.0
#define InitialScale 0.4
#define LandingScale 0.4
#define AirplaneMaxAmmo 100
#define AirplaneFireRate 0.1
#define AirplaneReloadRate 2.0
#define AirplaneBulletRange 500.0
#define AirplaneBulletSpeed 8.0
#define AirplaneBulletDamage 25.0

// ---- ÁREA DE ATERRIZAJE ----
#define LandingAreaWidth 77
#define LandingAreaHeight 255

// ---- PORTAAVIONES ----
#define StartingX (WorldWidth / 2)
#define StartingY (WorldHeight / 2)
#define CarrierWidth 77
#define CarrierHeight 255
#define LandingDistance 80

// ---- ISLAS ----
#define MaxIslands 10
#define MinIslandSize 100
#define MaxIslandSize 192
#define NumIslandVariants 4

// ---- EVENTOS ----
#define EventFirstExit 0
#define EventFirstTurret 1
#define EventFirstPickup 2
#define MaxEvents 10

// ---- ESTADOS DEL JUEGO ----
#define StateMenu 0
#define StateGame 1
#define StateGameOver 2

// ---- COLORES ----
#define BackgroundColor 0xFF000000
#define TextColor 0xFFFFFFFF
#define RedColor 0xFF0000FF
#define SeaColor 0xFF805020
#define ShadowColor 0x80000000
#define IslandColor 0xFF604020
#define GreenColor 0xFF00FF00

// ---- UI ----
#define BlinkRate 30
#define HealthFlashTime 0.5

#define UIDialogFrameWidth 552
#define UIDialogFrameHeight 124

#define UIDialogPortraitSize 100

#endif