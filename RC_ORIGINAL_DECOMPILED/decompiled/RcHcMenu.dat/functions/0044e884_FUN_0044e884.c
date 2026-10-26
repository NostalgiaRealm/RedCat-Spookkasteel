/*
 * FUN_0044e884 at 0044e884
 * undefined __register FUN_0044e884(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 0044e884-0044e97f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044e884(int *param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  undefined **ppuVar2;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  byte **ppbVar4;
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
    puStack_130 = (undefined1 *)0x44e8a2;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffed4,in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_134 = &LAB_0044e9a0;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puStack_13c = (undefined1 *)0x44e8c4;
  puStack_130 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_0040e444(*(int *)PTR_DAT_005725e4);
  puStack_140 = &LAB_0044e980;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  puStack_13c = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x38))(local_8,0,param_3);
  ppuVar2 = (undefined **)FUN_00402fdc(local_8);
  if ((ppuVar2 != &PTR_FUN_00447d68) && ((*(byte *)(local_8 + 8) & 0x10) == 0)) {
    cVar1 = FUN_00411ee0(local_8,&PTR_FUN_00447d68);
    if (cVar1 == '\0') {
      FUN_00402fe0(*local_8,local_114);
      local_14 = local_114;
      local_10 = 4;
      ppbVar4 = &local_14;
      uVar3 = 0;
      FUN_00406a48((undefined4 *)PTR_PTR_00572300,(int *)&local_118);
      uVar3 = FUN_0040cf28((int)&DAT_004104f8,'\x01',local_118,uVar3,ppbVar4);
      FUN_0040382c(uVar3);
    }
    if ((char)local_8[0x12] != '\0') {
      (**(code **)(*local_8 + 0x30))();
    }
  }
  *in_FS_OFFSET = 0;
  puStack_140 = &LAB_0044e987;
  uStack_144 = 0x44e97f;
  FUN_0040e490(*(int *)PTR_DAT_005725e4);
  return;
}

