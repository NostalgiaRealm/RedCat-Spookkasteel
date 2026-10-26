/*
 * FUN_004711f4 at 004711f4
 * undefined __register FUN_004711f4(int * param_1, int param_2)
 * Address ranges: 004711f4-00471323
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004711f4(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  byte *local_114;
  byte local_110 [256];
  byte *local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  local_114 = (byte *)0x0;
  local_8 = (undefined4 *)0x0;
  piVar4 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffed8;
  if (param_2 == param_1[0x1e]) goto LAB_00471303;
  if (param_2 != 0) {
    if (param_1 == *(int **)(param_2 + 0x28)) {
LAB_0047124d:
      FUN_00406a48((undefined4 *)PTR_PTR_00572364,(int *)&local_8);
      FUN_00466d84(local_8,(int)param_1);
    }
    else {
      iVar1 = (**(code **)(**(int **)(param_2 + 0x28) + 0x128))();
      if (iVar1 != 0) {
        iVar1 = (**(code **)(**(int **)(param_2 + 0x28) + 0x128))();
        if (param_1 == *(int **)(iVar1 + 0x24)) goto LAB_0047124d;
      }
    }
  }
  if (param_2 != 0) {
    uVar2 = thunk_FUN_004032a4(*param_1,*(int *)(*(int *)(param_2 + 0x28) + 0x80));
    if ((char)uVar2 == '\0') {
      piVar4 = param_1;
      FUN_00402fe0(*(int *)(*(int *)(param_2 + 0x28) + 0x80),local_110);
      local_10 = local_110;
      local_c = 4;
      FUN_00406a48((undefined4 *)PTR_PTR_00572498,(int *)&local_114);
      FUN_00466e30(local_114,&local_10,0,(int)piVar4);
    }
  }
  uVar3 = FUN_004714b4((int)param_1);
  uVar2 = extraout_ECX;
  if ((char)uVar3 != '\0') {
    FUN_004713cc(param_1);
    uVar2 = extraout_ECX_00;
  }
  if (param_1[0x1e] != 0) {
    FUN_0046dd34(param_1[0x1e],0,uVar2);
    uVar2 = extraout_ECX_01;
  }
  param_1[0x1e] = param_2;
  if (param_2 != 0) {
    FUN_0046dd34(param_2,(int)param_1,uVar2);
    uVar3 = FUN_004714b4(*(int *)(param_2 + 0x28));
    if ((char)uVar3 != '\0') {
      FUN_004713c0(param_1);
    }
  }
LAB_00471303:
  *in_FS_OFFSET = piVar4;
  FUN_00403db0((int *)&local_114);
  FUN_00403db0((int *)&local_8);
  return;
}

