/*
 * FUN_004218f8 at 004218f8
 * undefined __register FUN_004218f8(undefined4 param_1, HMODULE param_2, undefined * param_3)
 * Address ranges: 004218f8-0042194a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004218f8(undefined4 param_1,HMODULE param_2,undefined *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  
  uStackY_18 = 0x421910;
  piVar1 = FUN_00414ca8((int *)&PTR_FUN_00410fc4,'\x01',param_2,(LPCSTR)0x2,param_3);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  iVar2 = FUN_004147cc(piVar1);
  FUN_00421a80(param_1,piVar1,iVar2);
  *in_FS_OFFSET = uStackY_18;
  FUN_00403094(piVar1);
  return;
}

