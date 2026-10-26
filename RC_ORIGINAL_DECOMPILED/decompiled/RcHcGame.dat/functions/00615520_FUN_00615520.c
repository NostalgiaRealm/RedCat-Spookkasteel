/*
 * FUN_00615520 at 00615520
 * undefined FUN_00615520(void)
 * Address ranges: 00615520-00615598
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_00615520(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 == 1) || (param_2 == 3)) {
    uVar2 = param_1[1];
    *param_1 = 0;
    if (((byte)uVar2 & 0xf) != 3) {
      param_1[1] = (uVar2 ^ param_2) & 0xf ^ uVar2;
    }
  }
  else {
    uVar2 = param_1[1] & 0xf;
    if ((uVar2 == 0) || (uVar2 == 2)) {
      param_1[1] = param_1[1] & 0xffffff8f;
      iVar1 = FUN_00614d0f(0x10,0);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_006158ad(param_2);
      }
      *param_1 = iVar1;
      if (iVar1 == 0) {
        param_1[1] = param_1[1] & 0xfffffff3U | 3;
      }
    }
  }
  return param_1;
}

