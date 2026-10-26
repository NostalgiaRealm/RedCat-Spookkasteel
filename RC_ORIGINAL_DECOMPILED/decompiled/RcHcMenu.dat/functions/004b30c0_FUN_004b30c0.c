/*
 * FUN_004b30c0 at 004b30c0
 * undefined __register FUN_004b30c0(int * param_1, char param_2, undefined4 * param_3, undefined4 * param_4)
 * Address ranges: 004b30c0-004b314d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b30c0(int *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *extraout_ECX;
  int iVar1;
  undefined4 extraout_ECX_00;
  undefined1 extraout_DL;
  undefined1 uVar2;
  VARIANT *pVVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 uStackY_48;
  undefined1 *puStackY_44;
  undefined1 *puStackY_40;
  undefined4 in_stack_ffffffc4;
  undefined4 in_stack_ffffffc8;
  VARIANT local_24;
  undefined4 *local_10;
  undefined1 local_9;
  int *local_8;
  
  bVar4 = 0;
  uVar2 = 0;
  if (param_2 != '\0') {
    puStackY_40 = (undefined1 *)0x4b30d4;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffc4,in_stack_ffffffc8);
    param_3 = extraout_ECX;
    uVar2 = extraout_DL;
  }
  pVVar3 = &local_24;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)&pVVar3->n1 = *param_4;
    param_4 = param_4 + (uint)bVar4 * -2 + 1;
    pVVar3 = (VARIANT *)((int)pVVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  puStackY_40 = (undefined1 *)0x4b30f4;
  local_10 = param_3;
  local_9 = uVar2;
  local_8 = param_1;
  FUN_004041e4((int)param_3);
  puStackY_40 = (undefined1 *)0x4b30fc;
  FUN_00405bd4(&local_24);
  puStackY_44 = &LAB_004b314e;
  uStackY_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_48;
  puStackY_40 = &stack0xfffffffc;
  FUN_0045b418(local_8,'\0',extraout_ECX_00);
  FUN_00403e04(local_8 + 1,local_10);
  FUN_00404e28((VARIANT *)(local_8 + 2),&local_24);
  *in_FS_OFFSET = uStackY_48;
  puStackY_40 = &LAB_004b3155;
  puStackY_44 = (undefined1 *)0x4b3145;
  FUN_00405bcc(&local_24);
  puStackY_44 = (undefined1 *)0x4b314d;
  FUN_00403db0((int *)&local_10);
  return;
}

