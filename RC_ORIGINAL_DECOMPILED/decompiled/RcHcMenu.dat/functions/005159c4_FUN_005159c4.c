/*
 * FUN_005159c4 at 005159c4
 * undefined __register FUN_005159c4(int * param_1, char param_2, int * param_3)
 * Address ranges: 005159c4-00515b91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005159c4(int *param_1,char param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcStackY_268;
  undefined4 uStackY_24c;
  undefined1 *puStackY_248;
  undefined1 *puStackY_244;
  undefined4 in_stack_fffffdc0;
  undefined4 in_stack_fffffdc4;
  byte local_22c [256];
  int local_12c [3];
  undefined4 *local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  undefined1 local_9;
  int *local_8;
  
  local_12c[2] = 0;
  local_12c[1] = 0;
  local_12c[0] = 0;
  local_120 = (undefined4 *)0x0;
  local_18 = 0;
  local_1c = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_244 = (undefined1 *)0x5159fa;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffdc0,in_stack_fffffdc4);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_248 = &LAB_00515b92;
  uStackY_24c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_24c;
  puStackY_244 = &stack0xfffffffc;
  local_10 = param_3;
  local_8 = param_1;
  FUN_0045b418(param_1,'\0',param_3);
  local_14 = (int *)FUN_004949bc(local_10);
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
    if ((char)uVar1 == '\0') {
      FUN_00402fe0(*local_8,local_11c);
      FUN_00403fd4(local_12c + 1,local_11c);
      FUN_00402fe0(*local_14,local_22c);
      FUN_00403fd4(local_12c,local_22c);
      pcStackY_268 = " as primary key not supported yet.";
      FUN_004040f0(local_12c + 2,4);
      FUN_00403d94(local_12c[2]);
    }
    else {
      piVar2 = (int *)FUN_00403224(local_14,(int)&PTR_FUN_004897ec);
      (**(code **)(*piVar2 + 0x6c))(piVar2,&local_120);
      FUN_00403e04(local_8 + 3,local_120);
    }
  }
  else {
    piVar2 = (int *)FUN_00403224(local_14,(int)&PTR_FUN_0048b6c0);
    iVar3 = (**(code **)(*piVar2 + 0x70))();
    local_8[2] = iVar3;
  }
  *in_FS_OFFSET = pcStackY_268;
  FUN_00403dd4(local_12c,4);
  FUN_00403dd4(&local_1c,2);
  return;
}

