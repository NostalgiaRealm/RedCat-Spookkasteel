/*
 * FUN_005ea010 at 005ea010
 * undefined FUN_005ea010(void)
 * Address ranges: 005ea010-005ea086
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005ea0c8) */
/* WARNING: Removing unreachable block (ram,0x005ea0d4) */
/* WARNING: Removing unreachable block (ram,0x005ea0d6) */

uint __fastcall FUN_005ea010(int *param_1)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00646d50;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  param_1[1] = 0;
  cVar3 = FUN_005e7640(1);
  if (cVar3 == '\0') {
    uVar4 = 0xffffffff;
  }
  else {
    local_8 = 0;
    piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
    pbVar2 = *(byte **)piVar1[7];
    if ((pbVar2 == (byte *)0x0) || (pbVar2 + *(int *)piVar1[0xb] <= pbVar2)) {
      uVar4 = (**(code **)(*piVar1 + 0x10))();
    }
    else {
      uVar4 = (uint)*pbVar2;
    }
    if (uVar4 == 0xffffffff) {
      uVar4 = FUN_005ea0b6();
      return uVar4;
    }
  }
  ExceptionList = pvStack_10;
  return uVar4;
}

