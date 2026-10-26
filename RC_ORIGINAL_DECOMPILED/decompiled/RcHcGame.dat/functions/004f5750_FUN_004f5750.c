/*
 * FUN_004f5750 at 004f5750
 * undefined FUN_004f5750(void)
 * Address ranges: 004f5750-004f57c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004f5750(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x5c) != 0) &&
       (puVar3 = *(undefined4 **)(iVar1 + 4), puVar3 != *(undefined4 **)(iVar1 + 8))) {
      do {
        uVar2 = FUN_004fcb90(*puVar3);
        FUN_005b6ee0(uVar2);
        puVar3 = puVar3 + 1;
      } while (puVar3 != *(undefined4 **)(*param_2 + 8));
    }
    iVar1 = *param_2;
    if (iVar1 != 0) {
      FUN_005fe5f0(*(undefined4 *)(iVar1 + 4));
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      FUN_005fe5f0(iVar1);
    }
    *param_2 = 0;
  }
  return;
}

