/*
 * FUN_0048c090 at 0048c090
 * undefined __register FUN_0048c090(int param_1, int * param_2, int * param_3, undefined4 param_4, undefined4 param_5, undefined4 * param_6, undefined2 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10)
 * Address ranges: 0048c090-0048c1da;0048c23f-0048c27c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048c090(int param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 *param_6,undefined2 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  VARIANT *pVVar4;
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
  pVVar4 = &local_24;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)&pVVar4->n1 = *param_6;
    param_6 = param_6 + 1;
    pVVar4 = (VARIANT *)((int)&pVVar4->n1 + 4);
  }
  puStack_248 = (undefined1 *)0x48c0d6;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_24c = &LAB_0048c27d;
  uStack_250 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_250;
  puStack_258 = &LAB_0048c1db;
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
  piVar1 = FUN_00495ac4((int *)&PTR_FUN_0048b6c0,'\x01',(int)local_c,0);
  *local_10 = (int)piVar1;
  uVar2 = CONCAT22((short)((uint)local_10 >> 0x10),param_7);
  local_14 = func_0x0048b760(&PTR_FUN_0048b644,1,param_10,param_4,param_5,&local_24,uVar2,local_10,
                             local_c,param_8,param_9);
  iVar3 = FUN_00494858(local_c);
  FUN_004958f4(local_14,iVar3);
  *in_FS_OFFSET = param_4;
  *in_FS_OFFSET = uVar2;
  FUN_00403dd4(local_238,2);
  FUN_00403db0(&local_130);
  FUN_00403dd4(&local_2c,2);
  FUN_00405bcc(&local_24);
  return;
}

