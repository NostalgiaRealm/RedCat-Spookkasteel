/*
 * FUN_004f2780 at 004f2780
 * undefined FUN_004f2780(void)
 * Address ranges: 004f2780-004f27d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004f2780(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 8);
  for (piVar4 = *(int **)(param_1 + 4); piVar4 != piVar1; piVar4 = piVar4 + 1) {
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x14) + -1;
      *(int *)(iVar2 + 0x14) = iVar3;
      if (iVar3 == 0) {
        FUN_005abfc0(0);
      }
      *piVar4 = 0;
    }
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

