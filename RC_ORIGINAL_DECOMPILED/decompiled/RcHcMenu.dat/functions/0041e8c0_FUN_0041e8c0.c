/*
 * FUN_0041e8c0 at 0041e8c0
 * undefined __register FUN_0041e8c0(int * param_1, char param_2)
 * Address ranges: 0041e8c0-0041e99c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041e8c0(int *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined **ppuVar2;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  uVar1 = 0;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  if (param_2 != '\0') {
    puStack_30 = (undefined1 *)0x41e8d7;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,0,in_stack_ffffffd4,in_stack_ffffffd8);
    uVar1 = extraout_ECX;
  }
  puStack_34 = &LAB_0041e99d;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_00403064(param_1,'\0',uVar1);
  uVar1 = 0;
  ppuVar2 = &PTR_FUN_0041ab68;
  FUN_00406a48((undefined4 *)PTR_PTR_00572354,(int *)&local_8);
  FUN_0041ea40(param_1,&DAT_0041e9cc,local_8,ppuVar2,uVar1);
  uVar1 = 0;
  ppuVar2 = &PTR_FUN_0041ab68;
  FUN_00406a48((undefined4 *)PTR_PTR_005720e4,(int *)&local_c);
  FUN_0041ea40(param_1,&DAT_0041e9d8,local_c,ppuVar2,uVar1);
  uVar1 = 0;
  ppuVar2 = &PTR_FUN_0041ae18;
  FUN_00406a48((undefined4 *)PTR_PTR_005720e0,(int *)&local_10);
  FUN_0041ea40(param_1,&DAT_0041e9e4,local_10,ppuVar2,uVar1);
  uVar1 = 0;
  ppuVar2 = &PTR_FUN_0041acd8;
  FUN_00406a48((undefined4 *)PTR_PTR_005720d8,(int *)&local_14);
  FUN_0041ea40(param_1,&LAB_0041e9f0,local_14,ppuVar2,uVar1);
  *in_FS_OFFSET = ppuVar2;
  FUN_00403dd4((int *)&local_14,4);
  return;
}

