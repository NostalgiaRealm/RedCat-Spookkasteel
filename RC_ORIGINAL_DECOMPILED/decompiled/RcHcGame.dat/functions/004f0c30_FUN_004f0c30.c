/*
 * FUN_004f0c30 at 004f0c30
 * undefined FUN_004f0c30(void)
 * Address ranges: 004f0c30-004f0c7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f0c30(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      if (*(int *)(param_1 + 4) == 0) {
        puVar1 = &DAT_0064a3b4;
      }
      else {
        puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + uVar3);
      }
      uVar2 = FUN_004f1100(puVar1);
      FUN_0053cff0(*(undefined4 *)(param_2 + 8),1,uVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  return;
}

