/*
 * FUN_0045cc88 at 0045cc88
 * undefined __register FUN_0045cc88(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0045cc88-0045cce5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045cc88(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x45cca3;
  piVar1 = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',param_3);
  puStack_20 = &LAB_0045cce6;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x38))(param_1,param_2,piVar1);
  (**(code **)(*piVar1 + 0x50))(piVar1,param_3);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0045cced;
  puStack_20 = (undefined1 *)0x45cce5;
  FUN_00403094(piVar1);
  return;
}

