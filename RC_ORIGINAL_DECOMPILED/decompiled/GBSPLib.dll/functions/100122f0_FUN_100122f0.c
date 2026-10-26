/*
 * FUN_100122f0 at 100122f0
 * undefined FUN_100122f0(void)
 * Address ranges: 100122f0-10012473
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100122f0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_stack_00002018;
  
  FUN_10027d90();
  DAT_103df880 = 0;
  iVar1 = 0;
  if (0 < *(int *)(in_stack_00002018 + 0x34)) {
    do {
      iVar3 = iVar1 + 1;
      iVar4 = *(int *)(*(int *)(in_stack_00002018 + 0x2c) + iVar1 * 4) * 0xc;
      _DAT_1041e098 = *(undefined4 *)(&DAT_1041e0a8 + iVar4);
      _DAT_1041e09c = *(undefined4 *)(&DAT_1041e0ac + iVar4);
      _DAT_1041e0a0 = *(undefined4 *)(&DAT_1041e0b0 + iVar4);
      FUN_100121f0();
      FUN_10014560();
      FUN_100144b0();
      *(int *)(&stack0x00001010 + iVar1 * 4) = DAT_103df880;
      FUN_10012070();
      *(int *)(&stack0x00000010 + iVar1 * 4) = DAT_103df880 - *(int *)(&stack0x00001010 + iVar1 * 4)
      ;
      iVar1 = iVar3;
    } while (iVar3 < *(int *)(in_stack_00002018 + 0x34));
    if (2 < DAT_103df880) {
      iVar3 = 0;
      iVar1 = *(int *)(in_stack_00002018 + 0x34);
      if (0 < iVar1) {
        iVar4 = iVar1 + -1;
        piVar2 = (int *)&stack0x00000010;
        do {
          if ((*piVar2 == 1) && (*(int *)(&stack0x00000010 + (iVar4 % iVar1) * 4) == 1)) break;
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar3 < iVar1);
      }
      iVar1 = FUN_10011fa0();
      return iVar1 != 0;
    }
  }
  *(undefined4 *)(in_stack_00002018 + 0x34) = 0;
  return true;
}

