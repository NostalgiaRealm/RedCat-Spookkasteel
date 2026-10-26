/*
 * FUN_004b2fa8 at 004b2fa8
 * undefined __register FUN_004b2fa8(int * param_1, char param_2, undefined4 * param_3)
 * Address ranges: 004b2fa8-004b3011
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b2fa8(int *param_1,char param_2,undefined4 *param_3)

{
  undefined4 *extraout_ECX;
  int iVar1;
  undefined4 extraout_ECX_00;
  undefined1 extraout_DL;
  undefined1 uVar2;
  VARIANT *pVVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 uStackY_40;
  undefined1 *puStackY_3c;
  undefined1 *puStackY_38;
  undefined4 in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  VARIANT local_1c;
  undefined1 local_9;
  int *local_8;
  
  bVar4 = 0;
  uVar2 = 0;
  if (param_2 != '\0') {
    puStackY_38 = (undefined1 *)0x4b2fbc;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffcc,in_stack_ffffffd0);
    param_3 = extraout_ECX;
    uVar2 = extraout_DL;
  }
  pVVar3 = &local_1c;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)&pVVar3->n1 = *param_3;
    param_3 = param_3 + (uint)bVar4 * -2 + 1;
    pVVar3 = (VARIANT *)((int)pVVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  puStackY_38 = (undefined1 *)0x4b2fd6;
  local_9 = uVar2;
  local_8 = param_1;
  FUN_00405bd4(&local_1c);
  puStackY_3c = &LAB_004b3012;
  uStackY_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_40;
  puStackY_38 = &stack0xfffffffc;
  FUN_0045b418(local_8,'\0',extraout_ECX_00);
  FUN_00404e28((VARIANT *)(local_8 + 2),&local_1c);
  *in_FS_OFFSET = uStackY_40;
  puStackY_38 = &LAB_004b3019;
  puStackY_3c = (undefined1 *)0x4b3011;
  FUN_00405bcc(&local_1c);
  return;
}

