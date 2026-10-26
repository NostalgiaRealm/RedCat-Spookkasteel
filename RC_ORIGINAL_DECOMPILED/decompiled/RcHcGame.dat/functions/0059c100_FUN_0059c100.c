/*
 * FUN_0059c100 at 0059c100
 * undefined FUN_0059c100(void)
 * Address ranges: 0059c100-0059c1aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_0059c100(undefined4 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064477b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  local_4 = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_006500a0;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar2 + 4) = 0;
    *puVar2 = local_11;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  param_1[6] = puVar2;
  puVar3 = operator_new(0x10);
  if (puVar3 != (undefined4 *)0x0) {
    iVar1 = param_1[6];
    *puVar3 = &PTR_FUN_0064ef1c;
    puVar3[1] = iVar1;
    puVar3[3] = 0;
    puVar3[2] = *(undefined4 *)(iVar1 + 4);
    param_1[7] = puVar3;
    ExceptionList = local_c;
    return param_1;
  }
  param_1[7] = 0;
  ExceptionList = local_c;
  return param_1;
}

