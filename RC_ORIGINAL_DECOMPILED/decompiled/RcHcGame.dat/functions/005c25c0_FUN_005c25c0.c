/*
 * FUN_005c25c0 at 005c25c0
 * undefined FUN_005c25c0(void)
 * Address ranges: 005c25c0-005c2637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c25c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (((*(int *)(param_1 + 0x70) != 0) || (*(int *)(param_1 + 0x6c) != 0)) ||
     (*(int *)(param_1 + 0x74) != 0)) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x14) + 1;
  if (iVar3 <= *(int *)(param_1 + 0x18)) {
    piVar4 = (int *)(param_1 + 0x24 + iVar3 * 4);
    do {
      if ((piVar4[1] != 0) && (piVar4[9] == 0)) {
        iVar2 = iVar3 + -1;
        if (*piVar4 == 0) {
          piVar1 = piVar4;
          do {
            iVar2 = iVar2 + -1;
            piVar1 = piVar1 + -1;
            if (iVar2 < *(int *)(param_1 + 0x14)) {
              return 0;
            }
          } while (*piVar1 == 0);
        }
        iVar2 = FUN_005c2640(iVar3);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 <= *(int *)(param_1 + 0x18));
  }
  return 1;
}

