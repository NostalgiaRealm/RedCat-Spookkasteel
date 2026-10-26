/*
 * FUN_005f9320 at 005f9320
 * undefined FUN_005f9320(void)
 * Address ranges: 005f9320-005f9353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005f9320(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 1;
  for (iVar3 = *(int *)(param_1 + 8); iVar3 != *(int *)(param_1 + 0xc); iVar3 = iVar3 + 0x10) {
    if (*(char *)(iVar3 + 0xc) == '\0') {
      iVar2 = (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) + 1;
    }
    else {
      iVar2 = 0;
    }
    iVar1 = iVar2 * iVar1;
  }
  return iVar1;
}

