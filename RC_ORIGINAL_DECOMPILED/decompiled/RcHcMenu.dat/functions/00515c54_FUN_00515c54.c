/*
 * FUN_00515c54 at 00515c54
 * undefined __register FUN_00515c54(int * param_1, int * param_2)
 * Address ranges: 00515c54-00515e13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00515c54(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  char *pcStack_254;
  undefined4 uStack_238;
  undefined1 *puStack_234;
  undefined1 *puStack_230;
  byte local_22c [256];
  int local_12c [3];
  uint *local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  int *local_14;
  undefined1 local_d;
  int *local_c;
  int *local_8;
  
  puStack_230 = &stack0xfffffffc;
  local_12c[2] = 0;
  local_12c[1] = 0;
  local_12c[0] = 0;
  local_120 = (uint *)0x0;
  local_18 = 0;
  local_1c = 0;
  puStack_234 = &LAB_00515e14;
  uStack_238 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_238;
  local_d = 0;
  local_c = param_2;
  local_8 = param_1;
  local_14 = (int *)FUN_004949bc(param_2);
  uVar1 = FUN_00496b30(local_14);
  if ((char)uVar1 == '\0') {
    FUN_00402fe0(*local_8,local_11c);
    FUN_00403fd4(&local_1c,local_11c);
    FUN_004040f0(&local_18,3);
    FUN_00403d94(local_18);
  }
  uVar1 = FUN_0040320c(local_14,(int)&PTR_FUN_0048b6c0);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_0040320c(local_14,(int)&PTR_FUN_004897ec);
    uVar4 = (char)uVar1 == '\0';
    if ((bool)uVar4) {
      FUN_00402fe0(*local_8,local_11c);
      FUN_00403fd4(local_12c + 1,local_11c);
      FUN_00402fe0(*local_14,local_22c);
      FUN_00403fd4(local_12c,local_22c);
      pcStack_254 = " as primary key not supported yet.";
      FUN_004040f0(local_12c + 2,4);
      FUN_00403d94(local_12c[2]);
    }
    else {
      piVar2 = (int *)FUN_00403224(local_14,(int)&PTR_FUN_004897ec);
      (**(code **)(*piVar2 + 0x6c))(piVar2,&local_120);
      FUN_00404140((uint *)local_8[3],local_120);
      local_d = uVar4;
    }
  }
  else {
    piVar2 = (int *)FUN_00403224(local_14,(int)&PTR_FUN_0048b6c0);
    iVar3 = (**(code **)(*piVar2 + 0x70))();
    local_d = iVar3 == local_8[2];
  }
  *in_FS_OFFSET = pcStack_254;
  FUN_00403dd4(local_12c,4);
  FUN_00403dd4(&local_1c,2);
  return;
}

