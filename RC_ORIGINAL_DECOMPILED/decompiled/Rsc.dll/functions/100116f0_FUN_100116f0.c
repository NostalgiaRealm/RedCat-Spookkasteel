/*
 * FUN_100116f0 at 100116f0
 * int __cdecl FUN_100116f0(byte * param_1)
 * Address ranges: 100116f0-1001178a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_100116f0(byte *param_1)

{
  int iVar1;
  byte local_c [8];
  
  if (((param_1 == (byte *)0x0) || (*param_1 == 0)) ||
     (iVar1 = _strcmp((char *)param_1,"ACP"), iVar1 == 0)) {
    iVar1 = (*DAT_100316c4)(DAT_100316c0,0x1004,local_c,8);
    if (iVar1 == 0) {
      return 0;
    }
    param_1 = local_c;
  }
  else {
    iVar1 = _strcmp((char *)param_1,"OCP");
    if (iVar1 == 0) {
      iVar1 = (*DAT_100316c4)(DAT_100316c0,0xb,local_c,8);
      if (iVar1 == 0) {
        return 0;
      }
      param_1 = local_c;
    }
  }
  iVar1 = FUN_100136a0(param_1);
  return iVar1;
}

