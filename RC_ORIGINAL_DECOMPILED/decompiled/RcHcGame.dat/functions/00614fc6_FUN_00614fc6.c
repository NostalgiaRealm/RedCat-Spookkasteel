/*
 * FUN_00614fc6 at 00614fc6
 * undefined FUN_00614fc6(void)
 * Address ranges: 00614fc6-00615027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_00614fc6(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if ((param_2 != 1) && (param_2 != 3)) {
    uVar2 = 0;
  }
  param_1[1] = (param_1[1] ^ uVar2) & 0xf ^ param_1[1];
  iVar1 = FUN_00614d0f(0x10,0);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_006158ad(param_2);
  }
  param_1[1] = param_1[1] & 0xffffff8f;
  *param_1 = iVar1;
  if (iVar1 == 0) {
    param_1[1] = param_1[1] & 0xfffffff3U | 3;
  }
  return param_1;
}

