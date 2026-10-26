/*
 * FUN_0047cacc at 0047cacc
 * undefined __register FUN_0047cacc(int param_1)
 * Address ranges: 0047cacc-0047cb28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047cacc(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x47cae9;
  piVar1 = (int *)FUN_00449cd0((int *)&PTR_FUN_0047c8b4,'\x01',*(undefined4 *)PTR_DAT_005723fc);
  puStack_18 = &LAB_0047cb29;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  piVar1[0xbc] = param_1;
  puStack_14 = &stack0xfffffffc;
  (**(code **)(*piVar1 + 0xd8))();
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0047cb30;
  puStack_18 = (undefined1 *)0x47cb28;
  FUN_00403094(piVar1);
  return;
}

