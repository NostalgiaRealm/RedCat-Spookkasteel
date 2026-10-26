/*
 * FUN_004cc0b4 at 004cc0b4
 * undefined __register FUN_004cc0b4(undefined4 param_1)
 * Address ranges: 004cc0b4-004cc10e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cc0b4(undefined4 param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4cc0d2;
  piVar1 = FUN_0045c5fc((int *)&PTR_FUN_0045c5a0,'\x01',(undefined4 *)"CARTHAGO.INI");
  puStack_1c = &LAB_004cc10f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(*piVar1 + 4))(piVar1,"Login","UserName");
  *in_FS_OFFSET = param_1;
  puStack_1c = &LAB_004cc116;
  uStack_20 = 0x4cc10e;
  FUN_00403094(piVar1);
  return;
}

