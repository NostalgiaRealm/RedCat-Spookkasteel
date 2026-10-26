/*
 * FUN_1000c680 at 1000c680
 * undefined4 __cdecl FUN_1000c680(DWORD param_1, undefined4 param_2, DWORD param_3, undefined4 param_4, undefined4 param_5, int param_6, int param_7)
 * Address ranges: 1000c680-1000c724
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl
FUN_1000c680(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100132e8;
  puStack_10 = &LAB_1000c124;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1000caf1();
  FUN_1000caf1();
  pDVar1 = FUN_1000caf1();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_1000caf1();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_10008f4f(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_1000c74d();
  ExceptionList = local_14;
  return uVar2;
}

