/*
 * FUN_00552878 at 00552878
 * int * __register FUN_00552878(undefined4 param_1, int * param_2, int * param_3)
 * Address ranges: 00552878-00552937
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00552878(undefined4 param_1,int *param_2,int *param_3)

{
  POINT pt;
  undefined4 uVar1;
  int iVar2;
  BOOL BVar3;
  int *piVar4;
  LONG LVar5;
  LONG LVar6;
  RECT local_38;
  int *local_28;
  LONG local_24;
  LONG local_20;
  uint local_1c;
  int *local_18;
  int local_14;
  int iStack_10;
  int *local_c;
  undefined4 local_8;
  
  local_14 = *param_3;
  iStack_10 = param_3[1];
  local_18 = param_2;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0042ebec);
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_00403224(local_c,(int)&PTR_FUN_0042ebec);
    iVar2 = FUN_0043579c(iVar2);
    local_1c = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      local_1c = thunk_FUN_00402874(local_1c);
    }
    if (-1 < (int)local_1c) {
      do {
        iVar2 = FUN_00403224(local_c,(int)&PTR_FUN_0042ebec);
        local_28 = (int *)FUN_00435760(iVar2,local_1c);
        FUN_004322b8(local_28,&local_14,&local_24);
        LVar5 = local_24;
        LVar6 = local_20;
        (**(code **)(*local_28 + 0x40))(local_28,&local_38);
        pt.y = LVar6;
        pt.x = LVar5;
        BVar3 = PtInRect(&local_38,pt);
        if (BVar3 != 0) {
          piVar4 = FUN_00552878(local_8,local_28,&local_14);
          return piVar4;
        }
        local_1c = local_1c - 1;
      } while (local_1c != 0xffffffff);
    }
  }
  return local_18;
}

