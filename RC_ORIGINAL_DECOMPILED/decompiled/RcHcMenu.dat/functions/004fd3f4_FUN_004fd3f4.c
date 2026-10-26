/*
 * FUN_004fd3f4 at 004fd3f4
 * undefined __register FUN_004fd3f4(int param_1, byte param_2)
 * Address ranges: 004fd3f4-004fd67b;004fd6d0-004fd6ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fd3f4(int param_1,byte param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_68;
  undefined *puStack_64;
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  longlong local_24;
  longlong local_1c;
  longlong local_14;
  byte local_9;
  int local_8;
  
  puStack_54 = &stack0xfffffffc;
  puStack_60 = &stack0xfffffffc;
  local_44 = (char *)0x0;
  local_40 = (char *)0x0;
  local_38 = (char *)0x0;
  local_3c = (char *)0x0;
  puStack_58 = &LAB_004fd6eb;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_64 = &DAT_004fd67c;
  uStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_68;
  local_24 = 1;
  local_14 = (longlong)ROUND(*(double *)(param_1 + 0x260) * 1.0);
  local_1c = (longlong)ROUND(*(double *)(param_1 + 0x268) * 1.0);
  puVar1 = &stack0xfffffffc;
  local_9 = param_2;
  local_8 = param_1;
  if (((*(char *)(param_1 + 0x270) == '\0') ||
      (puVar1 = &stack0xfffffffc, *(char *)(param_1 + 0x271) == '\0')) ||
     (puVar1 = &stack0xfffffffc, param_2 == 0)) goto LAB_004fd672;
  if ((param_2 == 0x2b) || (puVar1 = &stack0xfffffffc, puVar2 = &stack0xfffffffc, param_2 == 0x2d))
  {
    FUN_0040a970((int *)&local_38);
    FUN_00403f58((int *)&local_40,
                 CONCAT31((int3)((uint)local_8 >> 8),*(undefined1 *)(local_8 + 0x254)));
    local_2c = FUN_0040431c(local_40,local_38);
    FUN_0040a970((int *)&local_3c);
    FUN_00403f58((int *)&local_44,
                 CONCAT31((int3)((uint)local_8 >> 8),*(undefined1 *)(local_8 + 0x254)));
    local_30 = FUN_0040431c(local_44,local_3c);
    if ((local_2c == 0) && (local_30 == 0)) {
      local_28 = 0;
      local_30 = 0;
    }
    else {
      iVar3 = FUN_00404030((int)local_38);
      uVar4 = iVar3 - local_2c;
      if (SBORROW4(iVar3,local_2c)) {
        uVar4 = thunk_FUN_00402874(uVar4);
      }
      local_2c = uVar4;
      iVar3 = FUN_00404030((int)local_3c);
      local_28 = iVar3 - local_30;
      if (SBORROW4(iVar3,local_30)) {
        local_28 = thunk_FUN_00402874(local_28);
      }
      local_30 = local_28;
      if ((int)local_28 <= (int)local_2c) {
        local_28 = local_2c;
      }
    }
    FUN_00403e48((int *)&local_38,0x4fd704);
    if (0 < (int)local_28) {
      local_34 = local_28;
      do {
        FUN_00404038((int *)&local_38,(undefined4 *)&LAB_004fd710);
        local_34 = local_34 - 1;
      } while (local_34 != 0);
    }
    FUN_0040ab80(local_38);
    local_24 = (longlong)ROUND(in_ST0);
    local_14 = (longlong)ROUND((double)local_24 * *(double *)(local_8 + 0x260));
    local_1c = (longlong)ROUND((double)local_24 * *(double *)(local_8 + 0x268));
    puVar1 = puStack_60;
    puVar2 = puStack_54;
  }
  puStack_54 = puVar2;
  puStack_60 = puVar1;
  if (local_9 < 0x30) {
    if (local_9 == 0x2f) {
      *(double *)(local_8 + 0x260) = *(double *)(local_8 + 0x260) / *(double *)(local_8 + 0x268);
    }
    else {
      if (local_9 == 0x2a) goto LAB_004fd5f9;
      if (local_9 == 0x2b) {
        local_14 = (longlong)ROUND((float10)local_1c + (float10)local_14);
      }
      else if (local_9 == 0x2d) {
        local_14 = (longlong)ROUND((float10)local_14 - (float10)local_1c);
      }
    }
  }
  else if ((local_9 == 0x58) || (local_9 == 0x78)) {
LAB_004fd5f9:
    *(double *)(local_8 + 0x260) = *(double *)(local_8 + 0x260) * *(double *)(local_8 + 0x268);
  }
  if ((local_9 == 0x2b) || (local_9 == 0x2d)) {
    *(double *)(local_8 + 0x260) = (double)local_14 / (double)local_24;
  }
  *(undefined1 *)(local_8 + 0x273) = 0;
  *(undefined1 *)(local_8 + 0x271) = 0;
  FUN_00403db0((int *)(local_8 + 0x250));
  puVar1 = puStack_60;
LAB_004fd672:
  puStack_60 = puVar1;
  *in_FS_OFFSET = uStack_68;
  *in_FS_OFFSET = uStack_5c;
  puStack_54 = &LAB_004fd6f2;
  puStack_58 = (undefined1 *)0x4fd6ea;
  FUN_00403dd4((int *)&local_44,4);
  return;
}

