/*
 * FUN_00491f8c at 00491f8c
 * undefined1 __register FUN_00491f8c(int param_1, int * param_2)
 * Address ranges: 00491f8c-0049200f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00491f8c(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  byte local_34 [28];
  int local_18;
  int local_14;
  undefined1 local_d;
  int *local_c;
  int local_8;
  
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    FUN_00403d94(".IsOnlyNativeProps:  Parameter cannot be nil");
  }
  local_d = 1;
  iVar2 = FUN_0048ec24((int)local_c);
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_18 = uVar3 + 1;
    local_14 = 0;
    do {
      FUN_0048f02c(local_c,local_14,(undefined4 *)local_34);
      piVar4 = (int *)FUN_00491e30(local_8,extraout_EDX,extraout_ECX);
      cVar1 = FUN_0048ef44(piVar4,local_34);
      if (cVar1 == '\0') {
        return 0;
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return local_d;
}

