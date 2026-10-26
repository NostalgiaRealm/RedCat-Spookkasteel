/*
 * FUN_00414928 at 00414928
 * undefined __register FUN_00414928(int param_1, int * param_2)
 * Address ranges: 00414928-00414977
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00414928(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_1c;
  undefined1 *puStackY_18;
  
  puStackY_18 = (undefined1 *)0x414944;
  piVar1 = FUN_00414e2c((int *)&PTR_FUN_00411230,'\x01',param_1,0x1000);
  puStackY_18 = &LAB_00414978;
  uStackY_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_1c;
  FUN_00416ba8(piVar1,param_2);
  *in_FS_OFFSET = uStackY_1c;
  puStackY_18 = (undefined1 *)0x414977;
  FUN_00403094(piVar1);
  return;
}

