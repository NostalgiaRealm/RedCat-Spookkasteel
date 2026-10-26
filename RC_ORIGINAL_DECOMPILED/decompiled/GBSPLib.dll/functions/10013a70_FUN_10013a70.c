/*
 * FUN_10013a70 at 10013a70
 * undefined FUN_10013a70(void)
 * Address ranges: 10013a70-10013af9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10013a70(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  piVar1 = (int *)(DAT_104e98d0 + param_1 * 0xc);
  if (*piVar1 != 0) {
    DAT_104e98ec = param_1;
    for (puVar2 = (undefined4 *)*piVar1; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2
        ) {
      puVar3 = (undefined4 *)FUN_10014310(DAT_104e98d8);
      puVar2[0xb] = puVar3;
      uVar5 = DAT_104e98d8;
      for (uVar4 = DAT_104e98d8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar4 = DAT_104e98c8, uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      puVar3 = DAT_104e98d4;
      for (uVar5 = DAT_104e98c8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      DAT_104e98f0 = 0;
      FUN_100139a0(puVar2,puVar2);
      if (DAT_1014e350 != 0) {
        return;
      }
      DAT_1014e350 = 0;
    }
  }
  return;
}

