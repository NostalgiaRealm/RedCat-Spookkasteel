/*
 * FUN_004487c4 at 004487c4
 * undefined __register FUN_004487c4(int * param_1)
 * Address ranges: 004487c4-00448834
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004487c4(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd4;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte *local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = (byte *)0x0;
  puStack_20 = &LAB_00448835;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  piVar1 = FUN_0044879c(param_1);
  if (piVar1 == (int *)0x0) {
    local_c = param_1[2];
    local_8 = 0xb;
    piVar1 = &local_c;
    in_stack_ffffffd4 = 0;
    FUN_00406a48((undefined4 *)PTR_PTR_00572454,(int *)&local_10);
    uVar2 = FUN_0040cf28((int)&DAT_0041071c,'\x01',local_10,in_stack_ffffffd4,piVar1);
    FUN_0040382c(uVar2);
  }
  *in_FS_OFFSET = in_stack_ffffffd4;
  puStack_24 = &LAB_0044883c;
  FUN_00403db0((int *)&local_10);
  return;
}

