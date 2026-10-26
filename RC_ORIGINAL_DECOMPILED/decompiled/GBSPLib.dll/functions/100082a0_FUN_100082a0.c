/*
 * FUN_100082a0 at 100082a0
 * undefined FUN_100082a0(void)
 * Address ranges: 100082a0-1000839c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100082a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  
  piVar1 = (int *)(DAT_1014e288 + param_1 * 0x24);
  puVar2 = *(undefined4 **)(DAT_1031303c + param_1 * 4);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    iVar5 = 0;
    puVar2[0xe] = 0;
    if (0 < piVar1[1]) {
      do {
        pfVar6 = (float *)(DAT_1014e248 + *(int *)(DAT_1014e314 + (*piVar1 + iVar5) * 4) * 0xc);
        iVar3 = 0;
        pfVar4 = (float *)(puVar2 + 0x21);
        do {
          if ((*pfVar6 + 16.0 < pfVar4[-3]) || (*pfVar4 < *pfVar6 - 16.0)) break;
          iVar3 = iVar3 + 1;
          pfVar4 = pfVar4 + 1;
          pfVar6 = pfVar6 + 1;
        } while (iVar3 < 3);
        if (iVar3 == 3) {
          puVar2[0xe] = puVar2[0xe] + 1;
          FUN_10014580(puVar2 + 0xf);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < piVar1[1]);
    }
    if (puVar2[0xe] != 0) {
      FUN_10014530(1.0 / (float)(int)puVar2[0xe]);
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

