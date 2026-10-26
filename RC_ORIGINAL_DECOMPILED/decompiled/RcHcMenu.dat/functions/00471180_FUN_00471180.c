/*
 * FUN_00471180 at 00471180
 * int * __register FUN_00471180(int param_1, undefined4 param_2)
 * Address ranges: 00471180-004711d2;004711ea-004711f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00471180(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x471194;
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 0x80) + -0xc))();
  puStack_18 = (undefined1 *)0x4711a4;
  (**(code **)(*piVar1 + 0x2c))(piVar1,0xffffffff,param_2);
  puStack_1c = &LAB_004711d3;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00471364(piVar1,1);
  (**(code **)(*piVar1 + 0x188))(piVar1,param_2);
  *in_FS_OFFSET = uStack_20;
  return piVar1;
}

