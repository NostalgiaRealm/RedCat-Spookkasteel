/*
 * FUN_00476640 at 00476640
 * undefined FUN_00476640(void)
 * Address ranges: 00476640-004767bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004766d1) */

void __thiscall FUN_00476640(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00628808;
  local_c = ExceptionList;
  local_1c[0] = param_2._0_1_;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (param_2 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar2 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    ExceptionList = &local_c;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar2 = local_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)param_2;
        param_2 = param_2 + 4;
        pcVar2 = pcVar2 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar2 = *param_2;
        param_2 = param_2 + 1;
        pcVar2 = pcVar2 + 1;
      }
      local_18[uVar3] = '\0';
      local_14 = uVar3;
    }
  }
  uVar3 = local_14;
  if ((undefined1 *)(param_1 + 0x90) == local_1c) {
    FUN_0040c9b0(local_14,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (local_14 != 0) {
      pcVar2 = local_18;
      if (local_18 == (char *)0x0) {
        pcVar2 = "";
      }
      if ((byte)pcVar2[-1] < 0xfe) {
        FUN_004040a0(1);
        pcVar2 = local_18;
        if (local_18 == (char *)0x0) {
          pcVar2 = "";
        }
        *(char **)(param_1 + 0x94) = pcVar2;
        *(uint *)(param_1 + 0x98) = local_14;
        *(undefined4 *)(param_1 + 0x9c) = local_10;
        pcVar2[-1] = pcVar2[-1] + '\x01';
        goto LAB_00476776;
      }
    }
    cVar1 = FUN_00401940(local_14,1);
    if (cVar1 != '\0') {
      pcVar2 = local_18;
      if (local_18 == (char *)0x0) {
        pcVar2 = "";
      }
      pcVar5 = *(char **)(param_1 + 0x94);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar5 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar5 = pcVar5 + 1;
      }
      FUN_00404190(uVar3);
    }
  }
LAB_00476776:
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_18[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}

