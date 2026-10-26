/*
 * FUN_10004f70 at 10004f70
 * undefined __cdecl FUN_10004f70(int param_1)
 * Address ranges: 10004f70-10004fae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10004f70(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x94);
  iVar4 = *(int *)(param_1 + 0x98);
  uVar3 = *(uint *)(iVar1 + 0x10);
  iVar2 = iVar1;
  if (0 < iVar4) {
    do {
      if (*(uint *)(iVar2 + 0x10) < uVar3) {
        iVar1 = iVar2;
        uVar3 = *(uint *)(iVar2 + 0x10);
      }
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + 0x18;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  return;
}

