/*
 * FUN_10001640 at 10001640
 * undefined __cdecl FUN_10001640(int param_1)
 * Address ranges: 10001640-10001678
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10001640(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x38);
  uVar3 = *(uint *)(iVar1 + 8);
  iVar2 = iVar1;
  if (0 < iVar4) {
    do {
      if (*(uint *)(iVar2 + 8) < uVar3) {
        iVar1 = iVar2;
        uVar3 = *(uint *)(iVar2 + 8);
      }
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + 0x14;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  return;
}

