/*
 * FUN_100064f0 at 100064f0
 * undefined FUN_100064f0(void)
 * Address ranges: 100064f0-100065b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100064f0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*param_1 == -1) {
    return true;
  }
  iVar1 = FUN_10014a20(0x2c);
  if (iVar1 != 1) {
    (*DAT_1014e358)(s_SaveGFXNodes_r__There_was_an_err_10037260);
    return false;
  }
  iVar1 = FUN_100064f0(param_1[4],param_2);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_100064f0(param_1[5],param_2);
  return iVar1 != 0;
}

