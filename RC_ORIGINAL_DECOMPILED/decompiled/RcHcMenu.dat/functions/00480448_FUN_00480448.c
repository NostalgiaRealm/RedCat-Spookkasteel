/*
 * FUN_00480448 at 00480448
 * undefined __register FUN_00480448(int param_1, undefined * param_2)
 * Address ranges: 00480448-004804bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00480448(int param_1,undefined *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *in_FS_OFFSET;
  int in_stack_ffffffd8;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *local_10;
  undefined1 local_c;
  byte *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_20 = &LAB_004804bd;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  iVar2 = DAT_00573948;
  puVar1 = &stack0xfffffffc;
  if (param_2 != (undefined *)0x0) {
    in_stack_ffffffd8 = 0x48047c;
    iVar2 = FUN_004804cc(param_1,param_2);
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  if (iVar2 == 0) {
    in_stack_ffffffd8 = 0;
    FUN_00406a48((undefined4 *)PTR_PTR_005723c8,(int *)&local_8);
    local_c = 0xb;
    local_10 = param_2;
    FUN_00466e30(local_8,&local_10,0,in_stack_ffffffd8);
  }
  *in_FS_OFFSET = in_stack_ffffffd8;
  puStack_20 = &LAB_004804c4;
  iStack_24 = 0x4804bc;
  FUN_00403db0((int *)&local_8);
  return;
}

