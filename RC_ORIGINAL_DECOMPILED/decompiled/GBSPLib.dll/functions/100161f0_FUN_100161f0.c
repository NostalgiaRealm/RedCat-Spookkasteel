/*
 * FUN_100161f0 at 100161f0
 * undefined FUN_100161f0(void)
 * Address ranges: 100161f0-100162e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100161f0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if (piVar1[0x1c] != 0) {
      uVar2 = FUN_10016aa0();
      return uVar2;
    }
    if (*piVar1 < 2) {
      if (piVar1[0x1d] == 0) {
        if (piVar1[0x2a] != 0) {
          FUN_10017860();
        }
        iVar3 = piVar1[5];
        if (iVar3 <= piVar1[6]) {
          piVar4 = piVar1 + iVar3 + 10;
          do {
            if (*piVar4 != 0) {
              FUN_10014360(*piVar4);
              *piVar4 = 0;
              _DAT_1003fde8 = 0;
            }
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar3 <= piVar1[6]);
        }
      }
      else {
        FUN_100161f0();
        piVar1[0x1d] = 0;
      }
    }
    iVar3 = *piVar1;
    *piVar1 = iVar3 + -1;
    if (iVar3 + -1 < 1) {
      if (piVar1[0x1a] != 0) {
        FUN_100161f0();
      }
      if (piVar1[9] != 0) {
        FUN_10019d20();
      }
      if (piVar1[0x28] != 0) {
        FUN_10019d20();
      }
      FUN_100161a0(piVar1);
      *param_1 = 0;
      return 1;
    }
  }
  return 0;
}

