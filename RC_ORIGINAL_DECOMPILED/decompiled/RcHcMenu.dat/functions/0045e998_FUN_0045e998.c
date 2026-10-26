/*
 * FUN_0045e998 at 0045e998
 * undefined __register FUN_0045e998(int * param_1, char param_2, int param_3, int param_4, DWORD param_5)
 * Address ranges: 0045e998-0045ea3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045e998(int *param_1,char param_2,int param_3,int param_4,DWORD param_5)

{
  int extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  DWORD local_18;
  undefined1 local_14;
  byte *local_10;
  undefined4 *local_c;
  undefined1 local_5;
  
  local_10 = (byte *)0x0;
  local_c = (undefined4 *)0x0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_38 = (undefined1 *)0x45e9b5;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffcc,in_stack_ffffffd0);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStack_3c = &LAB_0045ea3f;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  FUN_00403e48((int *)&local_c,param_3);
  if (local_c == (undefined4 *)0x0) {
    FUN_0040c6a0(param_5,(int *)&local_c);
    if (local_c == (undefined4 *)0x0) {
      uVar1 = 0;
      FUN_00406a48((undefined4 *)PTR_PTR_005720ec,(int *)&local_10);
      local_18 = param_5;
      local_14 = 0;
      FUN_0040a8a8((int *)&local_c,local_10,&local_18,uVar1);
    }
  }
  FUN_0040d078(param_1,'\0',local_c,param_4);
  param_1[3] = param_5;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0045ea46;
  puStack_3c = (undefined1 *)0x45ea3e;
  FUN_00403dd4((int *)&local_10,2);
  return;
}

