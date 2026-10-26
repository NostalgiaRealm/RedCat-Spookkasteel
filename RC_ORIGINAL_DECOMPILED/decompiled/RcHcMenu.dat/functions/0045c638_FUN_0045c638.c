/*
 * FUN_0045c638 at 0045c638
 * undefined __register FUN_0045c638(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0045c638-0045c690
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045c638(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x45c650;
  piVar1 = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',param_3);
  puStack_1c = &LAB_0045c691;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x38))(param_1,param_2,piVar1);
  (**(code **)(*piVar1 + 0x14))();
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0045c698;
  puStack_1c = (undefined1 *)0x45c690;
  FUN_00403094(piVar1);
  return;
}

