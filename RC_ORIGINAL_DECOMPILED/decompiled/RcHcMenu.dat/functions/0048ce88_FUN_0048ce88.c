/*
 * FUN_0048ce88 at 0048ce88
 * undefined __register FUN_0048ce88(int * param_1, char param_2, undefined4 * param_3, undefined1 param_4, int param_5, undefined4 * param_6, undefined4 * param_7, ushort param_8, int * param_9, int param_10, undefined4 * param_11, undefined4 * param_12)
 * Address ranges: 0048ce88-0048cf18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048ce88(int *param_1,char param_2,undefined4 *param_3,undefined1 param_4,int param_5,
                 undefined4 *param_6,undefined4 *param_7,ushort param_8,int *param_9,int param_10,
                 undefined4 *param_11,undefined4 *param_12)

{
  undefined4 *extraout_ECX;
  int iVar1;
  undefined1 extraout_DL;
  undefined1 uVar2;
  VARIANT *pVVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 in_stack_ffffffc4;
  undefined4 in_stack_ffffffc8;
  VARIANT local_24;
  undefined4 *local_10;
  undefined1 local_9;
  int *local_8;
  
  bVar4 = 0;
  uVar2 = 0;
  if (param_2 != '\0') {
    puStack_40 = (undefined1 *)0x48ce9c;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffc4,in_stack_ffffffc8);
    param_3 = extraout_ECX;
    uVar2 = extraout_DL;
  }
  pVVar3 = &local_24;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)&pVVar3->n1 = *param_7;
    param_7 = param_7 + (uint)bVar4 * -2 + 1;
    pVVar3 = (VARIANT *)((int)pVVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  puStack_40 = (undefined1 *)0x48cebc;
  local_10 = param_3;
  local_9 = uVar2;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_44 = &LAB_0048cf19;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  uVar5 = 1;
  puStack_40 = &stack0xfffffffc;
  FUN_004742ac(local_8,'\0',local_10,1,param_5,param_6,(undefined4 *)&local_24,param_8,param_9,
               param_10,param_11,param_12);
  *(undefined1 *)(local_8 + 0x10) = param_4;
  *in_FS_OFFSET = uVar5;
  FUN_00405bcc(&local_24);
  return;
}

