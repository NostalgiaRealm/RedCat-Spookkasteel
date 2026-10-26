/*
 * FUN_0048b334 at 0048b334
 * undefined __register FUN_0048b334(int * param_1, char param_2, undefined4 * param_3, int param_4, int param_5, undefined2 param_6, undefined4 param_7, undefined4 param_8, undefined2 param_9, undefined4 * param_10, ushort param_11, int * param_12, int param_13, undefined4 * param_14, undefined4 * param_15)
 * Address ranges: 0048b334-0048b488
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048b334(int *param_1,char param_2,undefined4 *param_3,int param_4,int param_5,
                 undefined2 param_6,undefined4 param_7,undefined4 param_8,undefined2 param_9,
                 undefined4 *param_10,ushort param_11,int *param_12,int param_13,
                 undefined4 *param_14,undefined4 *param_15)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int iVar3;
  undefined1 extraout_DL;
  undefined1 uVar4;
  VARIANT *pVVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  float10 in_ST0;
  float10 in_ST1;
  char *pcStackY_178;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined1 *puStack_14c;
  undefined4 in_stack_fffffeb8;
  undefined4 in_stack_fffffebc;
  byte local_12c [256];
  int local_2c;
  int local_28;
  VARIANT local_24;
  undefined4 *local_10;
  undefined1 local_9;
  int *local_8;
  
  bVar6 = 0;
  local_28 = 0;
  local_2c = 0;
  uVar4 = 0;
  if (param_2 != '\0') {
    puStack_14c = (undefined1 *)0x48b354;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffeb8,in_stack_fffffebc);
    param_3 = extraout_ECX;
    uVar4 = extraout_DL;
  }
  pVVar5 = &local_24;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)&pVVar5->n1 = *param_10;
    param_10 = param_10 + (uint)bVar6 * -2 + 1;
    pVVar5 = (VARIANT *)((int)pVVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  puStack_14c = (undefined1 *)0x48b374;
  local_10 = param_3;
  local_9 = uVar4;
  local_8 = param_1;
  FUN_00405bd4(&local_24);
  puStack_150 = &LAB_0048b489;
  uStack_154 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_154;
  puStack_14c = &stack0xfffffffc;
  FUN_004953ec(local_8,'\0',local_10,(undefined4 *)&local_24,param_11,param_12,param_13,param_14,
               param_15);
  local_8[0xc] = param_4;
  local_8[0xd] = param_5;
  *(undefined2 *)(local_8 + 0xe) = param_6;
  *(undefined4 *)((int)local_8 + 0x3a) = param_7;
  *(undefined4 *)((int)local_8 + 0x3e) = param_8;
  *(undefined2 *)((int)local_8 + 0x42) = param_9;
  uVar2 = FUN_00405c08((short *)&local_24);
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_00405c2c((short *)&local_24);
    if (!bVar1) {
      FUN_004051ec(&local_24);
      if (*(float10 *)((int)local_8 + 0x3a) <= in_ST0) {
        FUN_004051ec(&local_24);
        if (in_ST1 <= *(float10 *)(local_8 + 0xc)) goto LAB_0048b466;
      }
      FUN_00402fe0(*local_8,local_12c);
      FUN_00403fd4(&local_2c,local_12c);
      pcStackY_178 = "Default value must be between min and max value";
      FUN_004040f0(&local_28,3);
      FUN_00403d94(local_28);
    }
  }
LAB_0048b466:
  *in_FS_OFFSET = pcStackY_178;
  FUN_00403dd4(&local_2c,2);
  FUN_00405bcc(&local_24);
  return;
}

