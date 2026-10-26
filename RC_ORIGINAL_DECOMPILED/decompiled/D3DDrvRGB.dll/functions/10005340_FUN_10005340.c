/*
 * FUN_10005340 at 10005340
 * undefined4 __cdecl FUN_10005340(int param_1)
 * Address ranges: 10005340-1000538f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10005340(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 + 0x1a8);
  iVar2 = 0x80;
  do {
    if (piVar1[-0x21] != 0) {
      iVar4 = piVar1[-1];
      iVar3 = 0;
      if (0 < *piVar1) {
        do {
          FUN_10005ab0(iVar4,0);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x14;
        } while (iVar3 < *piVar1);
      }
    }
    piVar1 = piVar1 + 0x29;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 1;
}

