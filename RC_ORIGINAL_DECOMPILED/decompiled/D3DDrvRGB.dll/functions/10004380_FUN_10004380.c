/*
 * FUN_10004380 at 10004380
 * undefined __thiscall FUN_10004380(void * this, float param_1)
 * Address ranges: 10004380-100046a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10004380(void *this,float param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  int local_438;
  int iStack_434;
  byte local_430 [4];
  byte local_42c;
  byte local_428;
  byte local_424;
  uint local_420;
  uint local_41c;
  uint local_418;
  uint local_414;
  char local_410;
  char local_40c;
  char local_408;
  char local_404;
  uint local_400 [256];
  
  _DAT_1002893c = param_1;
  local_438 = SUB84((double)param_1,0);
  if ((local_438 == 0) &&
     (iStack_434 = (int)((ulonglong)(double)param_1 >> 0x20), iStack_434 == 0x3ff00000)) {
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
    do {
      FUN_10008989();
      lVar5 = __ftol();
      iVar4 = iVar4 + 1;
      *puVar3 = (uint)lVar5;
      puVar3 = puVar3 + 1;
    } while (iVar4 < 0x100);
  }
  FUN_10003a30(0x1001bd68,(int *)local_430);
  uVar2 = 0;
  do {
    uVar1 = local_400[uVar2];
    (&DAT_1001bedc)[uVar2] = (uVar1 >> (8U - local_410 & 0x1f)) << (local_430[0] & 0x1f) & local_420
    ;
    (&DAT_1001c2dc)[uVar2] = (uVar1 >> (8U - local_40c & 0x1f)) << (local_42c & 0x1f) & local_41c;
    (&DAT_1001c6dc)[uVar2] = (uVar1 >> (8U - local_408 & 0x1f)) << (local_428 & 0x1f) & local_418;
    (&DAT_1001cadc)[uVar2] = (uVar2 >> (8U - local_404 & 0x1f)) << (local_424 & 0x1f) & local_414;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x100);
  FUN_10003a30(0x1001bde4,(int *)local_430);
  uVar2 = 0;
  do {
    uVar1 = local_400[uVar2];
    (&DAT_1001cedc)[uVar2] = (uVar1 >> (8U - local_410 & 0x1f)) << (local_430[0] & 0x1f) & local_420
    ;
    (&DAT_1001d2dc)[uVar2] = (uVar1 >> (8U - local_40c & 0x1f)) << (local_42c & 0x1f) & local_41c;
    (&DAT_1001d6dc)[uVar2] = (uVar1 >> (8U - local_408 & 0x1f)) << (local_428 & 0x1f) & local_418;
    (&DAT_1001dadc)[uVar2] = (uVar2 >> (8U - local_404 & 0x1f)) << (local_424 & 0x1f) & local_414;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x100);
  FUN_10003a30(0x1001be60,(int *)local_430);
  uVar2 = 0;
  do {
    uVar1 = local_400[uVar2];
    (&DAT_1001dedc)[uVar2] = (uVar1 >> (8U - local_410 & 0x1f)) << (local_430[0] & 0x1f) & local_420
    ;
    (&DAT_1001e2dc)[uVar2] = (uVar1 >> (8U - local_40c & 0x1f)) << (local_42c & 0x1f) & local_41c;
    (&DAT_1001e6dc)[uVar2] = (uVar1 >> (8U - local_408 & 0x1f)) << (local_428 & 0x1f) & local_418;
    (&DAT_1001eadc)[uVar2] = (uVar2 >> (8U - local_404 & 0x1f)) << (local_424 & 0x1f) & local_414;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x100);
  return;
}

