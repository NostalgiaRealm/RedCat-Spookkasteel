/*
 * FUN_10008190 at 10008190
 * undefined FUN_10008190(void)
 * Address ranges: 10008190-1000829f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10008190(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  DAT_10260e8c = (undefined4 *)FUN_10014310(DAT_1014e2a8 * 0xc);
  if (DAT_10260e8c != (undefined4 *)0x0) {
    iVar3 = 0;
    puVar5 = DAT_10260e8c;
    for (uVar1 = DAT_1014e2a8 * 3 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    piVar4 = DAT_1014e288;
    if (0 < DAT_1014e2c0) {
      do {
        if (piVar4[3] != 0) {
          FUN_10014600();
        }
        iVar2 = 0;
        if (0 < piVar4[1]) {
          do {
            FUN_10014580(DAT_10260e8c + *(int *)(DAT_1014e314 + (*piVar4 + iVar2) * 4) * 3);
            iVar2 = iVar2 + 1;
          } while (iVar2 < piVar4[1]);
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 9;
      } while (iVar3 < DAT_1014e2c0);
    }
    iVar3 = 0;
    if (0 < DAT_1014e2a8) {
      do {
        FUN_100144b0();
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_1014e2a8);
    }
    return 1;
  }
  (*DAT_1014e358)(s_MakeVertNormals__Out_of_memory_f_10037e48);
  return 0;
}

