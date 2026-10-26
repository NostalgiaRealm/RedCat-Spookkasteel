/*
 * FUN_0060a03a at 0060a03a
 * undefined FUN_0060a03a(void)
 * Address ranges: 0060a03a-0060a07a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0060a03a(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_c;
  undefined4 uStack_8;
  
  if (param_1 == -1) {
    return 0xffffffff;
  }
  param_1 = CONCAT13((char)param_1,(undefined3)param_1);
  local_c = 0;
  iVar1 = FUN_00609f28((int)&uStack_8 + 2,(int)&param_1 + 3,1,&local_c,0);
  uVar2 = 0xffff;
  if (-1 < iVar1) {
    uVar2 = uStack_8 >> 0x10;
  }
  return uVar2;
}

