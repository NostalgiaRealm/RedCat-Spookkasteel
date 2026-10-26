/*
 * FUN_00510c60 at 00510c60
 * undefined __register FUN_00510c60(undefined1 param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00510c60-00510d3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00510c60(undefined1 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  char *local_14;
  char *local_10;
  int local_c;
  bool local_6;
  undefined1 local_5;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = (char *)0x0;
  local_14 = (char *)0x0;
  puStack_20 = &LAB_00510d3b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_5 = param_1;
  FUN_005017d8(*(int *)(param_4 + -4),(int *)&local_10);
  pcVar1 = local_10;
  FUN_00403f58((int *)&local_14,CONCAT31((int3)((uint)extraout_EDX >> 8),local_5));
  local_c = FUN_0040431c(local_14,pcVar1);
  iVar2 = (**(code **)(**(int **)(param_4 + -4) + 0xb8))();
  if (iVar2 == 0) {
    local_6 = 0 < local_c;
    goto LAB_00510d1d;
  }
  if (local_c < 1) {
LAB_00510d14:
    local_6 = false;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_4 + -4) + 0xbc))();
    uVar3 = iVar2 + 1;
    if (SCARRY4(iVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    if ((int)uVar3 <= local_c) {
      iVar2 = (**(code **)(**(int **)(param_4 + -4) + 0xbc))();
      uVar3 = (**(code **)(**(int **)(param_4 + -4) + 0xb8))();
      if (SCARRY4(iVar2,uVar3)) {
        thunk_FUN_00402874(uVar3);
      }
      if (local_c <= (int)(iVar2 + uVar3)) goto LAB_00510d14;
    }
    local_6 = true;
  }
LAB_00510d1d:
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00510d42;
  puStack_20 = (undefined1 *)0x510d32;
  FUN_00403db0((int *)&local_14);
  puStack_20 = (undefined1 *)0x510d3a;
  FUN_00403db0((int *)&local_10);
  return;
}

