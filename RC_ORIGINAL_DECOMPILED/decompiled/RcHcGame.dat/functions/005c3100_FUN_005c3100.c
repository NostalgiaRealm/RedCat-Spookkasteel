/*
 * FUN_005c3100 at 005c3100
 * undefined FUN_005c3100(void)
 * Address ranges: 005c3100-005c31c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005c3100(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (((*(int *)(param_1 + 0x70) == 0) && (*(int *)(param_1 + 0x6c) == 0)) &&
     (*(int *)(param_1 + 0x74) == 0)) {
    if ((*(int *)(param_1 + 0x7c) == 0) && (*(int *)(param_1 + 0x18) == 0)) {
      return 1;
    }
    iVar2 = *(int *)(param_1 + 0xa8);
    if ((iVar2 == 0) || (iVar1 = FUN_005c1c20(), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      *(int *)(param_1 + 0x7c) = iVar1;
      if (iVar1 <= *(int *)(param_1 + 0x18)) {
        piVar3 = (int *)(param_1 + 0x28 + iVar1 * 4);
        do {
          if (*piVar3 != 0) {
            FUN_005cf400(*piVar3);
            _DAT_007203c0 = 0;
            *piVar3 = 0;
          }
          iVar1 = iVar1 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar1 <= *(int *)(param_1 + 0x18));
      }
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
      if ((iVar2 == 0) || (iVar2 = FUN_005c19b0(0), iVar2 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

