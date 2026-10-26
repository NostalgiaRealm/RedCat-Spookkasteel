/*
 * FUN_004586fc at 004586fc
 * undefined __register FUN_004586fc(char param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 004586fc-00458801
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004586fc(char param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *extraout_EDX;
  undefined4 *extraout_EDX_00;
  undefined4 *puVar4;
  undefined4 *extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_14;
  int *local_10;
  undefined4 *local_c;
  char local_5;
  
  puStack_18 = (undefined1 *)0x458713;
  local_10 = param_3;
  local_c = param_2;
  local_5 = param_1;
  FUN_004041e4((int)param_2);
  puStack_1c = &LAB_00458802;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_14 = 1;
  puStack_18 = &stack0xfffffffc;
LAB_00458787:
  do {
    iVar2 = FUN_00404030((int)local_c);
    uVar3 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    if ((int)uVar3 < local_14) {
      iVar2 = FUN_00404030((int)local_c);
      if (iVar2 != 0) {
        iVar2 = FUN_00404030((int)local_c);
        uVar3 = iVar2 - 1;
        puVar4 = local_c;
        if ((uint)local_c[-1] <= uVar3) {
          uVar3 = thunk_FUN_00402874(uVar3);
          puVar4 = extraout_EDX_01;
        }
        if (*(char *)((int)puVar4 + uVar3) == local_5) {
          iVar2 = FUN_00404030((int)local_c);
          FUN_00404278((int *)&local_c,iVar2,1);
        }
      }
      FUN_00403e04(local_10,local_c);
      *in_FS_OFFSET = uStack_20;
      puStack_18 = &LAB_00458809;
      puStack_1c = (undefined1 *)0x458801;
      FUN_00403db0((int *)&local_c);
      return;
    }
    uVar3 = local_14 - 1;
    puVar4 = local_c;
    if ((uint)local_c[-1] <= uVar3) {
      uVar3 = thunk_FUN_00402874(uVar3);
      puVar4 = extraout_EDX;
    }
    uVar1 = CONCAT31((int3)(uVar3 + 1 >> 8),*(char *)((int)puVar4 + uVar3));
    if (*(char *)((int)puVar4 + uVar3) == local_5) {
      uVar3 = local_14 + 1;
      if (SCARRY4(local_14,1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      uVar3 = uVar3 - 1;
      puVar4 = local_c;
      if ((uint)local_c[-1] <= uVar3) {
        uVar3 = thunk_FUN_00402874(uVar3);
        puVar4 = extraout_EDX_00;
      }
      uVar1 = CONCAT31((int3)(uVar3 + 1 >> 8),*(char *)((int)puVar4 + uVar3));
      if (*(char *)((int)puVar4 + uVar3) != local_5) {
        FUN_00404278((int *)&local_c,local_14,1);
        goto LAB_00458787;
      }
    }
    bVar5 = SCARRY4(local_14,1);
    local_14 = local_14 + 1;
    if (bVar5) {
      thunk_FUN_00402874(uVar1);
    }
  } while( true );
}

