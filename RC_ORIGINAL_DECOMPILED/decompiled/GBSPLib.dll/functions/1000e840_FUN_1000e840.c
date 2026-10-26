/*
 * FUN_1000e840 at 1000e840
 * undefined FUN_1000e840(void)
 * Address ranges: 1000e840-1000e8af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e840(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  FUN_1000c010(param_1 + 0x1c,param_1 + 0x28);
  for (puVar1 = *(undefined4 **)(param_1 + 0x34); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[(iVar2 == param_1) + 3]) {
    iVar2 = puVar1[2];
    piVar3 = (int *)*puVar1;
    iVar5 = 0;
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        FUN_1000c040(piVar3[1] + iVar4,param_1 + 0x1c,param_1 + 0x28);
        piVar3 = (int *)*puVar1;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar5 < *piVar3);
    }
  }
  return;
}

