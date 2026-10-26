/*
 * FUN_00482300 at 00482300
 * undefined4 __register FUN_00482300(int param_1, int param_2)
 * Address ranges: 00482300-00482339;00482353-0048235a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00482300(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_0048233a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0040a108((char *)(param_2 + 6));
  piVar1 = *(int **)(param_1 + 0x34);
  (**(code **)(*piVar1 + 0x10))();
  *in_FS_OFFSET = piVar1;
  return 0;
}

