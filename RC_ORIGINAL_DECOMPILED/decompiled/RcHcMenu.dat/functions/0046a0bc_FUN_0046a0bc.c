/*
 * FUN_0046a0bc at 0046a0bc
 * undefined __register FUN_0046a0bc(int param_1, char param_2)
 * Address ranges: 0046a0bc-0046a176
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046a0bc(int param_1,char param_2)

{
  undefined1 *puVar1;
  int *in_FS_OFFSET;
  int in_stack_ffffffd4;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  byte *local_14;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = (byte *)0x0;
  puStack_24 = &LAB_0046a177;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  if (((param_2 != '\0') &&
      (((*(int *)(param_1 + 0x58) == 0 || (*(int *)(param_1 + 0x60) == 0)) ||
       (*(int *)(param_1 + 100) == 0)))) ||
     (puVar1 = &stack0xfffffffc, *(int *)(param_1 + 0x5c) == 0)) {
    in_stack_ffffffd4 = 0;
    FUN_004692f8(param_1,&local_10);
    local_c = local_10;
    local_8 = 0xb;
    FUN_00406a48((undefined4 *)PTR_PTR_005724e8,(int *)&local_14);
    FUN_00466e30(local_14,&local_c,0,in_stack_ffffffd4);
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  FUN_00468874(*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x5c));
  if (param_2 != '\0') {
    FUN_004713c0(*(int **)(param_1 + 0x58));
    FUN_00468874(*(int *)(*(int *)(param_1 + 0x58) + 0x24),*(int *)(param_1 + 0x60));
    FUN_00472080(*(int *)(param_1 + 0x58),*(undefined **)(param_1 + 100));
  }
  *in_FS_OFFSET = in_stack_ffffffd4;
  puStack_24 = &LAB_0046a17e;
  iStack_28 = 0x46a176;
  FUN_00403dd4((int *)&local_14,2);
  return;
}

