/*
 * FUN_10001280 at 10001280
 * undefined4 __cdecl FUN_10001280(int param_1, int param_2, undefined4 param_3)
 * Address ranges: 10001280-100012ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10001280(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = 3;
  uVar1 = FUN_100016a0(*(undefined4 **)(param_1 + 0x100));
  grTexDownloadMipMap(uVar1,uVar2,uVar3,param_3);
  return 1;
}

