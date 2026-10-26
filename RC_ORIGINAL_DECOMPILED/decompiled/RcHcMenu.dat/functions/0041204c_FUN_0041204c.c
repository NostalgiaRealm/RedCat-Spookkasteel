/*
 * FUN_0041204c at 0041204c
 * undefined __register FUN_0041204c(int param_1, int param_2)
 * Address ranges: 0041204c-00412096
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041204c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  undefined1 *puStackY_14;
  
  puStackY_14 = (undefined1 *)0x412066;
  piVar1 = FUN_00414e2c((int *)&PTR_FUN_004112c0,'\x01',param_1,0x400);
  puStackY_14 = &LAB_00412097;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  FUN_00417774((int)piVar1,param_2,extraout_ECX);
  *in_FS_OFFSET = uStackY_18;
  puStackY_14 = (undefined1 *)0x412096;
  FUN_00403094(piVar1);
  return;
}

