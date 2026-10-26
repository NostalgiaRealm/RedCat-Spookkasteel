/*
 * FUN_00469acc at 00469acc
 * undefined __register FUN_00469acc(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00469acc-00469b6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00469acc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_3c;
  undefined1 *puStackY_38;
  int *piStackY_34;
  int iVar3;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  byte *local_18;
  int local_14;
  int local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = (byte *)0x0;
  puStack_28 = &LAB_00469b8d;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar3 = 0;
    piStackY_34 = (int *)0x469b07;
    FUN_004692f8(param_1,&local_14);
    local_10 = local_14;
    local_c = 0xb;
    piStackY_34 = &local_10;
    puStackY_38 = (undefined1 *)0x469b22;
    FUN_00406a48((undefined4 *)PTR_PTR_00572570,(int *)&local_18);
    piVar1 = piStackY_34;
    piStackY_34 = (int *)0x469b2d;
    FUN_00466e30(local_18,piVar1,0,iVar3);
    puVar2 = puStack_24;
  }
  puStack_24 = puVar2;
  *(undefined4 *)(local_8 + 0x54) = param_2;
  puStackY_38 = &LAB_00469b6b;
  uStackY_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_3c;
  piStackY_34 = (int *)&stack0xfffffffc;
  (**(code **)(**(int **)(local_8 + 0x28) + 0x200))(*(int **)(local_8 + 0x28),local_8,param_2);
  *in_FS_OFFSET = param_3;
  *(undefined4 *)(local_8 + 0x54) = 0;
  return;
}

