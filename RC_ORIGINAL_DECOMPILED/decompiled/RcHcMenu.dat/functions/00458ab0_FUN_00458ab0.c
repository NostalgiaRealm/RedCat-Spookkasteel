/*
 * FUN_00458ab0 at 00458ab0
 * undefined __register FUN_00458ab0(undefined4 * param_1, int * param_2)
 * Address ranges: 00458ab0-00458c1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00458ab0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 **ppuVar3;
  undefined4 *extraout_ECX;
  undefined4 *puVar4;
  undefined4 *extraout_EDX;
  undefined4 *extraout_EDX_00;
  undefined4 *extraout_EDX_01;
  undefined4 *extraout_EDX_02;
  undefined4 *extraout_EDX_03;
  uint extraout_EDX_04;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 *local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  undefined4 *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_20 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  puStack_28 = &LAB_00458c1d;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403db0(param_2);
  if (local_8 != (undefined4 *)0x0) {
    FUN_004581d8(local_8," ",0x458c30,(int *)&local_14);
    iVar1 = 0;
    puVar4 = local_14;
    if (local_14[-1] == 0) {
      iVar1 = thunk_FUN_00402874(0);
      puVar4 = extraout_EDX;
    }
    if ((byte)(*(char *)((int)puVar4 + iVar1) - 0x30U) < 10) {
      FUN_0040407c((int *)&local_14,(undefined4 *)&DAT_00458c30,local_14);
    }
    FUN_00403db0((int *)&local_18);
    iVar1 = FUN_00404030((int)local_14);
    if (0 < iVar1) {
      local_10 = 1;
      local_1c = iVar1;
      do {
        uVar2 = local_10 - 1;
        puVar4 = local_14;
        if ((uint)local_14[-1] <= uVar2) {
          uVar2 = thunk_FUN_00402874(uVar2);
          puVar4 = extraout_EDX_00;
        }
        if ((byte)(*(char *)((int)puVar4 + uVar2) + 0xbfU) < 0x1a) {
LAB_00458bba:
          ppuVar3 = &local_20;
          uVar2 = local_10 - 1;
          puVar4 = local_14;
          if ((uint)local_14[-1] <= uVar2) {
            ppuVar3 = (undefined4 **)thunk_FUN_00402874((uint)ppuVar3);
            puVar4 = extraout_ECX;
            uVar2 = extraout_EDX_04;
          }
          FUN_00403f58((int *)ppuVar3,
                       CONCAT31((int3)(uVar2 + 1 >> 8),*(undefined1 *)((int)puVar4 + uVar2)));
          FUN_00404038((int *)&local_18,local_20);
        }
        else {
          uVar2 = local_10 - 1;
          puVar4 = local_14;
          if ((uint)local_14[-1] <= uVar2) {
            uVar2 = thunk_FUN_00402874(uVar2);
            puVar4 = extraout_EDX_01;
          }
          if ((byte)(*(char *)((int)puVar4 + uVar2) + 0x9fU) < 0x1a) goto LAB_00458bba;
          uVar2 = local_10 - 1;
          puVar4 = local_14;
          if ((uint)local_14[-1] <= uVar2) {
            uVar2 = thunk_FUN_00402874(uVar2);
            puVar4 = extraout_EDX_02;
          }
          if ((byte)(*(char *)((int)puVar4 + uVar2) - 0x30U) < 10) goto LAB_00458bba;
          uVar2 = local_10 - 1;
          puVar4 = local_14;
          if ((uint)local_14[-1] <= uVar2) {
            uVar2 = thunk_FUN_00402874(uVar2);
            puVar4 = extraout_EDX_03;
          }
          if (*(char *)((int)puVar4 + uVar2) == '_') goto LAB_00458bba;
        }
        local_10 = local_10 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
    FUN_00403e04(local_c,local_18);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00458c24;
  puStack_28 = (undefined1 *)0x458c0f;
  FUN_00403db0((int *)&local_20);
  puStack_28 = (undefined1 *)0x458c1c;
  FUN_00403dd4((int *)&local_18,2);
  return;
}

