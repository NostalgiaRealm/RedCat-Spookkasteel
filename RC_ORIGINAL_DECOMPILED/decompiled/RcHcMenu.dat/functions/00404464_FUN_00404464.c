/*
 * FUN_00404464 at 00404464
 * undefined __register FUN_00404464(undefined4 * param_1, undefined4 param_2)
 * Address ranges: 00404464-00404472
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00404464(undefined4 *param_1,undefined4 param_2)

{
  BSTR bstrString;
  
  bstrString = (BSTR)*param_1;
  *param_1 = param_2;
  if (bstrString != (BSTR)0x0) {
    SysFreeString(bstrString);
  }
  return;
}

