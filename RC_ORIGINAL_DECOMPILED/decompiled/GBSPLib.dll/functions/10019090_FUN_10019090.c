/*
 * FUN_10019090 at 10019090
 * undefined FUN_10019090(void)
 * Address ranges: 10019090-100191de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10019090(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    param_1 = *(int *)(param_1 + 0x70);
  }
  if (*(int *)(param_1 + 0x24) != param_2) {
    if (*(int *)(param_2 + 0x20) == 0) {
      if (*(int *)(param_1 + 0x24) != 0) {
        FUN_10019d20();
      }
      *(int *)(param_1 + 0x24) = param_2;
      FUN_10019bc0();
    }
    else {
      iVar1 = FUN_10016350(param_1,*(undefined4 *)(param_2 + 8),0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_1001a050();
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  iVar1 = FUN_100203f0();
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0xa0);
    if (iVar1 != param_2) {
      if ((*(int *)(param_2 + 0x20) == *(int *)(param_1 + 0xa8)) &&
         (((*(int *)(param_2 + 0x10) == 0 || (*(int *)(param_1 + 0x9c) == 0)) ||
          (*(int *)(param_2 + 0x18) == *(int *)(param_1 + 0x9c))))) {
        if (iVar1 != 0) {
          FUN_10019d20();
        }
        *(int *)(param_1 + 0xa0) = param_2;
        FUN_10019bc0();
      }
      else {
        if ((iVar1 == 0) && (iVar1 = FUN_10016350(param_1,0,*(int *)(param_1 + 0xa8)), iVar1 == 0))
        {
          return 0;
        }
        iVar1 = FUN_1001a050();
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    iVar1 = FUN_100203f0();
    if ((iVar1 == 0) || (iVar1 = FUN_100203f0(), iVar1 != 0)) {
      iVar1 = FUN_100203f0();
      if ((iVar1 == 0) && (iVar1 = FUN_100203f0(), iVar1 != 0)) {
        *(undefined4 *)(param_1 + 0xb8) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xb8) = 0;
      iVar1 = FUN_10017a00(param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

