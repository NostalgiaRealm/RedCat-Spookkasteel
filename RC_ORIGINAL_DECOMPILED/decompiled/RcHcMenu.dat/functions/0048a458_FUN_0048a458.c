/*
 * FUN_0048a458 at 0048a458
 * undefined __register FUN_0048a458(int param_1, int * param_2, int * param_3, undefined4 param_4, undefined4 * param_5, undefined2 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 * Address ranges: 0048a458-0048a59e;0048a603-0048a640
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048a458(int param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 *param_5,
                 undefined2 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int *piVar1;
  int iVar2;
  VARIANT *pVVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_25c;
  undefined1 *puStack_258;
  undefined1 *puStack_254;
  undefined4 uStack_250;
  undefined1 *puStack_24c;
  undefined1 *puStack_248;
  int local_238 [2];
  byte local_230 [256];
  int local_130;
  byte local_12c [256];
  int local_2c;
  int local_28;
  VARIANT local_24;
  int local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  local_238[1] = 0;
  local_238[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_130 = 0;
  pVVar3 = &local_24;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)&pVVar3->n1 = *param_5;
    param_5 = param_5 + 1;
    pVVar3 = (VARIANT *)((int)&pVVar3->n1 + 4);
  }
  puStack_248 = (undefined1 *)0x48a49e;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_24c = &LAB_0048a641;
  uStack_250 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_250;
  puStack_258 = &LAB_0048a59f;
  uStack_25c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_25c;
  puStack_254 = &stack0xfffffffc;
  puStack_248 = &stack0xfffffffc;
  if (*local_10 != 0) {
    puStack_254 = &stack0xfffffffc;
    puStack_248 = &stack0xfffffffc;
    FUN_00402fe0(local_8,local_12c);
    FUN_00403fd4(&local_2c,local_12c);
    FUN_00402fe0(*local_c,local_230);
    FUN_00403fd4(&local_130,local_230);
    FUN_004040f0(&local_28,7);
    FUN_00403d94(local_28);
  }
  piVar1 = FUN_00495ac4((int *)&PTR_FUN_004897ec,'\x01',(int)local_c,0);
  *local_10 = (int)piVar1;
  piVar1 = local_10;
  local_14 = func_0x004898f4(&PTR_FUN_00489774,1,param_9,param_4,&local_24,param_6,local_10,local_c,
                             param_7,param_8);
  iVar2 = FUN_00494858(local_c);
  FUN_004958f4(local_14,iVar2);
  *in_FS_OFFSET = param_4;
  *in_FS_OFFSET = piVar1;
  FUN_00403dd4(local_238,2);
  FUN_00403db0(&local_130);
  FUN_00403dd4(&local_2c,2);
  FUN_00405bcc(&local_24);
  return;
}

