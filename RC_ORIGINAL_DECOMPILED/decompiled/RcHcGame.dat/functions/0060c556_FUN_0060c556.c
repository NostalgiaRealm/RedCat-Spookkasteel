/*
 * FUN_0060c556 at 0060c556
 * undefined FUN_0060c556(void)
 * Address ranges: 0060c556-0060c5c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060c556(int param_1,uint param_2,int *param_3,uint *param_4)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  if (DAT_00748ec8 == 0) {
    if (param_2 < *param_4) {
      iVar1 = param_2 - 1;
      if (param_2 != 0) {
        do {
          *(char *)(*param_3 + iVar1) = (char)(param_1 % 10) + '0';
          param_1 = param_1 / 10;
          local_8 = local_8 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != -1);
      }
      *param_3 = *param_3 + local_8;
      *param_4 = *param_4 - local_8;
    }
    else {
      *param_4 = 0;
    }
  }
  else {
    FUN_0060c5c5(param_1,param_3,param_4);
  }
  return;
}

