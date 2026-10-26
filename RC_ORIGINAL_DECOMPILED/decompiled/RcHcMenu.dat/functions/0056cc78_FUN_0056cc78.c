/*
 * FUN_0056cc78 at 0056cc78
 * undefined __register FUN_0056cc78(int * param_1, char param_2)
 * Address ranges: 0056cc78-0056ccf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056cc78(int *param_1,char param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcVar3;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  undefined *local_10;
  undefined1 local_9;
  int *local_8;
  
  uVar2 = 0;
  local_10 = (undefined *)0x0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_24 = (undefined1 *)0x56cc8f;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,0,in_stack_ffffffe0,in_stack_ffffffe4);
    uVar2 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_28 = &LAB_0056ccf8;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_00403064(param_1,'\0',uVar2);
  bVar1 = FUN_0056ca58();
  if (bVar1) {
    pcVar3 = "** Exception logging started ** ";
    FUN_0056cffc(*local_8,0,0,0x56cd28);
  }
  else {
    FUN_00406a48(&PTR_DAT_0056cc70,(int *)&local_10);
    pcVar3 = (char *)0x56cce2;
    FUN_004579bc(local_10,'\0');
  }
  *in_FS_OFFSET = pcVar3;
  puStack_28 = &LAB_0056ccff;
  uStack_2c = 0x56ccf7;
  FUN_00403db0((int *)&local_10);
  return;
}

