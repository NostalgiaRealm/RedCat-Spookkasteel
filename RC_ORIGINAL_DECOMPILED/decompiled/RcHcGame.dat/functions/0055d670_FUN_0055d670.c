/*
 * FUN_0055d670 at 0055d670
 * undefined FUN_0055d670(void)
 * Address ranges: 0055d670-0055d723
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0055d6c4) */
/* WARNING: Removing unreachable block (ram,0x0055d6cc) */
/* WARNING: Removing unreachable block (ram,0x0055d6d0) */
/* WARNING: Removing unreachable block (ram,0x0055d6d9) */
/* WARNING: Removing unreachable block (ram,0x0055d6e0) */
/* WARNING: Removing unreachable block (ram,0x0055d6e8) */
/* WARNING: Removing unreachable block (ram,0x0055d6eb) */

void __fastcall FUN_0055d670(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *(int *)(param_1 + 0xec);
  if (iVar4 != *(int *)(param_1 + 0xf0)) {
    do {
      FUN_00421430();
      uVar3 = FUN_004fcb90();
      uVar3 = FUN_00484ec0(uVar3);
      FUN_005bbc50(uVar3);
      iVar4 = iVar4 + 4;
    } while (iVar4 != *(int *)(param_1 + 0xf0));
  }
  piVar2 = *(int **)(param_1 + 0xf0);
  piVar1 = *(int **)(param_1 + 0xec);
  for (piVar5 = piVar1; piVar5 != piVar2; piVar5 = piVar5 + 1) {
    if (*piVar5 != 0) {
      FUN_004098d0();
      *piVar5 = 0;
    }
  }
  *(int **)(param_1 + 0xf0) = piVar1;
  return;
}

