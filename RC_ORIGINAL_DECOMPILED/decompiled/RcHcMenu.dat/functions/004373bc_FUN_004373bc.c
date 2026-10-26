/*
 * FUN_004373bc at 004373bc
 * undefined __register FUN_004373bc(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 004373bc-00437462
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004373bc(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_18 = &LAB_00437463;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if ((param_2 != (char)param_1[0x51]) &&
     (*(char *)(param_1 + 0x51) = param_2, (*(byte *)(param_1 + 8) & 0x10) == 0)) {
    FUN_00430628((int)param_1,param_2,param_3);
    if (param_2 == '\0') {
      FUN_00403094((int *)param_1[0x50]);
      param_1[0x50] = 0;
      FUN_00406aa0(param_1 + 0x52);
    }
    else {
      uVar2 = extraout_ECX;
      if (param_1[0x50] == 0) {
        iVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX);
        param_1[0x50] = iVar1;
        uVar2 = extraout_ECX_00;
      }
      FUN_00403270(param_1,&local_8,uVar2);
      FUN_00406ab8(param_1 + 0x52,local_8);
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0043746a;
  puStack_18 = (undefined1 *)0x437462;
  FUN_00406aa0((int *)&local_8);
  return;
}

