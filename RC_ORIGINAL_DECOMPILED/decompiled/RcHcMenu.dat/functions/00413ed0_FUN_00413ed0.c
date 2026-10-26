/*
 * FUN_00413ed0 at 00413ed0
 * undefined __register FUN_00413ed0(int * param_1, undefined * param_2)
 * Address ranges: 00413ed0-00413f1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00413ed0(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  undefined1 *puStackY_14;
  
  puStackY_14 = (undefined1 *)0x413eea;
  piVar1 = FUN_004149f8((int *)&PTR_FUN_00410e7c,'\x01',param_2,0xffff);
  puStackY_14 = &LAB_00413f1b;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x68))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  puStackY_14 = (undefined1 *)0x413f1a;
  FUN_00403094(piVar1);
  return;
}

