/*
 * FUN_004742ac at 004742ac
 * undefined __register FUN_004742ac(int * param_1, char param_2, undefined4 * param_3, undefined1 param_4, int param_5, undefined4 * param_6, undefined4 * param_7, ushort param_8, int * param_9, int param_10, undefined4 * param_11, undefined4 * param_12)
 * Address ranges: 004742ac-00474359
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004742ac(int *param_1,char param_2,undefined4 *param_3,undefined1 param_4,int param_5,
                 undefined4 *param_6,undefined4 *param_7,ushort param_8,int *param_9,int param_10,
                 undefined4 *param_11,undefined4 *param_12)

{
  undefined4 *extraout_ECX;
  int iVar1;
  undefined1 extraout_DL;
  undefined1 uVar2;
  undefined4 *puVar3;
  VARIANT *pVVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 in_stack_ffffffc4;
  undefined4 in_stack_ffffffc8;
  VARIANT local_24;
  undefined4 *local_10;
  undefined1 local_9;
  int *local_8;
  
  bVar5 = 0;
  uVar2 = 0;
  if (param_2 != '\0') {
    puStack_40 = (undefined1 *)0x4742c0;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffc4,in_stack_ffffffc8);
    param_3 = extraout_ECX;
    uVar2 = extraout_DL;
  }
  puVar3 = param_7;
  pVVar4 = &local_24;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)&pVVar4->n1 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    pVVar4 = (VARIANT *)((int)pVVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  puStack_40 = (undefined1 *)0x4742e0;
  local_10 = param_3;
  local_9 = uVar2;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_40 = (undefined1 *)0x4742e8;
  FUN_004041e4((int)param_6);
  puStack_44 = &LAB_0047435a;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  pVVar4 = &local_24;
  puStack_40 = &stack0xfffffffc;
  FUN_004953ec(local_8,'\0',local_10,(undefined4 *)pVVar4,param_8,param_9,param_10,param_11,param_12
              );
  local_8[0xc] = param_5;
  FUN_00403e04(local_8 + 0xd,param_6);
  *(undefined1 *)(local_8 + 0xe) = param_4;
  *in_FS_OFFSET = pVVar4;
  FUN_00405bcc(&local_24);
  FUN_00403db0((int *)&param_6);
  return;
}

