/*
 * FUN_00431b8c at 00431b8c
 * undefined __register FUN_00431b8c(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 00431b8c-00431c06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00431b8c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (param_2 == 0) {
    FUN_00403094((int *)param_1[0x17]);
    param_1[0x17] = 0;
    param_1[0x10] = param_1[0x10] & 0xffff7fff;
  }
  else {
    param_1[0x10] = param_1[0x10] | 0x8000;
    if (param_1[0x17] == 0) {
      iVar1 = FUN_00403270(param_1,param_2,param_3);
      iVar1 = (**(code **)(iVar1 + 0x14))(iVar1,1,param_1);
      param_1[0x17] = iVar1;
    }
    (**(code **)(*(int *)param_1[0x17] + 0xc))((int *)param_1[0x17],param_2);
    iVar1 = param_1[0x17];
    *(int **)(iVar1 + 0xc) = param_1;
    *(undefined1 **)(iVar1 + 8) = &LAB_00434360;
    FUN_00403270(param_1,param_2,
                 CONCAT31((int3)((uint)extraout_ECX >> 8),(*(byte *)(param_2 + 0x20) & 1) != 0));
    FUN_00418fe0(param_2,(int)param_1,extraout_ECX_00);
  }
  return;
}

