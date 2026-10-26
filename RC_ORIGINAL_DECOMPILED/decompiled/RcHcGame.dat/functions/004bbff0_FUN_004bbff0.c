/*
 * FUN_004bbff0 at 004bbff0
 * undefined FUN_004bbff0(void)
 * Address ranges: 004bbff0-004bc08a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004bbff0(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != iVar1) {
    piVar4 = (int *)(iVar3 + 0x10);
    do {
      if (*piVar4 != 0) {
        pcVar2 = (char *)FUN_0043b090(*piVar4);
        if ((*pcVar2 == '\0') || (pcVar2 = (char *)FUN_0043b090(*piVar4), *pcVar2 == -1)) {
          FUN_00548d30(*piVar4 + -1,piVar4[2] + 2);
        }
        else {
          pcVar2 = (char *)FUN_0043b090(*piVar4);
          *pcVar2 = *pcVar2 + -1;
        }
      }
      *piVar4 = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
      iVar3 = iVar3 + 0x40;
      piVar4 = piVar4 + 0x10;
    } while (iVar3 != iVar1);
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

