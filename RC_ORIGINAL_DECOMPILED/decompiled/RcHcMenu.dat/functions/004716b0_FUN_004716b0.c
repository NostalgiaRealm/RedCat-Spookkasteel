/*
 * FUN_004716b0 at 004716b0
 * undefined __register FUN_004716b0(int param_1, int * param_2)
 * Address ranges: 004716b0-00471702;0047170a-00471721
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004716b0(int param_1,int *param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_c;
  int local_8;
  
  puStack_10 = (undefined1 *)0x4716c7;
  local_c = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_2 + 0x1f0))();
  if (cVar1 == '\0') {
    *(undefined1 *)(local_8 + 0x8d) = 0xc;
    puStack_14 = &LAB_00471703;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    FUN_004713c0(local_c);
    *in_FS_OFFSET = uStack_18;
    *(undefined1 *)(local_8 + 0x8d) = 0;
    return;
  }
  if (*(char *)((int)local_c + 0x8d) != '\x03') {
    puStack_10 = (undefined1 *)0x47171e;
    FUN_00473130(local_c);
  }
  return;
}

