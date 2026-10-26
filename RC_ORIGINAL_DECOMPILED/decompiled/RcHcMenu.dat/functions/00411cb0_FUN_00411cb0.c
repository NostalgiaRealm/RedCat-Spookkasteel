/*
 * FUN_00411cb0 at 00411cb0
 * undefined __register FUN_00411cb0(undefined * param_1, HMODULE param_2, undefined4 * param_3)
 * Address ranges: 00411cb0-00411d23;00411d2d-00411d32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00411cb0(undefined *param_1,HMODULE param_2,undefined4 *param_3)

{
  LPCSTR lpName;
  HRSRC pHVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  LPCSTR lpType;
  
  if (param_2 == (HMODULE)0x0) {
    param_2 = DAT_005734dc;
  }
  lpType = (LPCSTR)0xa;
  lpName = FUN_004041f4(param_1);
  pHVar1 = FindResourceA(param_2,lpName,lpType);
  if (pHVar1 != (HRSRC)0x0) {
    piVar2 = FUN_00414ca8((int *)&PTR_FUN_00410fc4,'\x01',param_2,(LPCSTR)0xa,param_1);
    uVar4 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe0;
    uVar3 = FUN_00414928((int)piVar2,(int *)*param_3);
    *param_3 = uVar3;
    *in_FS_OFFSET = uVar4;
    FUN_00403094(piVar2);
    return;
  }
  return;
}

