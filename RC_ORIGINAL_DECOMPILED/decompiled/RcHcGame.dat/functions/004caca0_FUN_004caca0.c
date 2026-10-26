/*
 * FUN_004caca0 at 004caca0
 * undefined FUN_004caca0(void)
 * Address ranges: 004caca0-004cad40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004caca0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00630beb;
  local_c = ExceptionList;
  local_4 = 0;
  puVar2 = local_10c;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_c;
  FUN_0060af1b(local_10c,0xff,&DAT_00690818,param_2);
  FUN_005acdb0(local_10c);
  FUN_00564090(param_1);
  ExceptionList = local_c;
  return param_1;
}

