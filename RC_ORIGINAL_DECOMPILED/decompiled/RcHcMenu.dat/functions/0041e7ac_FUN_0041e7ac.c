/*
 * FUN_0041e7ac at 0041e7ac
 * undefined __register FUN_0041e7ac(int * param_1, undefined * param_2)
 * Address ranges: 0041e7ac-0041e7f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041e7ac(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  undefined1 *puStackY_14;
  
  puStackY_14 = (undefined1 *)0x41e7c6;
  piVar1 = FUN_004149f8((int *)&PTR_FUN_00410e7c,'\x01',param_2,0xffff);
  puStackY_14 = &LAB_0041e7f7;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x54))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  puStackY_14 = (undefined1 *)0x41e7f6;
  FUN_00403094(piVar1);
  return;
}

