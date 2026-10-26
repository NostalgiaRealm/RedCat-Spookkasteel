/*
 * FUN_0049530c at 0049530c
 * int * __register FUN_0049530c(int param_1)
 * Address ranges: 0049530c-004953ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0049530c(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  byte local_38 [28];
  int local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_c = (int *)0x0;
  local_8 = param_1;
  local_18 = (int *)FUN_00493c6c(param_1);
  iVar2 = FUN_00494858(local_18);
  iVar2 = FUN_00491e30(iVar2,extraout_EDX,extraout_ECX);
  iVar2 = FUN_0048ec24(iVar2);
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_1c = uVar3 + 1;
    local_10 = 0;
    do {
      iVar2 = FUN_00494858(local_18);
      piVar4 = (int *)FUN_00491e30(iVar2,extraout_EDX_00,extraout_ECX_00);
      FUN_0048f02c(piVar4,local_10,(undefined4 *)local_38);
      piVar4 = (int *)FUN_00494c5c(local_18,local_38);
      uVar5 = FUN_0040320c(piVar4,(int)&PTR_FUN_00474160);
      if ((char)uVar5 != '\0') {
        iVar2 = FUN_00494858(local_18);
        piVar4 = (int *)FUN_00491e30(iVar2,extraout_EDX_01,extraout_ECX_01);
        FUN_0048f02c(piVar4,local_10,(undefined4 *)local_38);
        piVar4 = (int *)FUN_00494c5c(local_18,local_38);
        local_14 = (int *)FUN_00403224(piVar4,(int)&PTR_FUN_00474160);
        bVar1 = FUN_0047445c((int)local_14);
        if ((bVar1) && (iVar2 = FUN_004744a0(local_14), iVar2 == local_8)) {
          return local_14;
        }
      }
      local_10 = local_10 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return local_c;
}

