/*
 * FUN_0052dcc0 at 0052dcc0
 * undefined1 __register FUN_0052dcc0(int param_1, int * param_2)
 * Address ranges: 0052dcc0-0052dd67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_0052dcc0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  byte local_38 [28];
  int local_1c;
  int *local_18;
  int local_14;
  undefined1 local_d;
  int *local_c;
  int local_8;
  
  local_c = param_2;
  local_8 = param_1;
  iVar1 = FUN_0048ec24(*(int *)(param_1 + 0x90));
  if (iVar1 == 0) {
    local_d = 1;
  }
  else {
    local_d = 0;
    iVar1 = FUN_0048ec24(*(int *)(local_8 + 0x90));
    uVar2 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    if (-1 < (int)uVar2) {
      local_1c = uVar2 + 1;
      local_14 = 0;
      do {
        FUN_0048f02c(*(int **)(local_8 + 0x90),local_14,(undefined4 *)local_38);
        local_18 = (int *)FUN_00494c5c(local_c,local_38);
        if ((local_18 != (int *)0x0) &&
           ((uVar3 = FUN_0052dc4c(local_18), (char)uVar3 != '\0' ||
            (uVar3 = FUN_0052dc80(local_18), (char)uVar3 != '\0')))) {
          return 1;
        }
        local_14 = local_14 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  return local_d;
}

