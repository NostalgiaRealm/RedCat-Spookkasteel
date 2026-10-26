/*
 * FUN_10001fc0 at 10001fc0
 * undefined4 __cdecl FUN_10001fc0(int param_1, uint param_2, int * param_3)
 * Address ranges: 10001fc0-10002034
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10001fc0(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_10001fb0(param_1);
  if (uVar1 < param_2) {
    return 0;
  }
  if (((*(uint *)(param_1 + 0xc) + param_2 & 0x1fffff) < param_2) &&
     (iVar2 = ((*(uint *)(param_1 + 0xc) >> 0x15) + 1) * 0x200000, *(int *)(param_1 + 0xc) = iVar2,
     *(uint *)(param_1 + 8) <= iVar2 + param_2)) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xc) & 7) != 0) {
    do {
      uVar1 = *(int *)(param_1 + 0xc) + 1;
      *(uint *)(param_1 + 0xc) = uVar1;
      if (*(uint *)(param_1 + 8) <= uVar1 + param_2) {
        return 0;
      }
    } while ((uVar1 & 7) != 0);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = param_2 + iVar2;
  *param_3 = iVar2;
  return 1;
}

