/*
 * FUN_1000b950 at 1000b950
 * undefined FUN_1000b950(void)
 * Address ranges: 1000b950-1000b9f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b950(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int local_4;
  
  local_4 = 0;
  if (DAT_10311d00 < 1) {
    DAT_10311d00 = 0;
    return;
  }
  piVar4 = &DAT_10265cf8;
  do {
    if (*piVar4 != 0) {
      FUN_10001540(*piVar4);
    }
    *piVar4 = 0;
    puVar2 = (undefined4 *)piVar4[2];
    iVar3 = DAT_10311d00;
    while (DAT_10311d00 = iVar3, puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      FUN_10014360(puVar2[1]);
      puVar2[1] = 0;
      _DAT_1003fde8 = 0;
      FUN_10014360(puVar2[2]);
      puVar2[2] = 0;
      _DAT_1003fde8 = 0;
      FUN_10014360(puVar2);
      _DAT_1003fde8 = 0;
      puVar2 = puVar1;
      iVar3 = DAT_10311d00;
    }
    piVar4[2] = 0;
    local_4 = local_4 + 1;
    piVar4 = piVar4 + 0x2b;
  } while (local_4 < iVar3);
  DAT_10311d00 = 0;
  return;
}

