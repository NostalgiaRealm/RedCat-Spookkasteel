/*
 * FUN_10002610 at 10002610
 * undefined FUN_10002610(void)
 * Address ranges: 10002610-10002692
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002610(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_80 [128];
  
  iVar3 = 0;
  iVar1 = 0;
  if (0 < DAT_10311d00) {
    piVar2 = &DAT_10265cf8;
    do {
      if (DAT_1014e350 != 0) {
        return 0;
      }
      if (*piVar2 != 0) {
        piVar2[3] = iVar3;
        if (piVar2 != &DAT_10265cf8) {
          FUN_1002771d(local_80,&DAT_10036414,iVar3);
          FUN_1000b120(piVar2,s_Model_1003640c,local_80);
        }
        iVar3 = iVar3 + 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x2b;
    } while (iVar1 < DAT_10311d00);
  }
  return 1;
}

