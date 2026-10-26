/*
 * FUN_00492aa8 at 00492aa8
 * undefined __register FUN_00492aa8(int param_1, int * param_2, undefined4 param_3)
 * Address ranges: 00492aa8-00492b1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00492aa8(int param_1,int *param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  undefined4 extraout_EDX_01;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_c = param_2;
  local_8 = param_1;
  iVar2 = FUN_00491c94(param_1,param_2,param_3);
  iVar2 = FUN_0045da14(iVar2);
  uVar3 = iVar2 - 1;
  uVar5 = extraout_ECX;
  uVar6 = extraout_EDX;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
    uVar5 = extraout_ECX_00;
    uVar6 = extraout_EDX_00;
  }
  if (-1 < (int)uVar3) {
    local_24 = uVar3 + 1;
    local_10 = 0;
    do {
      piVar4 = (int *)FUN_00491c94(local_8,uVar6,uVar5);
      sVar1 = FUN_0045db38(piVar4,local_10);
      local_14 = (int)sVar1;
      FUN_00494a28(local_c,local_14,'\0',&local_20,&local_18,&local_1c);
      FUN_00403094(local_18);
      local_10 = local_10 + 1;
      local_24 = local_24 + -1;
      uVar5 = extraout_ECX_01;
      uVar6 = extraout_EDX_01;
    } while (local_24 != 0);
  }
  return;
}

