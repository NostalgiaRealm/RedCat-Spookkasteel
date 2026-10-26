/*
 * FUN_10003230 at 10003230
 * undefined __cdecl FUN_10003230(float param_1)
 * Address ranges: 10003230-10003514
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10003230(float param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  byte local_438 [4];
  byte local_434;
  byte local_430;
  byte local_42c;
  uint local_428;
  uint local_424;
  uint local_420;
  uint local_41c;
  char local_418;
  char local_414;
  char local_410;
  char local_40c;
  double local_408;
  uint local_400 [256];
  
  _DAT_10038e6c = param_1;
  if (param_1 == 1.0) {
    uVar2 = 0;
    puVar3 = local_400;
    do {
      *puVar3 = uVar2;
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while ((int)uVar2 < 0x100);
  }
  else {
    iVar4 = 0;
    puVar3 = local_400;
    local_408 = (double)(1.0 / param_1);
    do {
      FUN_10007f50();
      lVar5 = __ftol();
      *puVar3 = (uint)lVar5;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < 0x100);
  }
  FUN_10003520(0x10027550,(int *)local_438);
  uVar2 = 0;
  do {
    uVar1 = local_400[uVar2];
    (&DAT_100276c4)[uVar2] = (uVar1 >> (8U - local_418 & 0x1f)) << (local_438[0] & 0x1f) & local_428
    ;
    (&DAT_10027ac4)[uVar2] = (uVar1 >> (8U - local_414 & 0x1f)) << (local_434 & 0x1f) & local_424;
    (&DAT_10027ec4)[uVar2] = (uVar1 >> (8U - local_410 & 0x1f)) << (local_430 & 0x1f) & local_420;
    (&DAT_100282c4)[uVar2] = (uVar2 >> (8U - local_40c & 0x1f)) << (local_42c & 0x1f) & local_41c;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x100);
  FUN_10003520(0x100275cc,(int *)local_438);
  uVar2 = 0;
  do {
    uVar1 = local_400[uVar2];
    (&DAT_100286c4)[uVar2] = (uVar1 >> (8U - local_418 & 0x1f)) << (local_438[0] & 0x1f) & local_428
    ;
    (&DAT_10028ac4)[uVar2] = (uVar1 >> (8U - local_414 & 0x1f)) << (local_434 & 0x1f) & local_424;
    (&DAT_10028ec4)[uVar2] = (uVar1 >> (8U - local_410 & 0x1f)) << (local_430 & 0x1f) & local_420;
    (&DAT_100292c4)[uVar2] = (uVar2 >> (8U - local_40c & 0x1f)) << (local_42c & 0x1f) & local_41c;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x100);
  FUN_10003520(0x10027648,(int *)local_438);
  uVar2 = 0;
  do {
    uVar1 = local_400[uVar2];
    (&DAT_100296c4)[uVar2] = (uVar1 >> (8U - local_418 & 0x1f)) << (local_438[0] & 0x1f) & local_428
    ;
    (&DAT_10029ac4)[uVar2] = (uVar1 >> (8U - local_414 & 0x1f)) << (local_434 & 0x1f) & local_424;
    (&DAT_10029ec4)[uVar2] = (uVar1 >> (8U - local_410 & 0x1f)) << (local_430 & 0x1f) & local_420;
    (&DAT_1002a2c4)[uVar2] = (uVar2 >> (8U - local_40c & 0x1f)) << (local_42c & 0x1f) & local_41c;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x100);
  return;
}

