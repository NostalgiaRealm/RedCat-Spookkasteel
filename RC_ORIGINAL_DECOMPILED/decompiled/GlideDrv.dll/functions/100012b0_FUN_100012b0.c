/*
 * FUN_100012b0 at 100012b0
 * undefined __cdecl FUN_100012b0(int param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4, int * param_5)
 * Address ranges: 100012b0-100012ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl
FUN_100012b0(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,int *param_5)

{
  int *piVar1;
  
  piVar1 = FUN_100011c0(param_1,param_5);
  if (piVar1 != (int *)0x0) {
    piVar1[0xd] = piVar1[0xd] + 1;
    return;
  }
  FUN_10001210(param_1,param_2,param_3,param_4,param_5);
  return;
}

