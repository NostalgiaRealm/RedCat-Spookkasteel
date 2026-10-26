/*
 * FUN_004180c8 at 004180c8
 * undefined __register FUN_004180c8(int param_1, int param_2, undefined4 param_3, int param_4)
 * Address ranges: 004180c8-00418127
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004180c8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  char *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (char *)0x0;
  puStack_18 = &LAB_00418128;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcVar2 = (code *)FUN_00411b24(param_1);
  uVar3 = extraout_ECX;
  if (pcVar2 != (code *)0x0) {
    cVar1 = (*pcVar2)(param_2,&local_8);
    uVar3 = extraout_ECX_00;
    if (cVar1 != '\0') {
      FUN_00417ce8(*(int *)(param_4 + -4),local_8);
      goto LAB_00418112;
    }
  }
  FUN_00417dac(*(int *)(param_4 + -4),param_2,uVar3);
LAB_00418112:
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0041812f;
  puStack_18 = (undefined1 *)0x418127;
  FUN_00403db0((int *)&local_8);
  return;
}

