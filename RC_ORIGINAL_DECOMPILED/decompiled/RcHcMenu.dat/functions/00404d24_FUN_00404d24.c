/*
 * FUN_00404d24 at 00404d24
 * undefined __register FUN_00404d24(LPCWSTR param_1, int * param_2)
 * Address ranges: 00404d24-00404d46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00404d24(LPCWSTR param_1,int *param_2)

{
  UINT UVar1;
  
  UVar1 = SysStringLen(param_1);
  FUN_00404c98(param_1,UVar1,param_2);
  return;
}

