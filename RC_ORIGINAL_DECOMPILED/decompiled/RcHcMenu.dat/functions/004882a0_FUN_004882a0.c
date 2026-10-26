/*
 * FUN_004882a0 at 004882a0
 * undefined __register FUN_004882a0(int * param_1, int param_2)
 * Address ranges: 004882a0-004882ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004882a0(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_00488300;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar1 = FUN_004725dc(param_1,param_2);
  if ((char)uVar1 != '\0') {
    FUN_00406a48((undefined4 *)PTR_PTR_00572364,(int *)&local_8);
    FUN_00466d84(local_8,(int)param_1);
  }
  FUN_0046e820((int *)param_1[0x92],param_2);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00488307;
  puStack_18 = (undefined1 *)0x4882ff;
  FUN_00403db0((int *)&local_8);
  return;
}

