/*
 * FUN_00449cd0 at 00449cd0
 * undefined __register FUN_00449cd0(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 00449cd0-00449ddb;00449dfa-00449e13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00449cd0(int *param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffea4;
  byte **ppbVar4;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined1 *puStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined4 in_stack_fffffed4;
  undefined4 in_stack_fffffed8;
  byte *local_118;
  byte local_114 [256];
  byte *local_14;
  undefined1 local_10;
  undefined1 local_9;
  int *local_8;
  
  local_118 = (byte *)0x0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_130 = (undefined1 *)0x449cee;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffed4,in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_134 = &LAB_00449e34;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puStack_13c = (undefined1 *)0x449d10;
  puStack_130 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_0040e444(*(int *)PTR_DAT_005725e4);
  puStack_140 = &LAB_00449e14;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  uStack_148 = 0;
  puStack_14c = (undefined1 *)0x449d2f;
  puStack_13c = &stack0xfffffffc;
  (**(code **)(*local_8 + 0xcc))(local_8,0,param_3);
  puStack_14c = (undefined1 *)0x449d37;
  ppuVar2 = (undefined **)FUN_00402fdc(local_8);
  if ((ppuVar2 != &PTR_FUN_00446f0c) && ((*(byte *)(local_8 + 8) & 0x10) == 0)) {
    *(byte *)(local_8 + 0xb3) = *(byte *)(local_8 + 0xb3) | 1;
    puStack_150 = &LAB_00449ddc;
    uStack_154 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_154;
    puStack_14c = &stack0xfffffffc;
    cVar1 = FUN_00411ee0(local_8,&PTR_FUN_00446f0c);
    if (cVar1 == '\0') {
      FUN_00402fe0(*local_8,local_114);
      local_14 = local_114;
      local_10 = 4;
      ppbVar4 = &local_14;
      in_stack_fffffea4 = 0;
      FUN_00406a48((undefined4 *)PTR_PTR_00572300,(int *)&local_118);
      uVar3 = FUN_0040cf28((int)&DAT_004104f8,'\x01',local_118,in_stack_fffffea4,ppbVar4);
      FUN_0040382c(uVar3);
    }
    *in_FS_OFFSET = in_stack_fffffea4;
    *(byte *)(local_8 + 0xb3) = *(byte *)(local_8 + 0xb3) & 0xfe;
    return;
  }
  *in_FS_OFFSET = uStack_148;
  puStack_140 = &LAB_00449e1b;
  uStack_144 = 0x449e13;
  FUN_0040e490(*(int *)PTR_DAT_005725e4);
  return;
}

