/*
 * FUN_1000b360 at 1000b360
 * undefined FUN_1000b360(void)
 * Address ranges: 1000b360-1000b47a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000b360(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int local_4;
  
  iVar3 = FUN_10014a20(4);
  if (iVar3 == 0) {
    return 0;
  }
  local_4 = 0;
  if (0 < DAT_10311d00) {
    puVar5 = &DAT_10265d00;
    do {
      for (puVar2 = (undefined4 *)*puVar5; puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
      }
      iVar3 = FUN_10014a20(4);
      if (iVar3 == 0) {
        return 0;
      }
      for (puVar2 = (undefined4 *)*puVar5; puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        uVar4 = 0xffffffff;
        pcVar6 = (char *)puVar2[1];
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        iVar3 = FUN_10014a20(4);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_10014a20(~uVar4);
        if (iVar3 == 0) {
          return 0;
        }
        uVar4 = 0xffffffff;
        pcVar6 = (char *)puVar2[2];
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        iVar3 = FUN_10014a20(4);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_10014a20(~uVar4);
        if (iVar3 == 0) {
          return 0;
        }
      }
      local_4 = local_4 + 1;
      puVar5 = puVar5 + 0x2b;
    } while (local_4 < DAT_10311d00);
  }
  return 1;
}

