/*
 * FUN_1000a6f0 at 1000a6f0
 * undefined FUN_1000a6f0(void)
 * Address ranges: 1000a6f0-1000a805
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a6f0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  if (0 < DAT_1014e2c0) {
    local_8 = 0;
    iVar3 = 0;
    do {
      if (DAT_10260e78 != 0) {
        iVar4 = *(int *)(iVar3 + 0x3c + DAT_10260e78);
        puVar1 = (undefined4 *)(iVar3 + 0x3c + DAT_10260e78);
        if (iVar4 != 0) {
          FUN_10014360(iVar4);
          *(undefined4 *)(iVar3 + 0x3c + DAT_10260e78) = 0;
          _DAT_1003fde8 = *(undefined4 *)(iVar3 + 0x3c + DAT_10260e78);
          puVar1 = (undefined4 *)(iVar3 + 0x3c + DAT_10260e78);
        }
        *puVar1 = 0;
      }
      if (DAT_10260e74 != 0) {
        iVar5 = 0xc;
        iVar4 = local_8;
        do {
          piVar2 = (int *)(DAT_10260e74 + iVar4);
          if (*piVar2 != 0) {
            FUN_10014360(*piVar2);
            *(undefined4 *)(iVar4 + DAT_10260e74) = 0;
            _DAT_1003fde8 = *(undefined4 *)(iVar4 + DAT_10260e74);
            piVar2 = (int *)(iVar4 + DAT_10260e74);
          }
          iVar4 = iVar4 + 4;
          iVar5 = iVar5 + -1;
          *piVar2 = 0;
        } while (iVar5 != 0);
      }
      local_4 = local_4 + 1;
      iVar3 = iVar3 + 0x54;
      local_8 = local_8 + 0x60;
    } while (local_4 < DAT_1014e2c0);
  }
  if (DAT_10260e78 != 0) {
    FUN_10014360(DAT_10260e78);
    DAT_10260e78 = 0;
    _DAT_1003fde8 = 0;
  }
  if (DAT_10260e74 != 0) {
    FUN_10014360(DAT_10260e74);
    _DAT_1003fde8 = 0;
  }
  DAT_10260e78 = 0;
  DAT_10260e74 = 0;
  return;
}

